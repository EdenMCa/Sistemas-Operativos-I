// main.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <stdbool.h>

#define N_DATOS 20

/* Buffers y flags */
char datos_h2o[N_DATOS];
char datos_co2[N_DATOS];
char datos_pos[N_DATOS];
bool ready_h2o[N_DATOS], ready_co2[N_DATOS], ready_pos[N_DATOS];

/* Sincronización */
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  cv  = PTHREAD_COND_INITIALIZER;

/* Simulador H2O */
void* sim_H2O(void* _) {
    unsigned int seed = getpid() ^ time(NULL);
    for (int i = 0; i < N_DATOS; i++) {
        sleep(1);
        char c = (char)((rand_r(&seed) % 6) + 'a');
        pthread_mutex_lock(&mtx);
        datos_h2o[i] = c;
        ready_h2o[i] = true;
        pthread_cond_broadcast(&cv);
        pthread_mutex_unlock(&mtx);
    }
    return NULL;
}

/* Simulador CO2 */
void* sim_CO2(void* _) {
    unsigned int seed = getpid() ^ time(NULL) ^ 0xDEADBEEF;
    for (int i = 0; i < N_DATOS; i++) {
        sleep(1);
        char c = (char)((rand_r(&seed) % 6) + '0');
        pthread_mutex_lock(&mtx);
        datos_co2[i] = c;
        ready_co2[i] = true;
        pthread_cond_broadcast(&cv);
        pthread_mutex_unlock(&mtx);
    }
    return NULL;
}

/* Simulador POS (sleep fijo de 1s) */
void* sim_pos(void* _) {
    unsigned int seed = getpid() ^ time(NULL) ^ 0x12345678;
    char p = 'N';
    for (int i = 0; i < N_DATOS; i++) {
        pthread_mutex_lock(&mtx);
        datos_pos[i] = p;
        ready_pos[i] = true;
        pthread_cond_broadcast(&cv);
        pthread_mutex_unlock(&mtx);

        sleep(1);  // ahora fija 1s

        p = p + (rand_r(&seed) % 7) - 3;
        if (p < 'A') p = 'A';
        if (p > 'Z') p = 'Z';
    }
    return NULL;
}

int main(void) {
    pthread_t t1, t2, t3;
    struct timespec t0, t1t;

    clock_gettime(CLOCK_MONOTONIC, &t0);

    pthread_create(&t1, NULL, sim_H2O, NULL);
    pthread_create(&t2, NULL, sim_CO2, NULL);
    pthread_create(&t3, NULL, sim_pos, NULL);

    for (int i = 0; i < N_DATOS; i++) {
        pthread_mutex_lock(&mtx);
        while (!(ready_h2o[i] && ready_co2[i] && ready_pos[i])) {
            pthread_cond_wait(&cv, &mtx);
        }
        /* Imprime la tripleta en cuanto está lista */
        printf("%c%c%c", datos_pos[i], datos_h2o[i], datos_co2[i]);
        fflush(stdout);
        pthread_mutex_unlock(&mtx);
    }
    printf("\n");

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    clock_gettime(CLOCK_MONOTONIC, &t1t);
    double dur = (t1t.tv_sec - t0.tv_sec) + (t1t.tv_nsec - t0.tv_nsec)/1e9;

    printf("Resumen de tiempos:\n");
    printf("----------------------------------------------\n");
    printf("Tiempo total del de ejecucion: %.3f segundos\n", dur);
    printf("----------------------------------------------\n");

    return 0;
}

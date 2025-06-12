// PCL/Proyectos/P04/ejecuta_varios.c
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char * argv[])
{
    pid_t pid;
    int status;

    if (argc < 2) {
        fprintf(stderr, "Uso: %s prog1 [prog2 ... progN]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i < argc; i++) {
        printf("=== Ejecutando: %s ===\n", argv[i]);
        pid = fork();

        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0) {
            /* Código del hijo: reemplaza su imagen con el programa */
            execlp(argv[i], argv[i], NULL);
            /* Sólo se llega aquí si falla execlp */
            perror(argv[i]);
            exit(EXIT_FAILURE);
        }
        else {
            /* Código del padre: espera al hijo */
            if (wait(&status) == -1) {
                perror("wait");
                exit(EXIT_FAILURE);
            }
            if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
                printf("-> %s terminó correctamente.\n\n", argv[i]);
            else
                printf("-> %s finalizó con error (status=%d).\n\n", 
                       argv[i], WEXITSTATUS(status));
        }
    }

    return 0;
}

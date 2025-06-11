#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N_DATOS 20  // Longitud de la secuencia generada

int main(int argc, char* argv[])  // Falta el tipo de retorno 'int'
{
    char c;  // Solo necesitamos un carácter, no un array
    int i;

    if (argc != 1)
    {
        fprintf(stderr, "Uso: %s > fichero_salida\n", argv[0]);
        exit(1);
    }

    srandom(getpid());

    for (i=0; i<N_DATOS; i++) {
        sleep(1);
        c = random() % 6 + 'a';  // Genera un carácter entre 'a' y 'f'
        write(1, &c, 1);  // Escribe directamente el carácter
    }
    
    return 0;  // Buen estilo devolver un valor
}

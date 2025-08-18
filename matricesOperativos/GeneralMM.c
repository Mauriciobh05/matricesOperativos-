/**************************************************************************************
 * Fecha: 12/8/2025
 * Autor: Mauricio Beltrán Huertas
 * Materia: Sistemas Operativos
 * Tema: Generación de programa principal para la multiplicación de Matrices.
 * Objetivo: Implementar la multiplicación de matrices (versión secuencial primero).
 *************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

double *mA, *mB, *mC;

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Numero de argumentos incorrectos\n");
        printf("\n\tUso: %s DIM\n", argv[0]);
        return -1;
    }

    int N = (int) atof(argv[1]);
    if (N <= 0) {
        printf("\nEl valor de la dimension debe ser mayor que cero\n");
        return -1;
    }

    // Reserva de memoria
    mA = (double *) malloc(N * N * sizeof(double));
    mB = (double *) malloc(N * N * sizeof(double));
    mC = (double *) calloc(N * N, sizeof(double));

    if (!mA || !mB || !mC) {
        printf("Error al reservar memoria\n");
        free(mA); free(mB); free(mC);
        return -1;
    }

    // Inicializar matrices con valores simples
    for (int i = 0; i < N * N; i++) {
        mA[i] = 1.0;   // A llena de 1
        mB[i] = 2.0;   // B llena de 2
    }

    // Multiplicación clásica de matrices
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double suma = 0.0;
            for (int k = 0; k < N; k++) {
                suma += mA[i * N + k] * mB[k * N + j];
            }
            mC[i * N + j] = suma;
        }
    }

    // Imprimir resultado
    printf("\nMatriz resultado C (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", mC[i * N + j]);
        }
        printf("\n");
    }

    printf("\n\tFin del programa.............!\n");

    // Liberar memoria
    free(mA);
    free(mB);
    free(mC);

    return 0;
}

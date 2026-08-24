// Generalizar el ejercicio anterior para que la rotación sea un parámetro de entrada. Por ejemplo, si el arreglo es [1, 2, 3, 4] y la rotación es 2, el resultado debe ser [3, 4, 1, 2].

#include <stdio.h>

int main() {
    // Arreglo Hardcodeado
    int arreglo[] = {1,2,3,4};
    int tamano = 4;

    // parametro de entrada
    int rotacion = 2;

    // Ajustamos la rotación usando el residuo
    rotacion = rotacion % tamano;
    
    // Repetimos la rotación de 1 posición "rotacion" veces
    for (int r=0; r<rotacion; r++){

        // Algoritmo de rotacion de 1 elemento a la izquierda
        int primero = arreglo[0];
        for(int i=0; i<tamano-1;i++){
            arreglo[i] = arreglo[i+1];
        }
        arreglo[tamano-1] = primero;
    }

    // Imprimir el arreglo resultante
    printf("Arreglo rotado %d posiciones: [", rotacion);
    for (int i = 0; i < tamano; i++) {
        printf("%d%s", arreglo[i], (i < tamano - 1) ? ", " : "");
    }
    printf("]\n");

    return 0;
}


// NOTA:
// Si la variable rotacion fuera mayor al tamaño del arreglo (por ejemplo, rotar 6 veces un arreglo de tamaño 4), el resultado sería equivalente a rotarlo solo 6 % 4 = 2 veces.
// Puedes optimizarlo agregando antes del bucle:
// rotacion = rotacion % tamano;
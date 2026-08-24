// Realizar un programa que tire un dado de 6 caras 60 millones de veces y cuente la cantidad
// de veces que salió cada número. Para esto, usar un array de 6 elementos. Luego imprimir
// el resultado por pantalla. Para tirar el dado aleatoriamente, usar la función rand() de la
// librerı́a stdlib.h. Ver el ejemplo de uso provisto en https://en.cppreference.com/w/
// c/numeric/random/rand.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANZAMIENTOS 60000000

int main() {

    // Inicializamos el arreglo de 6 posiciones en cero
    int conteo[6] = {0};
    
    // Inicializar la semilla aleatoria
    srand((unsigned int)time(NULL));

    // Tiramos el dado
    for (int i=0; i<LANZAMIENTOS; i++){

        //rand() % 6 devuelve un número de 0 a 5.
        int dado = rand() % 6;
        conteo[dado]++;
    }

    // Mostrar los resultados
    printf("Resultados tras %d lanzamientos: \n", LANZAMIENTOS);
    for(int i=0; i<6; i++){
        printf("Cara %d: %d veces\n", i+1, conteo[i]);
    }
    
    return 0;
}

//-----------------------------------------------------------------------------

// Detalles importantes a tener en cuenta
// Mapeo del índice (0 a 5 vs 1 a 6): Un dado tiene valores del 1 al 6, pero los arreglos en C van desde el índice 0 hasta el 5. Usar rand() % 6 te da directamente una posición válida de 0 a 5, evitando tener que hacer un arreglo de tamaño 7 o restar 1 constantemente.

// Uso de srand(time(NULL)): Asegúrate de incluir srand() al inicio para inicializar la semilla aleatoria. Si no lo usas, rand() generará la misma secuencia exacta de números cada vez que ejecutes el programa.

// Proporción esperada: Al ejecutarlo, verás que cada cara sale aproximadamente 10 millones de veces (~16.6% cada una), demostrando la ley de los grandes números.

//-------------------------------------------------------------------------------

// ¿ QUE HACE LA SEMILLA ALEATORIA?
// inicializa la semilla del generador de números aleatorios.
// time(NULL) obtiene la hora actual en segundos.
// (unsigned int) convierte ese valor al tipo esperado por srand.
// srand(...) usa esa hora para que rand() produzca una secuencia diferente cada vez que ejecutas el programa.
// Sin esa línea, rand() normalmente generaría siempre la misma secuencia de números en cada ejecución.
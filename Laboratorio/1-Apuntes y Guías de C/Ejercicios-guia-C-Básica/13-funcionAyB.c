#include <stdio.h>

int g = 10;

void functionA(){
    int a = 20;
    static int b = 30;
    printf("Dentro de functionA:\n");
    printf(" g = %d\n", g);
    printf(" a = %d\n", a);
    printf(" b = %d\n", b);
    // Modificación de las variables
    g += 5;
    a += 10;
    b += 5;
}

void functionB(){
    int a = 40;
    static int c = 50;
    printf("\nDentro de functionB:\n");
    printf(" g = %d\n", g);
    printf(" a = %d\n", a);
    printf(" c = %d\n", c);
    // Modificación de las variables
    g += 5;
    a += 10;
    c += 5;
}

int main(){
    printf("Dentro de main:\n");
    printf(" g = %d\n", g);
    functionA();
    functionB();
    functionA();
    functionB();
    printf("\nFinal en main:\n");
    printf(" g = %d\n", g);
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------

// Desglosando los tres tipos de variables del ejercicio:

// g (Global - File scope, Duración estática): Es compartida por todo el archivo. Cada vez que functionA() o functionB() ejecutan g += 5;, están modificando esa misma variable global acumulativamente.

// a (Local - Block scope, Duración automática): Cada función tiene su propia variable local a independiente. Cuando la función termina, esa a se destruye, por lo que en cada nueva llamada se vuelve a crear desde cero con su valor inicial (20 en A, 40 en B).

// b y c (Locales estáticas - Block scope, Duración estática): b vive únicamente dentro de functionA() y c dentro de functionB(). Al ser static, no se reajustan cuando la función termina; conservan su valor y van acumulando los incrementos (+5) llamada tras llamada.

//-----------------------------------------------------------------------------------------------------------------------

// Seguimiento paso a paso del flujo del programa:
// main al inicio:

// Imprime g = 10.

// Primera llamada: functionA()

// Imprime: g = 10, a = 20, b = 30.

// Modifica: g pasa a 15, a pasa a 30 (y muere al salir), b pasa a 35 (y se guarda).

// Primera llamada: functionB()

// Imprime: g = 15, a = 40, c = 50.

// Modifica: g pasa a 20, a pasa a 50 (y muere al salir), c pasa a 55 (y se guarda).

// Segunda llamada: functionA()

// Imprime: g = 20, a = 20 (se reinició), b = 35 (retuvo el valor anterior).

// Modifica: g pasa a 25, b pasa a 40.

// Segunda llamada: functionB()

// Imprime: g = 25, a = 40 (se reinició), c = 55 (retuvo el valor anterior).

// Modifica: g pasa a 30, c pasa a 60.

// Final en main:

// Imprime g = 30.
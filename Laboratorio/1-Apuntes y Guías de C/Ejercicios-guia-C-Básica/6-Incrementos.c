#include <stdio.h> //Directiva "#include" tiene a stdio.h para poder usar printf()

int main() { // main es el punto de entrada
    

    int a = 5;
    int b = 5;

    int preIncremento = ++a;
    int postIncremento = b++;

    int op = a + b; // Aqui da op=12, porque le sumo 1 a b :D

    printf("Operador pre-incremento ++i (primero le suma 1 a la variable y luego devuelve ese nuevo valor para usarlo en la ecuación): %d \n", preIncremento);
    printf("Operador post-incremento i++ (primero devuelve el valor viejo para usarlo en la ecuación y despues recién de eso le suma a la variable): %d \n", postIncremento);
    printf("Operacion de incrementos: %d \n", op);

    return 0; // Significa que no hay errores
}
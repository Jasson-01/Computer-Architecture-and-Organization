#include <stdio.h>

int main(){
    int a = 0;

    a=1;

    printf("a = %d\n", a);  // 1
    printf("a++ = %d\n", a++); //1 --> Aqui devuelve el valor de "i" y luego incrementa "i"; por eso el valor sigue siendo el mismo que el anterior.
    printf("++a = %d\n", ++a); //3 --> Aqui incrementa "i" y luego devuelve el valor de "i"; el i ya esta incrementado por el anterior 2 ahora suma 1 => i=3
    printf("a = %d\n", a); //3

    return 0; 
}
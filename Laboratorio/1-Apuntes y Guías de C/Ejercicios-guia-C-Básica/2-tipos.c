#include <stdio.h>

int main(){
    char c = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;
    
    // %d --> SON MODIFICADORES --> Los modificadores cambian a como se traduce a decimal :D
    printf("char(%lu): %d \n", sizeof(c), c); // %lu --> (long unsigned), %d --> para imprimir un char/short/int, %ld --> para imprimir un long , NOTA: sizeof() --> me devuelve el tamaño del tipo de dato  en bytes!
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l); // %ld --> para imprimir un long, 
    
    return 0;
}
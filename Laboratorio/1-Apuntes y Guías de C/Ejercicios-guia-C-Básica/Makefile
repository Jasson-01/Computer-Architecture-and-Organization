# Meta por defecto: si ejecutas 'make', se construye el objetivo 'hola'.
all: hola 2-tipos 3-conversion-de-tipos 4-mensaje-secreto

# Regla para generar el ejecutable final 'hola'.
# Depende de 'hola.o', que es el archivo objeto compilado.
hola: hola.o 2-tipos.o 3-conversion-de-tipos.o 4-mensaje-secreto.o
	gcc -Wall -Wextra -pedantic hola.o -o hola

# Compilar el archivo fuente 'hola.c' a un objeto intermedio '.o'
# Esto convierte el código C en código objeto, listo para enlazar.
hola.o: hola.c 2-tipos.c 3-conversion-de-tipos.c 4-mensaje-secreto.c
	gcc -Wall -Wextra -pedantic -c hola.c -o hola.o

# Borrar los archivos compilados
# 'make clean' elimina el ejecutable y los objetos temporales.
clean:
	rm *.o hola 2-tipos 3-conversion-de-tipos 4-mensaje-secreto

# Indica que 'all' y 'clean' son metas de make, no archivos reales.
.PHONY: all clean
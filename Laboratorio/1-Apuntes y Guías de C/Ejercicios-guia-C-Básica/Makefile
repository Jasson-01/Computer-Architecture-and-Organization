# Meta por defecto: si ejecutas 'make', se construye el objetivo 'hola'.
all: 1-hola 13-funcionAyB

# Regla para generar el ejecutable final 'hola'.
# Depende de 'hola.o', que es el archivo objeto compilado.
hola: 1-hola.o 13-funcionAyB.o
	gcc -Wall -Wextra -pedantic hola.o -o hola

# Compilar el archivo fuente 'hola.c' a un objeto intermedio '.o'
# Esto convierte el código C en código objeto, listo para enlazar.
hola.o: 1-hola.c 13-funcionAyB.c
	gcc -Wall -Wextra -pedantic -c hola.c -o hola.o

# Borrar los archivos compilados
# 'make clean' elimina el ejecutable y los objetos temporales.
clean:
	rm *.o 1-hola 13-funcionAyB

# Indica que 'all' y 'clean' son metas de make, no archivos reales.
.PHONY: all clean
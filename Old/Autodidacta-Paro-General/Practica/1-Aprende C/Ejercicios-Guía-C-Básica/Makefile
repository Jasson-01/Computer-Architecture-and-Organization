# Meta por defecto: si ejecutas 'make', se construye el objetivo 'hola'.
all: hola

# Regla para generar el ejecutable final 'hola'.
# Depende de 'hola.o', que es el archivo objeto compilado.
hola: hola.o
	gcc -Wall -Wextra -pedantic hola.o -o hola

# Compilar el archivo fuente 'hola.c' a un objeto intermedio '.o'
# Esto convierte el código C en código objeto, listo para enlazar.
hola.o: hola.c
	gcc -Wall -Wextra -pedantic -c hola.c -o hola.o

# Borrar los archivos compilados
# 'make clean' elimina el ejecutable y los objetos temporales.
clean:
	rm *.o hola

# Indica que 'all' y 'clean' son metas de make, no archivos reales.
.PHONY: all clean
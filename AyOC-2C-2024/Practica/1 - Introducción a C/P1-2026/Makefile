# Como tus archivos (arrayA.c, strinB.c, funcionC.c) parecen ser ejercicios independientes, tienes dos opciones: o los unes todos para que funcionen juntos, o creas un Makefile que genere tres ejecutables distintos.

# Si quieres seguir la estructura exacta que me pasaste (donde todos se juntan en uno solo), el reemplazo sería así:

# CC := gcc
# # -Wall -Wextra -pedantic: Te avisa de TODO lo que esté mal
# # -O0: No optimiza (ideal para ver el código tal cual en Assembler)
# # -ggdb: Información extra para usar el debugger GDB
# CFLAGS := -Wall -Wextra -pedantic -std=c11 -O0 -ggdb

# TARGET := programa_final

# .PHONY: all clean rebuild

# all: $(TARGET)

# # 1. El TARGET depende de los tres archivos objeto (.o)
# $(TARGET): arrayTemperaturas.o stringGritar.o funcionElevarAlCuadrado.o
# 	$(CC) $(CFLAGS) $^ -o $@

# # 2. Reglas para compilar cada archivo individualmente
# # (Si no tienes archivos .h, simplemente quitalos de la línea de dependencia)
# arrayTemperaturas.o: arrayTemperaturas.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# stringGritar.o: stringGritar.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# funcionElevarAlCuadrado.o: funcionElevarAlCuadrado.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -rf *.o
# 	rm -rf $(TARGET)

# rebuild: clean all

#-----------------------------------------------------------------------------------------------------------------

# ¡Cuidado con el main!
# Para que este Makefile funcione y genere el binario, solo uno de tus archivos puede tener una función int main().

# Si los tres archivos tienen un main, el compilador te dará un error de "multiple definition of main".

# Si ese es tu caso (que cada uno es un ejercicio separado), lo ideal sería que cada uno tenga su propia regla para generar un ejecutable distinto.

# ¿Cómo sería si quieres 3 programas separados?
# Si quieres escribir make y que te salgan 3 archivos distintos para estudiar, el Makefile cambiaría a esto:

CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11 -O0 -ggdb

# Queremos generar tres ejecutables distintos
all: arrayTemperaturas stringGritar funcionElevarAlCuadrado binario

arrayTemperaturas: arrayTemperaturas.c
	$(CC) $(CFLAGS) $< -o $@

stringGritar: stringGritar.c
	$(CC) $(CFLAGS) $< -o $@

funcionElevarAlCuadrado: funcionElevarAlCuadrado.c
	$(CC) $(CFLAGS) $< -o $@


# El binario depende de ambos objetos
binario: main.o datos.o
	$(CC) $(CFLAGS) $^ -o $@

# Cada uno se compila por separado
main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

datos.o: datos.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f arrayTemperaturas stringGritar funcionElevarAlCuadrado binario *.o

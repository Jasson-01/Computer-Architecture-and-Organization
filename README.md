# Repositorio de Arquitectura y Organización de Computadoras

Este repositorio reúne material, apuntes y recursos relacionados con la materia de Arquitectura y Organización de Computadoras, con foco en arquitectura Intel 64, ensamblador, microarquitectura, memoria, interrupciones, protección y optimización.

## Enlaces recomendados

- Libro de Sistemas Operativos: https://github.com/dperalta86/Libro-Sistemas-Operativos.git
- Repositorio de la materia UBA AyOC: https://github.com/Lukka1117/UBA-AyOC

---

## Programa de Arquitectura y Organización de Computadoras

A continuación presentamos el programa de la materia:

### 1. Introducción

- Concepto de Computador de Propósito General y necesidad de un Sistema Operativo.
- Arquitectura para programación de aplicaciones (Modo Usuario).
- Arquitectura para programación de sistemas operativos (Modo Kernel).

### 2. Arquitectura Intel 64

- Modos de trabajo (Modo Real, Protegido, Virtual 86 y extensiones de 64 bits).
- Arquitectura para programación de aplicaciones.
- Modelos de memoria, modos de direccionamiento y punteros con y sin especificación de segmento.
- Segmentación.
- Set de instrucciones.
- Modos de direccionamiento.
- Ejemplos de uso con algoritmos simples.

### 3. Ensamblado, vinculación, carga y ejecución

- Formato de archivos (.o, .exe, .lib, ELF, etc.).
- Estructura del archivo .asm.
- Información de debugging.

### 4. Interfase ensamblador-lenguajes de alto nivel

- Pasaje de parámetros.
- Estructuras de datos y de control.
- Interfase con el Sistema Operativo.
- Bibliotecas estáticas, dinámicas y run-times.
- Programación orientada a objetos y otros paradigmas.

### 5. Instrucciones Multimedia

- Modelo de procesamiento SIMD.
- Implementaciones SIMD en procesadores IA-32.
- MMX.
- SSE, SSE2, SSE3, SSE4.
- Aplicaciones en procesamiento de señales e imágenes.

### 6. Microarquitectura

- Pipeline, superpipelining, arquitectura superescalar, paralelismo a nivel de instrucciones.
- Modelo de ejecución fuera de orden.
- Modelo VLIW.
- Modelo EPIC.
- Ejemplos del mundo real y comparación entre las diferentes alternativas.
- Memoria cache: principio de funcionamiento y modelo asociativo.
- Multicore.
- Microarquitecturas de los procesadores IA-32: P5, P6, NetBurst, Pentium D y Core.

### 7. Modelo de programación de Sistemas Operativos - Manejo de Memoria

- Unidad de Gestión de Memoria de procesadores IA-32.
- Unidad de Segmentación en Modo Protegido.
- Unidad de Paginación.
- Relación con el sistema operativo: soporte para la implementación del administrador de memoria virtual.
- Memoria compartida entre procesos y entre procesos y el sistema operativo.

### 8. Modelo de programación de Sistemas Operativos - Interrupciones y Excepciones

- Sistema de interrupciones de los procesadores IA-32.
- Concepto y diferencias entre interrupciones y excepciones.
- Descriptores asociados y códigos de error.
- Interrupciones y excepciones predeterminadas.
- Manejo de interrupciones desde el Sistema Operativo.

### 9. Modelo de programación de Sistemas Operativos - Protección

- Sistema de protección en procesadores IA-32.
- Niveles de privilegio (anillos de protección).
- Reglas de protección para instrucciones, segmentos, páginas y tareas.
- Relación con el Sistema Operativo: ejecución en modo usuario y modo kernel.
- Mecanismos para elevar el nivel de privilegio de una tarea o proceso.

### 10. Modelo de programación de Sistemas Operativos - Manejo de Tareas

- Concepto de multitasking.
- Contexto de ejecución.
- Conmutación de tareas en procesadores IA-32.
- Estructuras y descriptores asociados en procesadores IA-32.
- Relación de estos recursos con el Sistema Operativo.
- Scheduling de tareas y diferentes alternativas.

### 11. Optimización

- Técnicas de codificación para optimizar el uso del controlador cache.
- Técnicas de codificación para optimizar el uso de memoria.
- Técnicas de codificación para optimizar el aprovechamiento de los recursos de microarquitectura.
- Técnicas de prefetch en cache.
- Threading.
- Optimización en procesadores multicore.

---

## Objetivo del repositorio

Este espacio está pensado para centralizar materiales de estudio, ejemplos, apuntes y ejercicios que ayuden a comprender los fundamentos de la arquitectura de computadoras y el funcionamiento interno de los sistemas operativos.

## Contenido esperado

- Apuntes y teoría.
- Ejemplos en C y ensamblador.
- Prácticas y ejercicios.
- Material relacionado con Intel 64, memoria, protección, excepciones y microarquitectura.


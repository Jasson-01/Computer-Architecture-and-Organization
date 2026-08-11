# Laboratorio - Requisitos y configuración

Para cursar la materia, es necesario cumplir con dos requisitos básicos:

1. Crear una cuenta de GitHub si aún no tienen una.
2. Configurar una computadora personal con el software requerido para la materia.

---

## Software requerido

- Linux
- GCC
- GDB y gdb-dashboard
- NASM
- QEMU
- Valgrind
- Git
- Editor de texto a elección

---

## Instalación orientativa

### Linux

Se recomienda usar cualquier distribución de Linux, preferentemente Ubuntu.

### GCC

- Sitio oficial: http://gcc.gnu.org/
- Comandos:

```bash
sudo apt update
sudo apt install build-essential
```

### GDB

- Sitio oficial: https://www.sourceware.org/gdb/
- Comandos:

```bash
sudo apt install gdb
```

### gdb-dashboard

- Repositorio: https://github.com/cyrus-and/gdb-dashboard
- Comandos:

```bash
wget -P ~ https://git.io/.gdbinit
pip install pygments
```

### NASM

- Documentación: https://www.nasm.us/doc/
- Comandos:

```bash
sudo apt install nasm
```

### Valgrind

```bash
sudo apt install valgrind
```

### Git

```bash
sudo apt install git
```

### QEMU

```bash
sudo apt install qemu-system-i386
```

### Editor de texto

Pueden utilizar el editor que prefieran, por ejemplo:

- VS Code
- Vim
- Neovim
- Emacs

---

## ¿Para qué sirve cada herramienta?

### Linux

Es el sistema operativo sobre el que se trabaja. La mayoría de estas herramientas son nativas de Linux o funcionan mucho mejor ahí que en Windows.

### GCC

Es el compilador de C/C++ de GNU. Se usa para compilar código C y, en muchos casos, combinarlo con código en ensamblador.

### GDB y gdb-dashboard

GDB es el depurador de GNU. Permite poner breakpoints, inspeccionar registros, memoria y stack mientras el programa corre. gdb-dashboard agrega una interfaz más visual para facilitar el análisis de ejecuciones, especialmente en código de bajo nivel.

### NASM

Es un ensamblador para escribir código en Assembly x86. Si la materia incluye Assembly, se compila con NASM para generar código máquina.

### QEMU

Es un emulador de CPU y sistemas. Permite ejecutar programas o sistemas operativos a bajo nivel sin depender de un hardware real.

### Valgrind

Permite detectar errores de memoria en programas en C/C++, como leaks, accesos inválidos y uso de memoria no inicializada.

### Git

Es el sistema de control de versiones para manejar los trabajos prácticos, colaborar y conservar el historial del código.

### Editor de texto

Es la herramienta para escribir el código. La elección queda a cada persona.

---

## Verificación de la instalación

Se recomienda confirmar que cada herramienta quedó instalada correctamente:

```bash
gcc --version
gdb --version
nasm -v
qemu-system-x86_64 --version
valgrind --version
git --version
```

También puede verificarse el dashboard de GDB con:

```bash
cat ~/.gdbinit
```

Si el archivo aparece con contenido relacionado con "dashboard", la instalación está correcta. Si no existe o está vacío, falta configurar el plugin.

---

## Resumen

Estas herramientas permiten trabajar con:

- compilación de código en C,
- depuración a nivel de registros y memoria,
- programación en ensamblador,
- emulación de arquitectura x86,
- análisis de memoria,
- y control de versiones del código.

Con este entorno, se puede cursar la materia en condiciones adecuadas y resolver correctamente los trabajos prácticos.
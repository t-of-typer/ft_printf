# ft_printf

## Descripción
Este proyecto consiste en la reimplementación de la función `printf()` de la librería estándar de C. El objetivo es crear la función `ft_printf()`, que debe imitar el comportamiento de la función original, manejando un conjunto específico de conversiones y formatos.

## Características
- Implementación de una versión personalizada de `printf()`.
- Uso de funciones variádicas en C.
- Compatible con las siguientes conversiones:
  - `%c` : Imprime un solo carácter.
  - `%s` : Imprime una cadena de caracteres.
  - `%p` : Imprime una dirección de memoria en formato hexadecimal.
  - `%d` : Imprime un número decimal con signo.
  - `%i` : Imprime un número entero en base 10.
  - `%u` : Imprime un número decimal sin signo.
  - `%x` : Imprime un número hexadecimal en minúsculas.
  - `%X` : Imprime un número hexadecimal en mayúsculas.
  - `%%` : Imprime el símbolo `%`.

## Requisitos
- Escrito en C.
- Seguir la norma de codificación establecida.
- No debe provocar errores inesperados (segfault, memory leaks, etc.).
- Uso exclusivo de las funciones permitidas: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`.
- Generación de la librería `libftprintf.a` mediante `ar`.
- Makefile con las siguientes reglas:
  - `all`
  - `clean`
  - `fclean`
  - `re`
  - `bonus` (para funcionalidades extra).

## Parte Bonus
Si deseas agregar funcionalidades extra, el proyecto permite la implementación de los siguientes flags:
- `'-0.'` y ancho mínimo para todas las conversiones.
- Flags `'# +'`.

## Evaluación
El proyecto se evaluará asegurando que:
- No haya errores de norma.
- No existan errores de memoria.
- La implementación imite correctamente a `printf()`.

## Autores
Tu Nombre - [@t-of-typer](https://github.com/t-of-typer)

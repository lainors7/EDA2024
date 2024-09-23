# Autocorrector de la Práctica 1

Este autocorrector está diseñado para compilar y ejecutar tu código, así como para verificar la salida en comparación con las soluciones esperadas. Sigue las instrucciones a continuación para añadir tus propias pruebas.

## Preparación de los ficheros requeridos

Copia los ficheros de tu práctica en esta carpeta, junto al fichero `corrige.sh`. Los ficheros necesarios están indicados en el enunciado de la práctica.

**No debe haber ningún otro fichero `.cc` o `.h` en la carpeta del autocorrector.**

## Ejecutar el autocorrector

Para ejecutar el autocorrector, ejecuta el script `corrige.sh` desde la terminal:

```bash
./corrige.sh
```

## Cómo añadir nuevas pruebas

El autocorrector permite ejecutar dos tipos de pruebas diferentes:
- Pruebas de código en ficheros `.cc` que contiene una función `main` que llama directamente a los métodos de tus clases.
- Pruebas que usan la función `main` de tu código.

Se pueden crear además dos tipos de ficheros adicionales para pasar información de entrada a la prueba. No son excluyentes y se pueden combinar:
- Ficheros `.in`: se ejecutará la prueba usando los datos del fichero como si fuera la entrada estándar.
- Ficheros `.dat`: el nombre de este fichero se pasa como argumento al ejecutable de la prueba.

**Todas las pruebas deben tener un fichero `.txt` con la salida correcta esperada**. Al ejecutar la prueba se comparará la salida de la prueba (compilada a partir de tu código) con el contenido de este fichero para comprobar si el funcionamiento del código es el esperado.

### Pruebas con código

Cada prueba con código debe estar en un fichero `.cc` y debe contener una función `main` que pruebe alguna funcionalidad específica de tu programa. Puedes consultar las pruebas del corrector para ver algunos de ejemplos de cómo se deben programar estas pruebas.

Coloca tus ficheros `.cc` y `.txt` en la carpeta `pruebas`.

**Estructura de la carpeta**:
```
.
├── corrige.sh
├── Makefile
├── README.md
├── ficheros de código (.cc, .h)
└── pruebas
      ├── prueba1.cc
      └── prueba1.txt

```

### Pruebas con datos de entrada

Cada prueba que use datos de entrada debe tener un fichero `.in` con los datos de entrada (los mismos que pasarías a la aplicación por teclado mientras se está ejecutando) y un fichero `.txt` con la salida esperada de la prueba.

Coloca tus ficheros `.in` y `.txt` en la carpeta `pruebas`.

**Estructura de la carpeta**:
```
.
├── corrige.sh
├── Makefile
├── README.md
├── ficheros de código (.cc, .h)
└── pruebas
      ├── prueba2.in
      └── prueba2.txt
```

### Pruebas con ficheros como argumento

Cada prueba que use un argumento de entrada debe tener un fichero `.dat` que se pasará como argumento al ejecutar la prueba y un fichero `.txt` con la salida esperada de la prueba.

Coloca tus ficheros `.dat` y `.txt` en la carpeta `pruebas`.

**Estructura de la carpeta**:
```
.
├── corrige.sh
├── Makefile
├── README.md
├── ficheros de código (.cc, .h)
└── pruebas
      ├── prueba3.dat
      └── prueba3.txt
```

### Combinaciones posibles

Todas las pruebas, ya sean con una función `main` propia o con la de tu ejecutable, pueden combinarse con los distintos métodos de entrada de información. Por ejemplo, una prueba con código que además usa la entrada estándar y tiene un argumento, tendría la siguiente estructura:

**Estructura de la carpeta**:
```
.
├── corrige.sh
├── Makefile
├── README.md
├── ficheros de código (.cc, .h)
└── pruebas
      ├── prueba5.cc
      ├── prueba5.dat
      ├── prueba5.in
      └── prueba5.txt
```

### Consideraciones adicionales

- Asegúrate de que tus ficheros de prueba no contengan errores de compilación. El autocorrector detendrá la ejecución si encuentra errores durante la compilación.
- Debes tener instalado `valgrind` para que el resultado de las pruebas sea totalmente fiable. Si no está instalado podrás probar si la salida de las pruebas es correcta, pero no se realizarán comprobaciones sobre el uso de memoria que sí se harán en el corrector definitivo.

## Solución de problemas

Para cualquier duda o problema, contacta con tu profesor de prácticas.

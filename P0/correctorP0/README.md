# Autocorrector de la Práctica 0

Este autocorrector está diseñado para compilar y ejecutar tu código, así como para verificar la salida en comparación con las soluciones esperadas. Sigue las instrucciones a continuación para añadir tus propias pruebas.

## Ficheros requeridos

Los archivos necesarios para que el autocorrector funcione son:
- `CityInfo.h`
- `CityInfo.cc`
- `infotest.cc`

Estos archivos deben estar en el mismo directorio que `corrige.sh`.

**No debe haber ningún otro fichero `.cc` o `.h` en la carpeta del autocorrector.**

## Ejecutar el autocorrector

Para ejecutar el autocorrector, ejecuta el script `corrige.sh` desde la terminal:

```bash
./corrige.sh
```

## Cómo añadir nuevas pruebas

El autocorrector permite ejecutar dos tipos de pruebas diferentes:
- Pruebas de código en ficheros `.cc` que llaman directamente a los métodos de tus clases.
- Pruebas con datos de entrada en ficheros `.in` que ejecutan tu aplicación usando los datos del fichero como si fuera la entrada estándar.

Todas las pruebas deben tener además un fichero `.txt` con la salida correcta esperada. Al ejecutar la prueba se comparará la salida de la prueba (compilada a partir de tu código) con el contenido de este fichero para comprobar si el funcionamiento del código es el esperado.

### Pruebas de código

1. **Crear archivos de prueba**

   Cada prueba de código debe estar en un archivo `.cc` y debe contener una función `main` que pruebe alguna funcionalidad específica de tu programa.

   **Ejemplo de archivo `prueba1.cc`**:
   
   ```cpp
   // prueba1.cc
   #include "CityInfo.h"

   int main() {
       // Código de prueba
       CityInfo cityInfo();
       cout << cityInfo;
   }
   ```

   **Ejemplo de archivo de salida esperada `prueba1.txt`**
   ```
   0 0 0 0 0 
   ```

2. **Ubicar los archivos de la prueba**

   Coloca tus archivos `.cc` y `.txt` en el directorio `pruebas`.

   **Estructura del directorio**:
   ```
   .
   ├── corrige.sh
   ├── CityInfo.cc
   ├── CityInfo.h
   ├── infotest.cc
   └── pruebas
       ├── prueba1.cc
       └── prueba1.txt

   ```

3. **Ejecutar el autocorrector**

   Una vez que hayas añadido tus archivos de prueba, ejecuta el script `corrige.sh` desde la terminal:
   
   ```bash
   ./corrige.sh
   ```

### Pruebas con datos de entrada

1. **Crear archivos de prueba**

   Cada prueba que use datos de entrada debe tener un archivo `.in` con los datos de entrada y un archivo `.txt` con la salida esperada de la aplicación `infotest`.

   **Ejemplo de archivo `prueba2.in`**:
   
   ```
   0 0 5 0 0 5 6 2 7 0 2 3 1 0 1
   ```

   **Ejemplo de archivo de salida esperada `prueba2.txt`**:
   
   ```
   0 0 5 0 0 
   2 3 1 0 1 
   ```

2. **Ubicar los archivos de la prueba**

   Coloca tus archivos `.in` y `.txt` en el directorio `pruebas`.

   **Estructura del directorio**:
   ```
   .
   ├── corrige.sh
   ├── CityInfo.cc
   ├── CityInfo.h
   ├── infotest.cc
   └── pruebas
       ├── prueba2.in
       └── prueba2.txt
   ```

3. **Ejecutar el autocorrector**

   Una vez que hayas añadido tus archivos de prueba y datos, ejecuta el script `corrige.sh` desde la terminal:
   
   ```bash
   ./corrige.sh
   ```

### Consideraciones adicionales

- Asegúrate de que tus archivos de prueba no contengan errores de compilación. El autocorrector detendrá la ejecución si encuentra errores durante la compilación.
- Las salidas esperadas deben estar en archivos `.txt` dentro del directorio `pruebas` y deben tener el mismo nombre que los archivos `.cc` o `.in` correspondientes.

**Ejemplo**:
Si tienes una prueba llamada `prueba2.cc`, la salida esperada debe estar en `prueba2.txt`.

## Solución de problemas

Para cualquier duda o problema, contacta con tu profesor de prácticas.

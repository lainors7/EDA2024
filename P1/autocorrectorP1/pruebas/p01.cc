
/*
* Pruebas de todos los métodos de la clase Coordinates:
*  constructor por defecto
*  constructor con parámetros (con datos correctos e incorrectos)
*  getters
*  constructor de copia
*  operador de asignación
*  operador de salida
*/

#include "../Coordinates.h"

int main(int argc,char *argv[])
{
  Coordinates c0;  // constructor por defecto
  cout << c0.getRow() << " " << c0.getCol() << endl;  // -1 -1
  
  Coordinates c1(1501112,0);  // constructor
  cout << c1.getRow() << " " << c1.getCol() << endl;  // 1501112 0
  Coordinates c2(-7,15);  
  cout << c2.getRow() << " " << c2.getCol() << endl;  // -1 -1
  Coordinates c3(7,-15);  
  cout << c3.getRow() << " " << c3.getCol() << endl;  // -1 -1
  
  Coordinates c4(c1);  // constructor de copia
  cout << c4.getRow() << " " << c4.getCol() << endl;  // 1501112 0
  
  c2 = c1;  // operator=
  cout << c2.getRow() << " " << c2.getCol() << endl;  // 1501112 0
  
  Coordinates c5(6,5);
  
  cout << c0 << c1 << c2 << c3 << c4 << c5 << endl;
}

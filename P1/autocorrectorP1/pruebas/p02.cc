/*
* Pruebas de todos los métodos de la clase City, excepto setCoord
*  constructor
*  getters
*  constructor de copia
*  getInfo, setMostImportant  (getInfo debe devolver referencia), operadores de
    comparación de CityInfo
*  operador de asignación
*  setInfo
*  operador de salida
*/

#include "../City.h"

void showCity(City &c)  // por referencia para evitar constructor de copia
{
  cout << c.getName() << " " << c.getId() 
       << " coord=" << c.getCoord().getRow() << " " << c.getCoord().getCol()
       << " info=" << c.getInfo();
}

int main(int argc,char *argv[])
{
  City c0("Alicante"); showCity(c0);
  
  // constructor de copia
  City c1(c0); showCity(c1);
  
  // cambio "most important" en c1 y comparo infos
  c1.getInfo().setMostImportant("Castillo de Santa Bárbara");
  cout << "[ == " << (c1.getInfo() == c0.getInfo()) << "]"
       << "[ != " << (c1.getInfo() != c0.getInfo()) << "]" << endl; 

  showCity(c0);
  showCity(c1);
 
  // operador de asignación
  City c2("Paris");
  showCity(c2);
  c2 = c1;
  showCity(c2);

  // setInfo
  CityInfo info(7,8,9,15,true);
  info.setMostImportant("Explanada");
  c1.setInfo(info);
  showCity(c1);
  
  // operador de salida
  cout << c0 << c1 << c2 ;
}

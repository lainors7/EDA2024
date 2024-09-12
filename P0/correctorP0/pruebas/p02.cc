/*
*  Se crean tres objetos CityInfo, uno de ellos con el constructor de
*  copia, se comprueba el funcionamiento de la sobrecarga del operador salida y
*  setMostImportant.
*/
#include <iostream>
using namespace std;

#include "../CityInfo.h"

int main(int argc, char*argv[]){
  CityInfo A(1,2,3,4,false), B(0,2,0,2,true);
  CityInfo C(B);

  cout<<"A -> "<<A;
  cout<<"B -> "<<B;
  cout<<"C copia de B:"<<endl;
  cout<<"C -> "<<C;
  cout<<"setMostImportant de B:"<<endl;
  B.setMostImportant("Torre Eiffel");
  cout<<"B -> "<<B;
  cout<<"C -> "<<C;
}

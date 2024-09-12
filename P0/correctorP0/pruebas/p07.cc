/*
* Se crean objetos CityInfo, uno de ellos con el constructor por defecto. Se compara
*  si son distintos y si son iguales. Se cambia el mostImportant
*  de uno de ellos, que se usa como parámetro del constructor de copia
*  para crear un cuarto CityInfo. Se muestran por pantalla los CityInfo creados.
*/
#include <iostream>
using namespace std;

#include "../CityInfo.h"

int main(int argc, char*argv[]){
  CityInfo A(5,8,1,3,true),B(8,4,12,1,false),C;
  cout<<"A -> "<<A;
  cout<<"B -> "<<B;
  cout<<"C -> "<<C;
  if(A!=B) cout<<"A y B son distintos"<<endl;
  if(A==B) cout<<"A y B son iguales"<<endl;
  else cout<<"A y B no son iguales"<<endl;
  A.setMostImportant("Sagrada Familia");
  C=A;
  CityInfo D(C);
  
  cout<< "top de A -> "<<A.getMostImportant()<<endl;
  cout<<"C=A; C -> "<<C;
  cout<<"CityInfo D(C); D -> "<<D;
  
}
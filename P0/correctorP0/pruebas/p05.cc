/*
*  Se crean objetos CityInfo con distintos valores para sus características,
*  de manera que el más frecuente cada vez es distinto. Se muestra por pantalla
*  el resultado de cada acción.
*/
#include <iostream>
using namespace std;

#include "../CityInfo.h"

int main(int argc, char*argv[]){
  CityInfo A(0,0,0,1,true),B(1,2,3,4,true),C(1,2,4,3,true),D(1,4,3,2,true),E(4,3,2,1,true);
  cout<<"A -> "<<A;
  cout<<"B -> "<<B;
  cout<<"C -> "<<C;
  cout<<"D -> "<<D;
  cout<<"E -> "<<E;
  
  cout<<"mas frecuente de A -> "<<A.getMostFrequent()<<endl;
  cout<<"mas frecuente de B -> "<<B.getMostFrequent()<<endl;
  cout<<"mas frecuente de C -> "<<C.getMostFrequent()<<endl;
  cout<<"mas frecuente de D -> "<<D.getMostFrequent()<<endl;
  cout<<"mas frecuente de E -> "<<E.getMostFrequent()<<endl;
  
}

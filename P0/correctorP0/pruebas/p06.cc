/*
*  Se crean objetos CityInfo con valores repetidos para algunas de sus características,
*  de manera que el más frecuente cada vez es distinto. Se muestra por pantalla
*  el resultado de cada acción.
*/
#include <iostream>
using namespace std;

#include "../CityInfo.h"

int main(int argc, char*argv[]){
  CityInfo A(1,0,0,0,true),A1(0,1,0,0,true),A2(0,0,1,0,true),A3(1,1,0,0,true),A4(1,0,1,0,true),A5(1,1,1,1,true);//aeropuerto
  CityInfo B(2,2,2,2,true);//hotel
  CityInfo C(3,3,2,3,true);//monumento
  CityInfo D(4,3,3,4,true);//museo
  CityInfo E(4,4,4,5,true);//resturante
  cout<<"A -> "<<A;
  cout<<"A1 -> "<<A1;
  cout<<"A2 -> "<<A2;
  cout<<"A3 -> "<<A3;
  cout<<"A4 -> "<<A4;
  cout<<"A5 -> "<<A5;
  
  cout<<"B -> "<<B;
  cout<<"C -> "<<C;
  cout<<"D -> "<<D;
  cout<<"E -> "<<E;
  
  cout<<"mas frecuente de A -> "<<A.getMostFrequent()<<endl;
  cout<<"mas frecuente de A1 -> "<<A1.getMostFrequent()<<endl;
  cout<<"mas frecuente de A2 -> "<<A2.getMostFrequent()<<endl;
  cout<<"mas frecuente de A3 -> "<<A3.getMostFrequent()<<endl;
  cout<<"mas frecuente de A4 -> "<<A4.getMostFrequent()<<endl;
  cout<<"mas frecuente de A5 -> "<<A5.getMostFrequent()<<endl;
  cout<<"mas frecuente de B -> "<<B.getMostFrequent()<<endl;
  cout<<"mas frecuente de C -> "<<C.getMostFrequent()<<endl;
  cout<<"mas frecuente de D -> "<<D.getMostFrequent()<<endl;
  cout<<"mas frecuente de E -> "<<E.getMostFrequent()<<endl;
  
}

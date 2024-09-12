/*
*  Se crea un objeto CityInfo con distintos valores para sus características y
*  se invoca getMostFrequent, mostrando por pantalla el resultado de la acción
*  y el objeto CityInfo.
*/
#include <iostream>
using namespace std;

#include "../CityInfo.h"

int main(int argc, char*argv[]){
  CityInfo A(1,4,3,4,false);
  cout<<"A -> "<<A;
  cout<<"mas frecuente de A -> "<<A.getMostFrequent()<<endl;
}

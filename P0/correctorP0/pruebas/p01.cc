/*
*  Se crean dos objetos CityInfo, uno de ellos con el constructor por defecto,
*  y se prueba la sobrecarga del operador asignación, getInterestPoints y hasAirport,
*  mostrando por pantalla el resultado de cada acción.
*/

#include <iostream>
#include <vector>
using namespace std;

#include "../CityInfo.h"

void show(const CityInfo &ci) {
  vector<int> data = ci.getInterestPoints();
  for(unsigned int i=0; i<data.size(); i++) {
    cout<<data[i]<<",";
  }
  if (ci.hasAirport()) cout<<"1";
  else cout<<"0";
}

int main(int argc, char*argv[]){
  CityInfo A(1,2,3,4,false), B;

  cout<<"A -> {";show(A);cout<<"}"<<endl;
  cout<<"B -> {";show(B);cout<<"}"<<endl;

  B=A;

  cout<<"despues de B=A:"<<endl;
  cout<<"A -> {";show(A);cout<<"}"<<endl;
  cout<<"B -> {";show(B);cout<<"}"<<endl;
}

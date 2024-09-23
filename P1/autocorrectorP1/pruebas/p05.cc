/**
* Crea una matriz de caracteres y dos ciudades, de manera que una ciudad se intenta situar
* en el mar y otra en tierra. Se muestra el resultado de cada accion y las ciudades por pantalla
*/
#include <iostream>
#include <vector>
#include "../City.h"

using namespace std;

void muestraMapa(vector< vector<char> > &v){
  cout<<"[";
  int i=0;
  for(;i<(int)v.size();i++){
    cout<<"[";
    int j=0;
    for(;j<(int)v[i].size()-1;j++){
       cout<<v[i][j]<<", ";
    }
    if(i==(int)v.size()-1)
      cout<<v[i][j]<<"]";
    else
      cout<<v[i][j]<<"], ";
  }
  cout<<"]"<<endl;
}

int main(){
    City one("Venecia");
    City two("Paris");
    vector< vector<char> > mapa;
    bool mar=false;
    for(int i=0;i<3;i++){
      vector<char> l;
      char tipo='T';
      if(mar)
        tipo='M';
      else mar=true;
      for(int j=0;j<7;j++)
           l.push_back(tipo);
      mapa.push_back(l);
    }
    cout<<"Se situa "<<one.getName()<<" en (1,3)? -> "<<one.setCoord(1,3,mapa)<<endl;
    cout<<"Se situa "<<two.getName()<<" en (0,5)? -> "<<two.setCoord(0,5,mapa)<<endl;
    cout<<"Ciudades y mapa finales:"<<endl;
    cout<<one<<endl;
    cout<<two<<endl;
    muestraMapa(mapa);
}

/**
* Crea un Map que lee el fichero con la informacion para un mapa y
* varias ciudades que se situan. Se crea una ciudad y se situa en el
* mismo mapa. Se muestra por pantalla el resultado de cada accion y los objetos
*/
#include <vector>
#include <iostream>
#include "../Map.h"

using namespace std;

int main(int argc,char* argv[]){
  Map mapa;
  if(argc==2){
      string name=argv[1];
      mapa.read(name);
      vector<City> cities=mapa.getCities();
      for(int i=0;i<(int)cities.size();i++)
          cout<<"Ciudad "<<cities[i].getName()<<" con identificador "<<cities[i].getId()<<endl;
      City city("SinCity");
      int id=city.setCoord(3,5,mapa.getMap());
      if(id!=-1)
         cout<<"Ciudad "<<city.getName()<<" con identificador "<<city.getId()<<endl;
      else
         cout<<"Ciudad "<<city.getName()<<" sin identificador "<<city.getId()<<endl;
      cout<<"Estado del mapa y la ciudad extra:"<<endl;
      cout<<mapa;
      cout<<endl;
      cout<<city;
    }
}

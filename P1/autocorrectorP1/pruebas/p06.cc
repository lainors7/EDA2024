/**
* Crea un Map que lee el fichero con la informacion para un mapa y
* una ciudad, que tiene como posicion en el mapa el mar, de manera que 
* debe ser desestimada. Se muestra el objeto Map por pantalla
*/
#include <iostream>
#include "../Map.h"

using namespace std;

int main(int argc,char* argv[]){
    Map mapa;
    if(argc==2){
       string name=argv[1];
       mapa.read(name);
       cout<<mapa;
    }
}

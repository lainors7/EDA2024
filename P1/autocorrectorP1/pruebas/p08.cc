/**
* Crea un Map que lee el fichero con el ejemplo del enunciado
* y se prueban los getters de la clase Map, y el operador de salida.
* Se prueba también el método getMap (y se modifica una posición), y
* se prueban los métodos getInfo y setMostImportant. Finalmente se prueba getMapPosition
*/
#include <iostream>
#include "../Map.h"

using namespace std;

void showFila(const vector<char> &f)
{
  for (size_t i=0;i<f.size();i++) cout << f[i];
  cout << endl;
}

void showCity(City &c)  // por referencia para evitar constructor de copia
{
  cout << c.getName() << " " << c.getId() 
       << " coord=" << c.getCoord().getRow() << " " << c.getCoord().getCol()
       << " info=" << c.getInfo();
}


int main(int argc,char* argv[]){
    Map mapa;
    if(argc==2){
       string name=argv[1];
       
       cout << mapa;  // mapa vacío, no debe salir nada
       mapa.read(name);
       
       cout << mapa;

       // mostramos el mapa 
       for (size_t r=0;r<mapa.getMap().size();r++)
         showFila(mapa.getMap()[r]);       

       // cambiamos una posición del mapa y lo volvemos a mostrar
       cout << "Cambio (1,5) a 'T'" << endl;
       mapa.getMap()[1][5] = 'T';

       // mostramos el mapa otra vez
       for (size_t r=0;r<mapa.getMap().size();r++)
         showFila(mapa.getMap()[r]);       

       
       // mostramos las ciudades       
       for (size_t i=0;i<mapa.getCities().size();i++)
         showCity(mapa.getCities()[i]);   
         
       // ponemos "most important" a la primera y la última
       mapa.getCities()[0].getInfo().setMostImportant("** Sky Tower");
       mapa.getCities()[3].getInfo().setMostImportant("** Taitua Arboretum");
       
       // mostramos las ciudades otra vez
       for (size_t i=0;i<mapa.getCities().size();i++)
         showCity(mapa.getCities()[i]);   
       
       cout<<mapa;
       
       Coordinates c0,c1(2,3),c2(3,3),c3(3,12);
       cout << mapa.getMapPosition(c0)
            << mapa.getMapPosition(c1)
            << mapa.getMapPosition(c2)
            << mapa.getMapPosition(c3) << endl;
    }
}

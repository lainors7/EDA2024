/*
* Pruebas del método setCoord de la clase City, con diferentes
* coordenadas correctas e incorrectas
*/

#include "../City.h"

void showCity(City &c)  // por referencia para evitar constructor de copia
{
  cout << c.getName() << " " << c.getId() 
       << " coord=" << c.getCoord().getRow() << " " << c.getCoord().getCol()
       << " info=" << c.getInfo();
}

vector<char> creaFila(string s)
{
  vector<char> f;
  
  for (size_t i=0;i<s.length();i++)
    f.push_back(s[i]);

  return f;
}

void showFila(const vector<char> &f)
{
  for (size_t i=0;i<f.size();i++) cout << f[i];
  cout << endl;
}

int main(int argc,char *argv[])
{
  vector<vector<char>> mapachar; // 8 filas x 6 columnas

  mapachar.push_back(creaFila("TTTTTT"));  
  mapachar.push_back(creaFila("TMMMMT"));  
  mapachar.push_back(creaFila("TTTTTT"));  
  mapachar.push_back(creaFila("TMMMMT"));  
  mapachar.push_back(creaFila("TMMMMT"));  
  mapachar.push_back(creaFila("TTTTTT"));  
  mapachar.push_back(creaFila("TMMCCC"));  
  mapachar.push_back(creaFila("TTTTTT"));  

  City c0("Alicante"); showCity(c0);
  cout << c0.setCoord(0,0,mapachar) << endl;
  showCity(c0); // sí, el id es 0
  
  City c1("Castellón"); showCity(c1);
  cout << c1.setCoord(7,5,mapachar) << endl;
  showCity(c1);
  cout << c1.setCoord(7,0,mapachar) << endl;  // -1 (ya tiene coordenadas)
  showCity(c1);
  
  City c2("Valencia"); showCity(c2);
  cout << c2.setCoord(1,1,mapachar) << endl;   // -1 (mar)
  showCity(c2);
  cout << c2.setCoord(5,5,mapachar) << endl;  
  showCity(c2);
  
  City c3("Tarragona"); showCity(c3);
  cout << c3.setCoord(0,5,mapachar) << endl; 
  showCity(c3);
  
  // primera fila  CTTTTC  (Alicante   Tarragona)
  showFila(mapachar[0]);
  showFila(mapachar[1]);
  showFila(mapachar[2]);
  showFila(mapachar[3]);
  showFila(mapachar[4]);
  
  // quinta fila  TTTTTC  (   Valencia)
  showFila(mapachar[5]);

  showFila(mapachar[6]);
  
  // séptima fila  TTTTTC  (Castellón)
  showFila(mapachar[7]);
}
  
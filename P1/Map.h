// DNI 74012320E LINARES PEREZ, OSCAR

#ifndef MAP_H
#define MAP_H

#include "City.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class Map
{
private:
    vector<vector<char>> map; // mapa
    vector<City> cities;      // ciudades

public:
    // parte canonica
    Map(); // Constructor

    // metodos publicos
    void read(string filename);                   // leer desde fichero
    vector<vector<char>> &getMap();               // devolver mapa
    vector<City> &getCities();                    // devolver ciudades
    char getMapPosition(Coordinates coord) const; // metodo que devuelve la posicion de la variable coordinates

    // Sobrecarga del operador <<
    friend ostream &operator<<(ostream &os, const Map &m)
    {

        //mostrar el mapa
        for (size_t i = 0; i < m.map.size(); ++i)
        {
            for (size_t j = 0; j < m.map[i].size(); ++j)
            {
                os << m.map[i][j];
            }
            os << endl;
        }


        // Mostrar las ciudades
        for (size_t z = 0; z < m.cities.size(); ++z)
        {
            os << m.cities[z];
        }
        
        return os;
    }
};

#endif

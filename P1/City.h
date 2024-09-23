// DNI 74012320E LINARES PEREZ, OSCAR

#ifndef CITY_H
#define CITY_H

#include "Coordinates.h"
#include "CityInfo.h"

#include <iostream>
#include <vector>

using namespace std;

class City
{
private:
    int id;
    string name;
    Coordinates coord;
    CityInfo info;

public:
    // parte canonica
    City(string s);                    // Constructor con parametros
    City(const City &);             // Constructor de copia
    City &operator=(const City &c); // Sobrecarga del operador de asignacion

    // metodos publicos
    int setCoord(int r, int c, vector<vector<char>> &map); //setea el valor de las coordenadas
    string getName() const; //devuelve el valor de name
    Coordinates & getCoord(); //Devuelve la referencia al objeto coord
    CityInfo &getInfo(); //Devuelve la referencia al objeto info
    void setInfo(CityInfo info); //no devuelve nada, agrega informacion turistica sustituyendo la anterior
    int getId() const; //devuelve el id;

     friend ostream &operator<<(ostream &os, const City &c)
    { // Funcion amiga para sobrecargar el operador de salida <<
         os << c.id << "-" << c.name<< "-" << c.coord << endl << c.info;
        return os;
    }
};

#endif
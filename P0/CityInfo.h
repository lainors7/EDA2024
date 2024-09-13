// DNI 74012320E LINARES PEREZ, OSCAR

#ifndef CITYINFO_H
#define CITYINFO_H

#include <iostream>
#include <vector>

using namespace std;

class CityInfo
{
private:
    int museums;
    int monuments;
    int hotels;
    int restaurants;
    bool airport;
    string mostImportant;

public:
    // parte canonica
    CityInfo();                                     // Constructor por defecto
    CityInfo(int mu, int mo, int h, int r, bool a); // Constructor con parametros
    CityInfo(const CityInfo &);                     // Constructor de copia
    ~CityInfo();                                    // Destructor
    CityInfo &operator=(const CityInfo &c);         // Sobrecarga del operador de asignacion

    // metodos publicos
    bool operator!=(const CityInfo &c);     // Sobrecarga del operador !=
    bool operator==(const CityInfo &c);     // Sobrecarga del operador ==
    vector<int> getInterestPoints() const;  // Devuelve los puntos de interes como un vector de enteros
    bool hasAirport() const;                // Devuelve si hay aeropuerto
    string getMostFrequent() const;         // Devuelve el elemento turistico mas frecuente
    string getMostImportant() const;        // Devuelve el valor de lavariable mostImportant
    void setMostImportant(const string &s); // Actualiza la variable mostImportant
    // Funciones amigas (friend)
    friend ostream &operator<<(ostream &os, CityInfo &c)
    { // Funcion amiga para sobrecargar el operador de salida <<
        os << c.museums << " " << c.monuments << " " << c.hotels << " " << c.restaurants << " " << (c.airport ? 1 : 0) << " " << c.mostImportant << endl;
        return os;
    }
};

#endif

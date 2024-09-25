// DNI 74012320E LINARES PEREZ, OSCAR

#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>
#include <vector>

using namespace std;

class Coordinates
{
private:
    int row;
    int col;

public:
    // parte canonica
    Coordinates();                                // Constructor por defecto
    Coordinates(int r, int c);                    // Constructor con parametros
    Coordinates(const Coordinates &);             // Constructor de copia
    Coordinates &operator=(const Coordinates &c); // Sobrecarga del operador de asignacion

    // metodos publicos
    int getRow() const; //devuelve el valor de row
    int getCol() const; //devuelve el valor de col
    friend ostream &operator<<(ostream &os, const Coordinates &c)
    { // Funcion amiga para sobrecargar el operador de salida <<
         os << "(" << c.row << "," << c.col << ")";
        return os;
    }
};

#endif

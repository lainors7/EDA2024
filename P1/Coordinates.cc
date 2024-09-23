// DNI 74012320E LINARES PEREZ, OSCAR

#include "Coordinates.h"
using namespace std;
// constructores

Coordinates::Coordinates()
{
    row = -1;
    col = -1;
}

Coordinates::Coordinates(int r, int c)
{
    row = (r >= 0) ? r : -1;
    col = (c >= 0) ? c : -1;
}

Coordinates::Coordinates(const Coordinates &c)
{
    row = c.row;
    col = c.col;
}

// sobrecarga operador asignacion
Coordinates &Coordinates::operator=(const Coordinates &c)
{
    row = c.row;
    col = c.col;

    return *this;
}

int Coordinates::getCol() const {
    return col;
}

int Coordinates::getRow() const {
    return row;
}

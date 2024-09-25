// DNI 74012320E LINARES PEREZ, OSCAR

#include "City.h"
#include "Coordinates.h"
using namespace std;
// constructores

City::City(string s)
{
    id = -1;
    name = s;
    coord = Coordinates();
    info = CityInfo();
}

City::City(const City &c)
{
    id = c.id;
    name = c.name;
    coord = c.coord;
    info = c.info;
}

City &City::operator=(const City &c)
{
    id = c.id;
    name = c.name;
    coord = c.coord;
    info = c.info;
    return *this;
}

int City::setCoord(int r, int c, vector<vector<char>> &map)
{
    int rows = map.size();
    int cols = map[0].size();

    if (r < 0 || r >= rows || c < 0 || c >= cols)
    { // coordenadas pasadas fuera de rango
        return -1;
    }

    if (coord.getCol() >= 0 || coord.getRow() >= 0)
    { // ya tiene coordenadas validas
        return -1;
    }

    if (map[r][c] == 'T')
    { // las coordenadas en el mapa contienen una T
        coord = Coordinates(r, c);

        map[r][c] = 'C';

        id = (r * cols) + c;

        return id;
    }

    return -1;
}

string City::getName() const
{
    return name;
}

Coordinates &City::getCoord()
{
    return coord;
}

CityInfo &City::getInfo()
{
    return info;
}

void City::setInfo(CityInfo info){
   this->info = info;
}

int City::getId() const{
    return id;
}

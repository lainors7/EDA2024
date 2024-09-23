// DNI 74012320E LINARES PEREZ, OSCAR
#include "Map.h"

Map::Map() {}

void Map::read(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error al abrir el archivo: " << filename << endl;
        return;
    }

    // Leer el mapa
    string line;
    while (getline(file, line)) {
        vector<char> row(line.begin(), line.end());
        map.push_back(row);
    }

    // Leer las ciudades
    while (getline(file, line)) {
        istringstream iss(line);
        string cityName;
        int mu, mo, h, r;
        bool airport;
        // Leer nombre de la ciudad
        getline(iss, cityName, ',');
        // Leer informacion
        if (!(iss >> mu >> mo >> h >> r >> airport)) {
            mu = mo = h = r = 0;
            airport = false;
        }
        // Crear objeto City y agregarlo al vector
        City city(cityName);
        CityInfo info(mu, mo, h, r, airport);
        city.setInfo(info);
        cities.push_back(city);
    }
}

vector<vector<char>> &Map::getMap() {
    return map;
}

vector<City> &Map::getCities() {
    return cities;
}

char Map::getMapPosition(Coordinates coord) const {
    if (coord.getRow() < 0 || coord.getRow() >= map.size() ||
        coord.getCol() < 0 || coord.getCol() >= map[0].size()) {
        return 'X'; // no valido
    }
    return map[coord.getRow()][coord.getCol()];
}



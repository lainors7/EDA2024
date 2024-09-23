// DNI 74012320E LINARES PEREZ, OSCAR
#include "Map.h"

Map::Map()
{
    map = vector<std::vector<char>>(); // Inicializa el mapa como un vector vacío
    cities = vector<City>();
}

void Map::read(string filename)
{

    ifstream file(filename);
    if (!file.is_open())
    {

        return;
    }

    // Leer el mapa
    string line;
    while (getline(file, line))
    {

        if (line.empty() || line == "<CIUDAD>")
            break; // Detenerse si se encuentra una línea vacía

        vector<char> row(line.begin(), line.end());
        map.push_back(row);
    }

    // Leer la información de las ciudades
    while (getline(file, line))
    {

        if (line != "<CIUDAD>")
            continue; // Buscamos la línea que indica el inicio de una ciudad

        // Leer el nombre de la ciudad
        string cityName;
        getline(file, cityName);

        // Leer las coordenadas
        int r, c;
        int museums = 0;
        int monuments = 0;
        int hotels = 0;
        int restaurants = 0;
        bool airport;
        string mostImportant = "";
        file >> r >> c;
        file.ignore(); // Ignorar el carácter de nueva línea
        CityInfo info;
        // Leer la información turística

        while (getline(file, line) && line == "<CIUDAD>")
        {
            if (line == "<INFO>")
            {
                // Leer información turística
                while (getline(file, line) && !line.empty())
                {
                    stringstream ss(line);
                    string type;
                    ss >> type;

                    if (type == "museo")
                    {
                        int count;
                        ss >> count;
                        museums += count;
                    }
                    else if (type == "monumento")
                    {
                        int count;
                        ss >> count;
                        monuments += count;
                    }
                    else if (type == "hotel")
                    {
                        int count;
                        ss >> count;
                        hotels += count;
                    }
                    else if (type == "restaurante")
                    {
                        int count;
                        ss >> count;
                        restaurants += count;
                    }
                    else if (type == "aeropuerto")
                    {
                        airport = true;
                    }
                    else
                    {
                        // Asumimos que el resto son nombres de puntos de interés
                        mostImportant = line; // Implementar este método en CityInfo
                    }
                }
                CityInfo info(0, 0, 0, 0, false); // Inicializar con valores por defecto
            }
        }

        // Crear un objeto City e inicializarlo
        City city(cityName);
        city.setCoord(r, c, map);
        city.setInfo(info);

        // Añadir la ciudad al vector
        cities.push_back(city);
    }

    file.close();
}

vector<vector<char>> &Map::getMap()
{
    return map;
}

vector<City> &Map::getCities()
{
    return cities;
}

char Map::getMapPosition(Coordinates coord) const
{
    if (coord.getRow() < 0 || coord.getRow() >= map.size() ||
        coord.getCol() < 0 || coord.getCol() >= map[0].size())
    {
        return 'X'; // no valido
    }
    return map[coord.getRow()][coord.getCol()];
}


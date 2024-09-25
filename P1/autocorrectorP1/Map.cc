// DNI 74012320E LINARES PEREZ, OSCAR
#include "Map.h"
#include <sstream>

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
        cerr << "No se pudo abrir el archivo: " << filename << endl;
        return;
    }

    // Limpiar el mapa y las ciudades anteriores
    map.clear();
    cities.clear();

    string line;

    // Leer el mapa
    while (getline(file, line))
    {
        if (line == "<CIUDAD>")
            break; // Si encontramos una "<CIUDAD>" salimos

        vector<char> row(line.begin(), line.end());
        map.push_back(row);
    }

    while (getline(file, line)) // Leer hasta el final del archivo
    {
        // Guardar el nombre de la ciudad
        string cityName = line;

        getline(file, line); //saltamos a la siguiente linea, las coordenadas
        stringstream ss(line); // Leemos las coordenadas

        int r, c;
        
        (ss >> r >> c); // asignamos las coordenadas
       
        int museums = 0, monuments = 0, hotels = 0, restaurants = 0;
        bool airport = false;
        string mostImportant = "";

        // Leer "<INFO>"
        getline(file, line); //Slatamos a leer la info
        if (line == "<INFO>")
        {
            // Leer info turistica
            while (getline(file, line) && !line.empty() && line != "<CIUDAD>") //Saltamos a leer info, si no es, salimos.
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
                    mostImportant = line;
                }
            }
        }

        // Guardamos los datos en CityInfo
        CityInfo info(museums, monuments, hotels, restaurants, airport);
        info.setMostImportant(mostImportant);

        // Creamos una ciudad
        City city(cityName);
        city.setCoord(r, c, map);
        city.setInfo(info);

        // Agregamos la ciudad al vector de ciudades si es una ciudad valida
        if (city.getId() != -1)
        {

            cities.push_back(city);
        }
    }

    file.close(); // Cerrar el archivo al finalizar
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

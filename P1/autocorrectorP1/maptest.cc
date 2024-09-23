// DNI 74012320E LINARES PEREZ, OSCAR

#include <iostream>
#include <string>
#include "Map.h"

using namespace std;

int main(int argc, char *argv[]) {
    // Comprobar que se ha proporcionado un archivo como argumento
    if (argc != 2) {
        cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << endl;
        return 1;
    }

    string filename = argv[1];
    Map map; // Crear un objeto Map
    map.read(filename); // Leer el archivo

    // Mostrar el mapa actualizado
    cout << map << endl; // Utiliza la sobrecarga de << en Map

    cout << endl << "CIUDADES" << endl;
    // Listar las ciudades con sus coordenadas
    for (size_t i = 0; i < map.getCities().size(); ++i) {
        City &city = map.getCities()[i];
        Coordinates coord = city.getCoord();
        cout << city.getName() << " (" << coord.getRow() << ", " << coord.getCol() << ")" << endl;
    }

    cout << endl << "ESTADISTICAS" << endl;
    // Mostrar estadísticas de elementos turísticos
    int totalMuseums = 0, totalMonuments = 0, totalHotels = 0, totalRestaurants = 0;
    for (size_t i = 0; i < map.getCities().size(); ++i) {
        City &city = map.getCities()[i];
        CityInfo info = city.getInfo();
        totalMuseums += info.getInterestPoints()[0]; // Asumiendo que el índice 0 es para museos
        totalMonuments += info.getInterestPoints()[1]; // Índice 1 para monumentos
        totalHotels += info.getInterestPoints()[2]; // Índice 2 para hoteles
        totalRestaurants += info.getInterestPoints()[3]; // Índice 3 para restaurantes
    }

    cout << "Museos: " << totalMuseums << endl;
    cout << "Monumentos: " << totalMonuments << endl;
    cout << "Hoteles: " << totalHotels << endl;
    cout << "Restaurantes: " << totalRestaurants << endl;

    cout << endl << "MONUMENTOS" << endl;
    // Listar monumentos de las ciudades
    for (size_t i = 0; i < map.getCities().size(); ++i) {
        City &city = map.getCities()[i];
        CityInfo info = city.getInfo();
        if (info.getInterestPoints()[1] > 0) { // Si hay monumentos
            cout << "Monumentos en " << city.getName() << ":" << endl;
            // Aquí debes agregar la lógica para listar cada monumento
        }
    }

    return 0;
}


// DNI 74012320E LINARES PEREZ, OSCAR

#include <iostream>
#include <vector>
#include "CityInfo.h"

int main()
{
    vector<CityInfo> cityInfoList;

    int mu, mo, h, r, a;

    // Leer datos desde la entrada estandar
    while (cin >> mu >> mo >> h >> r >> a)
    {
        // Crear un objeto CityInfo con los valores leidos
        CityInfo city(mu, mo, h, r, a != 0);
        cityInfoList.push_back(city);
    }

    vector<CityInfo> cityInfoFiltered;
    //Filtrar los valores leidos por que tenga aeropuerto o tenga mas de 4 hoteles
    for (int i = 0; i < cityInfoList.size(); i++)
    {
        if (cityInfoList[i].hasAirport() || cityInfoList[i].getInterestPoints()[2] >= 5)
        {
            cityInfoFiltered.push_back(cityInfoList[i]);
        }
    }

    for (int i = 0; i < cityInfoFiltered.size(); i++)
    {
        cout << cityInfoFiltered[i];
    }

    return 0;
}
// DNI 74012320E LINARES PEREZ, OSCAR

#include "CityInfo.h"
using namespace std;
// constructores

CityInfo::CityInfo()
{
    museums = 0;
    monuments = 0;
    hotels = 0;
    restaurants = 0;
    airport = false;
    mostImportant = "";
}

// usamos operaciones ternarias para ahorrar espacio y no llenar todo de if/else
CityInfo::CityInfo(int mu, int mo, int h, int r, bool a)
{
    museums = (mu >= 0) ? mu : 0;
    monuments = (mo >= 0) ? mo : 0;
    hotels = (h >= 0) ? h : 0;
    restaurants = (r >= 0) ? r : 0;
    airport = a;
    mostImportant = "";
}

CityInfo::CityInfo(const CityInfo &c)
{
    museums = c.museums;
    monuments = c.monuments;
    hotels = c.hotels;
    restaurants = c.restaurants;
    airport = c.airport;
    mostImportant = c.mostImportant;
}

// destructor
CityInfo::~CityInfo()
{
    museums = 0;
    monuments = 0;
    hotels = 0;
    restaurants = 0;
    airport = false;
    mostImportant = "";
}

// sobrecarga operador asignacion
CityInfo &CityInfo::operator=(const CityInfo &c)
{
    museums = c.museums;
    monuments = c.monuments;
    hotels = c.hotels;
    restaurants = c.restaurants;
    airport = c.airport;
    mostImportant = c.mostImportant;

    return *this;
}

// Sobrecarga del operador !=
bool CityInfo::operator!=(const CityInfo &c)
{
    return (museums != c.museums ||
            monuments != c.monuments ||
            hotels != c.hotels ||
            restaurants != c.restaurants ||
            airport != c.airport ||
            mostImportant != c.mostImportant);
}

// Sobrecarga operador ==
bool CityInfo::operator==(const CityInfo &c)
{
    return (museums == c.museums &&
            monuments == c.monuments &&
            hotels == c.hotels &&
            restaurants == c.restaurants &&
            airport == c.airport &&
            mostImportant == c.mostImportant);
}

vector<int> CityInfo::getInterestPoints() const
{
    vector<int> interestPoints;

    interestPoints.push_back(museums);
    interestPoints.push_back(monuments);
    interestPoints.push_back(hotels);
    interestPoints.push_back(restaurants);

    return interestPoints;
}

bool CityInfo::hasAirport() const
{
    return airport;
}

string CityInfo::getMostFrequent() const
{
    vector<pair<string, int>> elements;
    if (airport)
    {
        elements.push_back({"airport", 1});
    }
    elements.push_back({"hotel", hotels});
    elements.push_back({"monument", monuments});
    elements.push_back({"museum", museums});
    elements.push_back({"restaurant", restaurants});

    int mostFrequent = 0;
    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i].second > mostFrequent)
        {
            mostFrequent = elements[i].second;
        }
    }

    vector<string> names;

    for (int i = 0; i < elements.size(); i++)
    {
        if (elements[i].second == mostFrequent)
        {
            names.push_back(elements[i].first);
        }
    }

    return names[0];
}

string CityInfo::getMostImportant() const{
    return mostImportant;
}

void CityInfo::setMostImportant(const string &s){
    mostImportant = s;
}
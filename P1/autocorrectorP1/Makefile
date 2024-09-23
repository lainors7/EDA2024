all: maptest

maptest: CityInfo.o Coordinates.o City.o Map.o maptest.o
	g++ -Wall -g -o maptest CityInfo.o Coordinates.o City.o Map.o maptest.o

CityInfo.o: CityInfo.cc CityInfo.h
	g++ -Wall -g -c CityInfo.cc

Coordinates.o: Coordinates.cc Coordinates.h
	g++ -Wall -g -c Coordinates.cc

City.o: City.cc City.h Coordinates.h CityInfo.h
	g++ -Wall -g -c City.cc

Map.o: Map.cc Map.h City.h Coordinates.h CityInfo.h
	g++ -Wall -g -c Map.cc

maptest.o: maptest.cc CityInfo.h Coordinates.h City.h Map.h
	g++ -Wall -g -c maptest.cc

clean:
	rm -rf maptest *.o *~ pruebas/*.o pruebas/*.h pruebas/maptest pruebas/*.tmp pruebas/*.err
	for file in pruebas/*.cc; do \
		rm -rf $${file%.cc}; \
	done

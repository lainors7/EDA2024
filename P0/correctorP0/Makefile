all: infotest

infotest: CityInfo.o infotest.o
	g++ -Wall -g -o infotest infotest.o CityInfo.o

CityInfo.o: CityInfo.cc CityInfo.h
	g++ -Wall -g -c CityInfo.cc

infotest.o: infotest.cc CityInfo.h
	g++ -Wall -g -c infotest.cc

clean:
	rm -rf infotest *.o *~ pruebas/*.o pruebas/*.h pruebas/infotest pruebas/*.tmp pruebas/*.err
	for file in pruebas/*.cc; do \
		rm -rf $${file%.cc}; \
	done

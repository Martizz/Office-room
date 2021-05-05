#include <iostream>

using namespace std;

class Biurka{
    int ilosc;
    int cena;

public:

    int dopasuj_biurka(int); //dopasowuje ilosc biurek do powierzchni; na każde 5m^2 powierzchni przypada jedno biurko
    int dopasuj_cene(int); //dopasowuje cenę do ilości biurek, dla wiekszej ilości biurek dopasowuje tańsze biurka
    Biurka(int=0, int=0);

};

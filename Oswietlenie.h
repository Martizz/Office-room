#include <iostream>

using namespace std;

class Oswietlenie{
    int ilosc_lamp;
    int moc_lampy;
    int cena_lampy;

public:

    Oswietlenie(int=0, int=0, int=0);
    int dopasuj_lampy(int); //dopasowuje ilosc lamp do zadanej powierzchni pokoju biurowego; na każde 5m^2 przypada jedna lampa
    int dopasuj_moc(int); //dopasowuje moc lamp do ich ilości; startując od 100W moc zwiększa się o 50W co 20m^2 powierzchni
    int ustaw_cene(int); //wybiera cenę w zależności od ilości lamp; dla ilości powyżej 5 lamp cena za sztukę spada by nie przeciążyć budżetu
};

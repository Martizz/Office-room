#include <iostream>

using namespace std;

class Okna{
int ilosc_okien;
string typ_okien;
int szerokosc;
int wysokosc;

public:

int dostosuj_ilosc(int); //dostosowuje ilość okien w zależności od powierzchni; na każde 10m^2 przypada jedno okno
string wybierz_typ(); //pozwala zdecydować czy okna mają być antywłamaniowe
int wysoko(int);
int szeroko(int);
Okna(int=0, string="okna zwyczajne", int=1, int=1);
};

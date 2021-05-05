#include <iostream>
#include "Pomieszczenie.h"
#include "Podstawy.h"
using namespace std;

class Garaz: public Pomieszczenie{
    Podstawy Pod;
    int wymiar1;
    int wymiar2;
    int ile_miejsc;

public:
    Garaz(Podstawy P, int w1, int w2, int ilosc);
    int dopasuj_pow() override;
    int dopasuj_wys() override;
    int oblicz_miejsca(int);
    int dopasuj_wymiar2(int);
    void zapis_do_pliku(int, int, int, int, int);

};

#pragma once
#include <iostream>

#include "Klimatyzacja.h"
#include "Gabinet.h"

using namespace std;

class Pokoj :public Gabinet{
Podstawy Podst;
Biurka Biur;
Okna Okn;
Oswietlenie Osw;
Klimatyzacja *Klim;

public:

Pokoj(Podstawy, Biurka, Okna, Oswietlenie, Klimatyzacja*);
~Pokoj();
void zapis_do_pliku(int a, int b, int c, int d, int e, int f, int g, string h, int i, int j, int k, string l, double m);
};


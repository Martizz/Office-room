#pragma once
#include <iostream>

using namespace std;

class Podstawy{

    int powierzchnia;
    int wysokosc;

public:
    Podstawy(int=0, int=0);
    int dopasuj_powierzchnie(); //wymusza podanie powierzchni, która jest ograniczona przedziałem <1,100> m^2
    int dopasuj_wysokosc();    // wymusza podanie wysokości, która jest ograniczona przedziałem <2,4> m


};

#pragma once
#include <iostream>

using namespace std;

class Pomieszczenie{

public:
    virtual int dopasuj_pow()=0; //funkcja wirtualna dopasowująca powierzchnię pomieszczenia
    virtual int dopasuj_wys()=0; //funkcja wirtualna dopasowująca wysokość pomieszczenia

};

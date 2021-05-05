#include <iostream>
#include "Biurka.h"
using namespace std;

int Biurka::dopasuj_biurka(int pow){
    int b;
    b=0;
    for(int i=0; i<=pow; i+=5){
        b++;
    }
    return b;
}

int Biurka::dopasuj_cene(int b){
    int c;
    if(b<=5) c=200;
    else c=100;
    return c;
}

Biurka::Biurka(int i, int c){
    ilosc = i;
    cena = c;
}

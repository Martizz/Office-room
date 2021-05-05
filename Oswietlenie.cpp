#include <iostream>
#include "Oswietlenie.h"
using namespace std;


int Oswietlenie::dopasuj_lampy(int pow){
   int ilosc;
    ilosc=0;
    for(int i=0; i<=pow; i+=5){
        ilosc++;
    }
return ilosc;
}

int Oswietlenie::dopasuj_moc(int pow){
    int m;
    m=100;
    for(int i=0; i<=pow; i+=20){
        m+=50;
    }
    return m;
}

int Oswietlenie::ustaw_cene(int ile){
    int c;
    c=100;
if(ile>5) c=80;
return c;
}



Oswietlenie::Oswietlenie(int ile, int m, int c){
    ilosc_lamp=ile;
    moc_lampy=m;
    cena_lampy=c;
}

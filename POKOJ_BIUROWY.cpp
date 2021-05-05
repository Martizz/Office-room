#include <iostream>
#include <fstream>
#include "POKOJ_BIUROWY.h"

using namespace std;

Pokoj::Pokoj(Podstawy P, Biurka B, Okna Ok, Oswietlenie Os, Klimatyzacja *K){
  Podst = P;
    Biur = B;
    Okn = Ok;
    Osw = Os;
     Klim=K;
}


Pokoj::~Pokoj(){
    delete Klim;

}
void Pokoj::zapis_do_pliku(int a, int b, int c, int d, int e, int f, int g, string h, int i, int j, int k, string l, double m){
    fstream plik;
    plik.open("Pokoj_biurowy.txt", ios::out);
    if(!plik.good()){
        cout<<"Plik Pokoj_biurowy sie popsul"<<endl;
        exit(0);
    }

    plik<<"Stworzono Pokoj biurowy."<<endl;
    plik<<"Ma on powierzchnie: "<<a<<" metrow kwadratowych."<<endl;
    plik<<"Wysokosc tego pokoju to: "<<b<<" metrow."<<endl;
    plik<<"Miesci sie w nim "<<c<<" biurek."<<endl;
    plik<<"Kazde biurko kosztuje "<<d<<" zlotych."<<endl;
    plik<<"W pokoju znajduje sie "<<e<<" okien o wymiarach "<<f<<" x "<<g<<" m"<<endl;
    plik<<"Typ okien: "<<h<<"."<<endl;
    plik<<"W pokoju znajduje sie "<<i<<" lamp, kazda o mocy "<<j<<" watow."<<endl;
    plik<<"Kazda lampa kosztuje "<<k<<" zlotych."<<endl;
    plik<<"W pokoju znajduje sie klimatyzacja klasy energetycznej "<<l<<"."<<endl;
    plik<<"Klimatyzacja ma pobor mocy "<<m<<" kW na godzine."<<endl;

    plik.close();
}

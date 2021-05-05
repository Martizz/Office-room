#include <iostream>
#include <fstream>
#include "Gabinet.h"
using namespace std;

Gabinet::Gabinet(Podstawy P, Biurka B, Okna O, Oswietlenie L){
    Podst = P;
    Biur = B;
    Okn = O;
    Osw = L;

}

int Gabinet::dopasuj_pow(){
    int pow;
    pow=0;
    cout<<"Prosze wybrac powierzchnie gabinetu (min 5m^2, max 20m^2): ";
    do{
        cin>>pow;
        if(!(pow>=5 && pow <=20)){
            cout<<"Niepoprawna wartosc. Prosze sprobowac jeszcze raz: ";
            while(!(cin>>pow)) //zabezpieczenie przed błędami
            {
                cin.clear();
                cin.sync();
            }
        }
    }
    while(!(pow>=5 && pow <=20));
    return pow;
}

int Gabinet::dopasuj_wys(){
    int wys;
    wys=0;
    cout<<"Prosze wybrac wysokosc gabinetu(2 lub 3 metry): ";
    do{
        cin>>wys;
        if(wys!=2 && wys!=3){
            cout<<"Niepoprawna wartosc. Prosze sprobowac jeszcze raz: ";
            while(!(cin>>wys)) //zabezpieczenie przed błędami
            {
                cin.clear();
                cin.sync();
            }
        }
    }
    while(wys!=2 && wys!=3);
    return wys;
}

void Gabinet::zapis_do_pliku(int a, int b, int c, int d, int e, int f, int g, string h, int i, int j, int k){
    fstream plik;
    plik.open("Gabinet.txt", ios::out);
    if(!plik.good()){
        cout<<"Plik Gabinet sie popsul"<<endl;
        exit(0);
    }

    plik<<"Stworzono Gabinet."<<endl;
    plik<<"Ma on powierzchnie: "<<a<<" metrow kwadratowych."<<endl;
    plik<<"Wysokosc tego gabinetu to: "<<b<<" metry."<<endl;
    plik<<"Miesci sie z nim "<<c<<" biurko."<<endl;
    plik<<"Biurko kosztuje "<<d<<" zlotych."<<endl;
    plik<<"W gabinecie znajduje sie "<<e<<" okno o wymiarach "<<f<<" x "<<g<<" m"<<endl;
    plik<<"Typ okien: "<<h<<"."<<endl;
    plik<<"W gabinecie znajduja sie "<<i<<" lampy, kazda o mocy "<<j<<" watow."<<endl;
    plik<<"Kazda lampa kosztuje "<<k<<" zlotych."<<endl;



    plik.close();
}


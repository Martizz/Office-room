#include <iostream>
#include <fstream>
#include "Garaz.h"
using namespace std;

Garaz::Garaz(Podstawy P, int w1, int w2, int ilosc){
    Pod=P;
    wymiar1=w1;
    wymiar2=w2;
    ile_miejsc=ilosc;
}

int Garaz::dopasuj_pow(){
    int pow;
    pow=0;
    cout<<endl<<"Prosze wybrac powierzchnie garazu (minimum to 15 m^2, maximum to 150m^2).";
    cout<<"Podana wartosc musi byc wielekrotnoscia liczby 15: ";
    do{
        cin>>pow;
        if(!(pow>=15 && pow <=150 && pow%15==0)){

            cout<<"Niepoprawna wartosc. Prosze sprobowac jeszcze raz: ";
            while(!(cin>>pow)) //zabezpieczenie przed błędami
            {
                cin.clear();
                cin.sync();
            }
        }
    }
    while(!(pow>=15 && pow <=150 && pow%15==0));

    return pow;
}

int Garaz::dopasuj_wys(){
    int wys;
    wys=1;
    cout<<"Prosze wybrac wysokosc garazu(3 lub 4 lub 5 metrow): ";
    do{
        cin>>wys;
        if(wys!=3 && wys!=4 && wys!=5){
            cout<<"Niepoprawna wartosc. Prosze sprobowac jeszcze raz: ";
            while(!(cin>>wys)) //zabezpieczenie przed błędami
            {
                cin.clear();
                cin.sync();
            }
        }
    }
    while(wys!=3 && wys!=4 && wys!=5);

    return wys;
}

int Garaz::oblicz_miejsca(int pow){
    int ile=0;
    for(int i=0; i<pow; i+=15){
        ile++;
    }

    return ile;
}

int Garaz::dopasuj_wymiar2(int pow){
    int w2=0;
    for(int i=0; i<pow; i+=15){
        w2+=3;
    }
    return w2;
}

void Garaz::zapis_do_pliku(int a, int b, int c, int d, int e){
    fstream plik;
    plik.open("Garaz.txt", ios::out);
    plik<<"Stworzono Garaz."<<endl;
    plik<<"Ma on powierzchnie: "<<a<<" metrow kwadratowych."<<endl;
    plik<<"Wysokosc tego garazu to: "<<b<<" metry."<<endl;
    plik<<"W garazu znajduje sie "<<c<<" miejsc parkingowych"<<endl;
    plik<<"Wymiary garazu to: "<<d<<" X "<<e<<" m."<<endl;
    plik<<"Dla kazdego miejsca parkingowego przewidziano oddzielne drzwi."<<endl;

    plik.close();
}








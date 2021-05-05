#include <iostream>
#include "Podstawy.h"
using namespace std;

Podstawy::Podstawy(int pow, int wys){
    powierzchnia = pow;
    wysokosc = wys;
}

int Podstawy::dopasuj_powierzchnie(){
    int p;
    cout<<"Prosze podac oczekiwana powierzchnie pokoju biurowego (max to 100m): ";
    do{
        cin>>p;
        if(p<=0 || p>100){
             cout<<"Nalezy podac dodatnia i calkowita wartosc powierzchni. Prosze sprobowac ponownie: ";
            while(!(cin>>p)) //zabezpieczenie przed błędami
            {
              cin.clear();
              cin.sync();
            }

        }
    }
    while(p<=0 || p>100);
    cout<<endl;
    return p;
}

int Podstawy::dopasuj_wysokosc(){
    int h;
    cout<<"Prosze podac oczekiwana wysokosc pokoju, moga to byc 2, 3 lub 4 metry: ";
    do{
        cin>>h;
        if(h!=2 && h!=3 && h!=4){

            cout<<"Niewlasciwie podana wysokosc. Prosze sprobowac jeszcze raz: ";
            while(!(cin>>h)) //zabezpieczenie przed błędami
            {
              cin.clear();
              cin.sync();
            }

    }
    }
    while(h!=2 && h!=3 && h!=4);
    return h;
}




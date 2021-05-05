#include <iostream>
#include <Okna.h>
using namespace std;

string Okna::wybierz_typ(){
  string typ;
  typ="okna zwyczajne";
    int nr;
    do{
        cout<<"Teraz konieczny jest wybor okien. Aby wybrac okna zwyczajne klinknij 1, aby wybrac okna antywlamaniowe kliknij 2"<<endl;
        cin>>nr;
        if(nr==1 || nr==2) cout<<"Gratulujemy dokonanego wyboru."<<endl<<endl;
        else {
            cout<<"Proba wyboru okien nie powiodla sie."<<endl;
            while(!(cin>>nr)) //zabezpieczenie przed błędami
            {
              cin.clear();
              cin.sync();
        }
    }
    }
    while(nr!=1 && nr!=2);
    if(nr==2) typ="okna antywlamaniowe"; //domyślnie przypisane są okna zwyczajne, więc tylko antywłamaniowe trzeba ewentualnie przypisać
    return typ;
}

int Okna::wysoko(int h){
    int wys;
    if(h<=3) wys=2;
    else wys=3;
    return wys;
}

int Okna::szeroko(int wysoko){
    int sz;
    if(wysoko<=3) sz=2;
    else sz=3;
    return sz;
}

int Okna::dostosuj_ilosc(int pow){
   int ile=0;
    for(int i=0; i<=pow; i+=10)
    {
        ile++;
    }
    return ile;
}
Okna::Okna(int il, string typ, int szer, int wys){
    ilosc_okien=il;
    typ_okien=typ;
    szerokosc=szer;
    wysokosc=wys;
}

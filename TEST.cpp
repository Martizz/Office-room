#include <iostream>
#include "TEST.h"
#include "Garaz.h"
using namespace std;


void Test::wyswietl(){


    //////////Deklaracje zmiennych potrzebnych w metodach dla klasy Pokój biurowy
    int pow=1; //powierzchnia pokoju
    int wys=1; //wysokosc pokoju

    int b=0; // liczba biurek w pokoju
    int cb=0; //cena biurka

    string kl="kl_energ"; //klasa energetyczna klimatyzacji
    double pob=0; //pobór mocy na godzinę dla klimatyzacji w kilowatach

    string t="typ"; //typ okien, 1-zwyczajne, 2-antywłamaniowe
    int x=0, y=0; //wymiary okna, odpowiednio poziomy i pionowy
    int ile_okien=0; // ilość okien w pokoju

    int ile_lamp=0;
    int ml=0; //moc lamp
    int cl=0; //cena lamp

    //////Zmienne dla klasy Gabinet
    int pow_gab=1; //powierzchnia gabinetu z przedziału <1, 20> metrów kwadratowych
    int wys_gab=1; //wysokość gabinetu: 2 lub 3 metry

    int b_gab=1; //ilość biurek w gabinecie, możliwe jedno biurko
    int cb_gab=150; //cena biura z gabinetu

    string t_gab="okna zwyczajne"; //typ okien, 1-zwyczajne, 2-antywłamaniowe
    int x_gab=2, y_gab=1; //wymiary okna, odpowiednio poziomy i pionowy
    int ile_okien_gab=1; // ilość okien w gabinecie

    int ile_lamp_gab=2;
    int ml_gab=100; //moc lamp
    int cl_gab=70; //cena lamp      Parametry dla gabinetu są z reguły stałe, bo przeznaczony on jest dla jednej osoby

    //////Zmienne dla kasy Garaż
    int pow_gar=1;
    int wys_gar=1;
    int wym1=5; // założono taką długość dla każdego miejsca parkingowego
    int wym2=1; //wymiar jest dopasowywany na zasadzie 3m szerokości na jeden samochód
    int ile_miejsc_gar=1;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////Wyświetlanie wstępnych instrukcji
    cout<<"Teraz stworzone zostana Garaz, Gabinet oraz Pokoj biurowy"<<endl;

    //////////////////////////Wywołanie metod tworzących podobiekty Pokoju biurowego

    Podstawy podst(pow, wys);
    pow=podst.dopasuj_powierzchnie();
    wys=podst.dopasuj_wysokosc();


    Biurka biurko(b, cb);
    b=biurko.dopasuj_biurka(pow);
    cb=biurko.dopasuj_cene(b);

    ////////////Stworzenie obiektu dynamicznego
    Klimatyzacja *klima = new Klimatyzacja(kl, pob);
    kl=klima->wybierz_kl();
    pob=klima->wybierz_pobor();
    ///////////////////////////


    Okna ok(ile_okien, t, x, y);
    ile_okien=ok.dostosuj_ilosc(pow);
    y=ok.wysoko(wys);
    x=ok.szeroko(y);
    t=ok.wybierz_typ();

    Oswietlenie lampka(ile_lamp, ml, cl);
    ile_lamp=lampka.dopasuj_lampy(pow);
    ml=lampka.dopasuj_moc(pow);
    cl=lampka.ustaw_cene(ile_lamp);

    /////////////Jeszcze obiekty dla gabinetu, inne niż dla pokoju biurowego
    Podstawy podst_gab(pow_gab, wys_gab);
    Biurka biur_gab(b_gab, cb_gab);
    Okna ok_gab(ile_okien_gab, t_gab, x_gab, y_gab);
    Oswietlenie lampka_gab(ile_lamp_gab, ml_gab, cl_gab);

    ///////////I jeden obiekt dla garażu
    Podstawy podst_gar(pow_gar, wys_gar);

    //////////Tworzenie obiektów klas: Garaż, Gabinet i Pokój biurowy
    Gabinet Gab(podst_gab, biur_gab, ok_gab, lampka_gab);
    Pokoj Pok(podst, biurko, ok, lampka, klima);
    Garaz Gar(podst_gar, wym1, wym2, ile_miejsc_gar);

    ///////////Wywołanie metod dla gabinetu
    Pomieszczenie *wsk;
    wsk=&Gab;
    pow_gab=wsk->dopasuj_pow();
    wys_gab=wsk->dopasuj_wys();



    ////////Wywołanie metod dla garażu
    wsk=&Gar;
    pow_gar=wsk->dopasuj_pow();
    wys_gar=wsk->dopasuj_wys();
    ile_miejsc_gar=Gar.oblicz_miejsca(pow_gar);
    wym2=Gar.dopasuj_wymiar2(pow_gar);


    Gar.zapis_do_pliku(pow_gar, wys_gar, ile_miejsc_gar, wym1, wym2);
    Gab.zapis_do_pliku(pow_gab, wys_gab, b_gab, cb_gab, ile_okien_gab, x_gab, y_gab, t_gab, ile_lamp_gab, ml_gab, cl_gab);
    Pok.zapis_do_pliku(pow, wys, b, cb, ile_okien, x, y, t, ile_lamp, ml, cl, kl, pob);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////Wyświetlanie garażu
    cout<<endl<<"*************************"<<endl<<"Stworzono Garaz."<<endl;
    cout<<"Ma on powierzchnie: "<<pow_gar<<" metrow kwadratowych."<<endl;
    cout<<"Wysokosc tego garazu to: "<<wys_gar<<" metry."<<endl;
    cout<<"W garazu znajduje sie "<<ile_miejsc_gar<<" miejsc parkingowych"<<endl;
    cout<<"Wymiary garazu to: "<<wym1<<" X "<<wym2<<" m."<<endl;
    cout<<"Dla kazdego miejsca parkingowego przewidziano oddzielne drzwi."<<endl;


    ////////////Wyświetlanie gabinetu
    cout<<endl<<"****************"<<endl<<"Stworzono Gabinet."<<endl;
    cout<<"Ma on powierzchnie: "<<pow_gab<<" metrow kwadratowych."<<endl;
    cout<<"Wysokosc tego gabinetu to: "<<wys_gab<<" metry."<<endl;
    cout<<"Miesci sie z nim "<<b_gab<<" biurko."<<endl;
    cout<<"Biurko kosztuje "<<cb_gab<<" zlotych."<<endl;
    cout<<"W gabinecie znajduje sie "<<ile_okien_gab<<" okno o wymiarach "<<x_gab<<" x "<<y_gab<<" m"<<endl;
    cout<<"Typ okien: "<<t_gab<<"."<<endl;
    cout<<"W gabinecie znajduja sie "<<ile_lamp_gab<<" lampy, kazda o mocy "<<ml_gab<<" watow."<<endl;
    cout<<"Kazda lampa kosztuje "<<cl_gab<<" zlotych."<<endl;


    ///////////Wyswietlanie pokoju biurowego
    cout<<endl<<"****************"<<endl<<"Stworzono Pokoj biurowy."<<endl;
    cout<<"Ma on powierzchnie: "<<pow<<" metrow kwadratowych."<<endl;
    cout<<"Wysokosc tego pokoju to: "<<wys<<" metrow."<<endl;
    cout<<"Miesci sie z nim "<<b<<" biurek."<<endl;
    cout<<"Kazde biurko kosztuje "<<cb<<" zlotych."<<endl;
    cout<<"W pokoju znajduje sie "<<ile_okien<<" okien o wymiarach "<<x<<" x "<<y<<" m"<<endl;
    cout<<"Typ okien: "<<t<<"."<<endl;
    cout<<"W pokoju znajduje sie "<<ile_lamp<<" lamp, kazda o mocy "<<ml<<" watow."<<endl;
    cout<<"Kazda lampa kosztuje "<<cl<<" zlotych."<<endl;
    cout<<"W pokoju znajduje sie klimatyzacja klasy energetycznej "<<kl<<"."<<endl;
    cout<<"Klimatyzacja ma pobor mocy "<<pob<<" kW na godzine."<<endl;



}


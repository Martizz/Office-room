#include <iostream>
#include "Podstawy.h"
#include "Pomieszczenie.h"
#include "Biurka.h"
#include "Oswietlenie.h"
#include "Okna.h"
using namespace std;

class Gabinet: public Pomieszczenie{
    Podstawy Podst;
    Biurka Biur;
    Okna Okn;
    Oswietlenie Osw;


public:
    Gabinet(Podstawy=NULL, Biurka=NULL, Okna=NULL, Oswietlenie=NULL);
    int dopasuj_pow() override;
    int dopasuj_wys() override;
    void zapis_do_pliku(int a, int b, int c, int d, int e, int f, int g, string h, int i, int j, int k);

};

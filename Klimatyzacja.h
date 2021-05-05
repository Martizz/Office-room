#include <iostream>

using namespace std;

class Klimatyzacja{
    string klasa_energetyczna;
    double pobor_mocy; //pobór mocy w przeciągu 1 godziny

public:

    Klimatyzacja(string="A", double=0.5);
    string wybierz_kl(); //umozliwia wybór klasy energetycznej dla klimatyzacji spośród A+++ - G
    double wybierz_pobor(); //umożliwia wybór poboru mocy dla klimatyzacji z przedziału <0.5, 2> kW (pobór mocy na godzinę)
};

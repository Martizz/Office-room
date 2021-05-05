#include <iostream>
#include "Klimatyzacja.h"
using namespace std;

string Klimatyzacja::wybierz_kl(){
string kl;
cout<<endl;
    cout<<"Prosze wybrac klase energetyczna dla klimatyzacji. Do wyboru sa nastepujace klasy energetyczne: ";
cout<<"A+++, A++, A+, A, B, C, D, E, F, G"<<endl;
cout<<"Prosze dokonac wyboru klasy: ";
do{
    cin>>kl;
}
while(kl!="A+++" && kl!="A++" && kl!="A+" && kl!="A" && kl!="B" && kl!="C" && kl!="D" && kl!="E" && kl!="F" && kl!="G");
return kl;
}

double Klimatyzacja::wybierz_pobor(){
double pob;
    cout<<"Prosze wybrac pobor mocy klimatyzacji. Powinien sie on miescic w przedziale <0.5, 2> kW. "<<endl;
cout<<"Im wyzszy pobor mocy tym wieksza efektywnosc klimatyzacji ale takze wyzsza cena. Prosze dokonac wyboru: ";
do{
cin>>pob;
if(!(pob>=0.5 && pob<=2)){
    cout<<"Sprobuj ponownie: ";
    while(!(cin>>pob)) //zabezpieczenie przed błędami
    {
      cin.clear();
      cin.sync();
    }
}
}
while(!(pob>=0.5 && pob<=2));
return pob;
}

Klimatyzacja::Klimatyzacja(string k, double pm){
    klasa_energetyczna=k;
    pobor_mocy=pm;

}

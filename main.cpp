#include <iostream>
#include <vector>
#include "Device.h"
#include "System.h"


using namespace std;

int main()
{
    Czujnik_ruchu* Czujnik1;
    Czujnik_ruchu* Czujnik2;
    System potezny_system;
    string manhattan1 ="Czujnik Kuchnia";
    string manhattan2 ="Czujnik Salon";
    string manhattan3 ="Czujnik Lazienka";
    potezny_system.zarejestruj_czujnik(Czujnik1=new Czujnik_ruchu(&potezny_system,manhattan1));
    potezny_system.zarejestruj_czujnik(Czujnik2=new Czujnik_ruchu(&potezny_system,manhattan2));
    Czujnik1->attach(&potezny_system);
    Czujnik2->attach(&potezny_system);
    Czujnik1->notify();
    Czujnik2->notify();




    return 0;
}

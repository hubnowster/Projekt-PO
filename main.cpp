#include <iostream>
#include <vector>
#include "Device.h"
#include "System.h"


using namespace std;

int main()
{

    System potezny_system;
    System *wsk = &potezny_system;
    string manhattan1 ="23";
    string manhattan2 ="43";
    string manhattan3 ="55";
    potezny_system.zarejestruj_czujnik(new Czujnik_ruchu(&potezny_system,manhattan1));
    potezny_system.zarejestruj_czujnik(new Czujnik_ruchu(&potezny_system,manhattan2));
    //cout<<"Czujnik "<<potezny_system.devices.at(0)->nazwa<<endl;
    //czujnik_ruchu.attach(potezny_system)




    return 0;
}

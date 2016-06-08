#include <iostream>
//#include "System.h"
#include "Device.h"
using namespace std;

Device::Device()
{
    cout << "Device - pusty konstruktor \n";

}
Device::Device(System* sys, string nazwa)
{
    cout << "Ctor device\n";
}
Device::~Device()
{
    cout << "Dtor device\n";
}

void Device::wyswietl()
{
    cout<<"Naazwa: "<<nazwa<<endl;
}

string Device::get_nazwa()
{
    return nazwa;
}

Czujnik_ruchu::Czujnik_ruchu()
{cout << " Czujnik ruchu - pusty konstruktor\n";}

Czujnik_ruchu::Czujnik_ruchu(System* sys, string nazwa)
{
    cout << "Czujnik_ruchu - konstruktor z argumentami\n";
    this->nazwa = nazwa;
}
Czujnik_ruchu::~Czujnik_ruchu()
{
    cout << "Dtor Czujnik_ruchu\n";
}

void Czujnik_ruchu::wyswietl()
{
    cout<<"Naazwa_wys: "<<nazwa<<endl;
}

string Czujnik_ruchu::get_nazwa()
{
    return nazwa;
}
/*
Czujnik_dymu::Czujnik_dymu()
{
    cout << "ctor Czujnik_dymu";
}
Czujnik_dymu::~Czujnik_dymu()
{
    cout << "dtor Czujnik_dymu";
} */
void Czujnik_ruchu::on()
{
    cout << "Czujnik_ruchu wlaczony";
}

void Device::attach(System *obserwator)
{

}
void Czujnik_ruchu::notify()
{
    for (int i = 0; i < views.size(); i++)
        views[i]->update();
}
void Czujnik_ruchu::attach(System *obserwator)
{
    views.push_back(obserwator);
}

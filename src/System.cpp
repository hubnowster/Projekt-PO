#include "System.h"
#include "Device.h"
#include <iostream>
using namespace std;
System::System()
{
    cout << "Ctor system\n";
}

System::~System()
{
    cout << "Dtor system\n";
}

void System::zarejestruj_czujnik(Device* urzadzenie)
{
    //Device * czujnik;
    devices.push_back(urzadzenie);
    string kont = devices.back()->get_nazwa();
    cout<<"Czujnik: "<<kont<<endl;
}
void System::update(string nazwa)
{
     cout << "Czujnik powiadamiajacy: "<<nazwa << endl;
     if (alarm_trigger == 0)
        this->lights_on(nazwa);
     else
        this->alarm_on(nazwa);
}

void System::lights_on (string nazwa)
{
    cout<<"Uruchomiono swiatla poprzez "<<nazwa<<endl;
}

void System::trigger(uint8_t t)
{
    this->alarm_trigger = t;
    if (alarm_trigger == 0)
    {
        alarm_trigger=1;
        cout<<"Uzbrojono alarm"<<endl;
    }
    else
    {
        cout<<"Obsluga swiatel wlaczona" << endl;
    }



}

void System::alarm_on (string nazwa)
{
    alarm= 1;
    cout<<"Uruchomiono alarm z czujnika:  "<<nazwa<<endl;
}

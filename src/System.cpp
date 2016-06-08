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
void System::update()
{

}


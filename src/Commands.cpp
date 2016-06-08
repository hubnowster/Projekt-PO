#include "Commands.h"
#include <string>
#include <iostream>

using namespace std;

Commands::Commands()
{
    //ctor
}

Commands::~Commands()
{
    //dtor
}

void Commands::alarm_on (string nazwa, uint8_t alarm)
{
    alarm= 1;
    cout<<"Uruchomiono alarm z czujnika:  "<<nazwa<<endl;
}

void Commands::lights_on (string nazwa)
{
    cout<<"Uruchomiono swiatla poprzez "<<nazwa<<endl;
}

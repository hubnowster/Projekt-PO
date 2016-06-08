#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <string>
#include "Device.h"
#include "Commands.h"
using namespace std;
class Device;
class System
{
    public:
        //Device * wskaznik_na_czujnik;
        System();
        Commands commands;
        virtual ~System();
        void update(string nazwa);
        //void notify(string sender, string command, string args);
        //void update();
        //list <string> commands;
        void zarejestruj_czujnik(Device* urzadzenie);
        void lights_on(string nazwa);
        void trigger(uint8_t t);
        void alarm_on(string nazwa);


    protected:
        vector <Device*> devices; // tutaj są nasze czujniki
        uint8_t lights=0;
        uint8_t alarm_trigger=1;
        uint8_t alarm = 0;

};

#endif // SYSTEM_H

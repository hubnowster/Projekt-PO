#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <string>
#include "Device.h"
using namespace std;
class Device;
class System
{
    public:
        //Device * wskaznik_na_czujnik;
        System();
        virtual ~System();
        //void add(Device*);
        void update();
        void notify(string sender, string command, string args);
        //void update();
        //list <string> commands;
        void zarejestruj_czujnik(Device* urzadzenie);

    protected:
        vector <Device*> devices; // tutaj są nasze czujniki
    private:


};

#endif // SYSTEM_H

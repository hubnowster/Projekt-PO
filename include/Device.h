#ifndef DEVICE_H
#define DEVICE_H
#include <vector>
#include <string>
#include "System.h"
using namespace std;
class System;
class Device
{
    public:
        Device();
        string nazwa;
        Device(System* sys, string nazwa);
        virtual ~Device();
        virtual void notify() = 0; // to s³u¿y równie¿ jako powiadomienie systemu, ¿e coœ jest wykryte
        virtual void attach(System *obserwator) = 0;
            //views.push_back(obserwator);
        virtual void wyswietl();
        virtual string get_nazwa();
    protected:
        virtual void on() = 0;
        //virtual void off() = 0;
        vector < System * > views;

    private:

};

class Czujnik_ruchu: public Device
{
    public:
        //Czujnik_ruchu (System* sys, string nazwa) : Device (sys, nazwa){}
        //using Device :: Device;
        Czujnik_ruchu ();
        string nazwa;
        Czujnik_ruchu(System* sys, string nazwa);
        virtual ~Czujnik_ruchu();
        void notify();
        void attach(System *obserwator);
        void wyswietl();
        string get_nazwa();
    protected:
        void on();
       // void off();
};

/*
class Czujnik_dymu: public Device
{
    public:
        Czujnik_dymu ();
        virtual ~Czujnik_dymu();
        void notify();
        void attach(System *obserwator);
    protected:
        void on();
        void off();
};*/

#endif // DEVICE_H

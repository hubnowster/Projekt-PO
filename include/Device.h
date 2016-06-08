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
        virtual string get_nazwa();
        vector < System*> views;

};

class Czujnik_ruchu: public Device
{
    public:
        //Czujnik_ruchu (System* sys, string nazwa) : Device (sys, nazwa){}
        //using Device :: Device;
        string nazwa;
        Czujnik_ruchu ();
        Czujnik_ruchu(System* sys, string nazwa);
        virtual ~Czujnik_ruchu();
        void notify();
        void attach(System* obserwator);
        string get_nazwa();



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

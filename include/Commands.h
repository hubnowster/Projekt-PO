#ifndef COMMANDS_H
#define COMMANDS_H
#include <string>

using namespace std;
class Commands
{
    public:
        Commands();
        virtual ~Commands();
        void alarm_on(string nazwa, uint8_t alarm);
        void lights_on(string nazwa);

};

#endif // COMMANDS_H

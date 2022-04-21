// main.cpp driver program
#include <iostream>
#include <string>
#include <cstdlib>
#include "creature.h"
using namespace std;

int main()
{
    srand(time(0));

    //default Creature object -> Human
    Creature def;
    Creature *cdef = &def;
    for(int i =0; i<4;i++)
    {
        cdef->getDamage();
    }

    //Human object
    Human h(5,5);
    Creature *ch = &h;
    for(int i =0; i<4;i++)
    {
        ch->getDamage();
    }

    //Cyberdemon object
    Cyberdemon c(15,15);
    Creature *cc = &c;
    for(int i =0; i<4;i++)
    {
        cc->getDamage();
    }

    //Balrog object
    Balrog b(20,20);
    Creature *cb = &b;
    for(int i =0; i<4;i++)
    {
        cb->getDamage();
    }

    //Elf object
    Elf e(25,25);
    Creature *ce = &e;
    for(int i =0; i<4;i++)
    {
        ce->getDamage();
    }

    return 0;
}
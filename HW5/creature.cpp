// creature.cpp Creature class methods
#include <iostream>
#include <string>
#include <cstdlib>
#include "creature.h"
using namespace std;

////////////////////////////////////////////////////////////
//CREATURE function definitions////////////////////////////
//initialize to human, 10 strength, 10 hit points
Creature::Creature():strength(10),hitpoints(10){}
Creature::Creature(int newStrength, int newHit)
    {
        strength = newStrength;
        hitpoints = newHit; 
    }
int Creature::getStrength()
{
    return strength;
}
int Creature::getHit()
{
    return hitpoints;
}
void Creature::setStrength(int newStrength)
{
    strength = newStrength;
}
void Creature::setHit(int newHit)
{
    hitpoints = newHit;
}
// returns type of species 
string Creature::getSpecies()
{
    return "Human";
}
//returns amount of damage this creature inflicts in one round of combat
int Creature::getDamage()
{
    //all creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;
    cout <<"\n"<< getSpecies() << " attacks for " << damage << " points!"<<endl;

    return damage;
}


///////////////////////////////////////////////////////////
//HUMAN function definitions///////////////////////////////
Human::Human():Creature(){}
Human::Human(int newStrength,int newHit):Creature(newStrength,newHit){}
string Human::getSpecies()
{
    return "Human";   
}


///////////////////////////////////////////////////////////
//DEMON function definitions///////////////////////////////
Demon::Demon():Creature(){}
Demon::Demon(int newStrength, int newHit):Creature(newStrength,newHit){}
int Demon::getDamage()
{
    //demons can inflict damage of 50 with a 5% chance
    if((rand() % 100) < 5)
    {
        int damageDemon = Creature::getDamage() + 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        cout << "Total damage: " << damageDemon << " points!" << endl;
    }
    else
    {
        damage = Creature::getDamage();
        
    } 
    return damage;
}


///////////////////////////////////////////////////////////
//CYBERDEMON function definitions//////////////////////////
Cyberdemon::Cyberdemon():Demon(){}
Cyberdemon::Cyberdemon(int newStrength, int newHit):Demon(newStrength,newHit){}
int Cyberdemon::getDamage()
{
    damage = Demon::getDamage();
    return damage;
}
string Cyberdemon::getSpecies()
{
    return "Cyberdemon";   
}


///////////////////////////////////////////////////////////
//BALROG function definitions//////////////////////////////
Balrog::Balrog():Demon(){}
Balrog::Balrog(int newStrength, int newHit):Demon(newStrength,newHit){}
int Balrog::getDamage()
{
    //balrogs are so fast they get to attack twice
    int damageBalrog = (rand() % Creature::getStrength()) + 1;
    damage = Creature::getDamage();
    cout << "Balrog speed attack inflicts "<< damageBalrog 
    << " additional damage points!" << endl;
    cout << "Total damage: " << damage + damageBalrog << " points!" << endl;
  
    return damage;
}
string Balrog::getSpecies()
{
    return "Balrog";   
}


///////////////////////////////////////////////////////////
//ELF function definitions/////////////////////////////////
Elf::Elf():Creature(){}
Elf::Elf(int newStrength, int newHit):Creature(newStrength,newHit){}
int Elf::getDamage()
{
    //elves inflict double magical damage with a 10% chance
    if((rand() % 10) == 0)
    {
        int damageElf = Creature::getDamage() * 2;
        cout << "Magical attack inflicts " << damageElf
        << " additional damage points!" << endl;
        cout << "Total damage: " << damage + damageElf << " points!" << endl; 
    }
   else
   {
       damage = Creature::getDamage();
   }
    return damage;
}
string Elf::getSpecies()
{
    return "Elf";   
}


// creature.h Creature class definition 
#ifndef CREATURE_H
#define CREATURE_H

//define Creature class

class Creature
{
    private:
        int strength; //how much damage can be inflicted 
        int hitpoints; // how much damage can be sustained 
    protected:
        int damage; //total amount of damage
        
    public:
        //constructors
        Creature();
        Creature(int newStrength, int newHit);
        
        //accesor functions
        int getStrength();
        int getHit();

        //mutator functions
        void setStrength(int newStrength);
        void setHit(int newHit);

        // returns type of species 
        virtual std::string getSpecies();

        //returns amount of damage
        virtual int getDamage();
  
};

class Human: public Creature
{
    public:
        Human();
        Human(int newStrength, int newHit);
        std::string getSpecies();
};

class Demon: public Creature
{   
    public:
        Demon();
        Demon(int newStrength, int newHit); 
        int getDamage();
   
};

class Cyberdemon: public Demon
{
    public:
        Cyberdemon();
        Cyberdemon(int newStrength, int newHit);
        int getDamage();
        std::string getSpecies();
};

class Balrog: public Demon
{
    public:
        Balrog();
        Balrog(int newStrength, int newHit);
        int getDamage(); 
        std::string getSpecies();
};

class Elf: public Creature
{
    public:
        Elf();
        Elf(int newStrength, int newHit);
        int getDamage();
        std::string getSpecies();
};

#endif
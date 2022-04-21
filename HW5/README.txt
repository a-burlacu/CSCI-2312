Name: Alina Burlacu
ID: 109129252

Status: Fully Functional 

Structure of the program:
-------------------------------------------------------------
File organization: 
    >burlacuHW5.zip
        > main.cpp
        > creature.cpp
        > creature.h
        > README.txt
        > Makefile
        > output.png

Functional organization: 
    > main.cpp 
        >main (): creates objects for each derived class, calls base class virtual function

    >creature.h
        >Class organization:
            >Creature:
                -Human
                -Elf
                -Demon:
                    *Cyberdemon
                    *Balrog    
    
    > creature.cpp
        >Creature Class function definitions
            >Creature defaut constructor initializes object to "Human" type
            >Mutator/Accessor functions
            >getSpecies() virtual function, returns different output based on derived class
            >getDamage() virtual function, returns different damage total based on creature subclasses

        >Human Class function definitions
            >getSpecies() returns "Human" string

        >Demon Class function definitions
            >getDamage() returns total damage for Demon base class

        >Cyberdemon Class function definitions
            >getDamage() returns total damage for Cyberdemon class
            >getSpecies() returns "Cyberdemon" string

        >Balrog Class function definitions
            >getDamage() returns total damage for Balrog class 
            >getSpecies() returns "Balrog" string
            
        >Elf Class function definitions
            >getDamage() returns total damage for Elf class
            >getSpecies() returns "Elf"

Usage:
    > Extract files from archive
    > Open a terminal in the same directory
    > Run "make" command to create executable file
    > Run "./hw5" to execute program


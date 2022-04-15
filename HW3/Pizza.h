// pizza.h  Pizza class definition
#ifndef PIZZA_H
#define PIZZA_H

//define Pizza class
class Pizza
{    
    private:
        int pizzaType;
        int pizzaSize;
        int pizzaToppings;
        double pizzaCost;
        
    public:
        //accessor functions
        int getType();
        int getSize();

        //mutator functions
        void setType(int type);
        void setSize(int size);

        //Ask user for pizza type, size, and topping amount
        void userInput();

        //Displays a text description of pizza object
        void outputDescription();
        
        //Computes the cost and returns the price as a double
        double computePrice();
};
#endif
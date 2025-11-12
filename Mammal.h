#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
    class Mammal : public Animal{
private:
    string furColor;

public:
    Mammal(string name,int age,bool hungry,string furColor)
        : Animal(age,name,isHungry ) {
        Fur color= furColor;
    }

    void displayInfo() {
        Animal::displayInfo();
        cout << "Fur color: " << furColor << endl;
    }
    };

#endif

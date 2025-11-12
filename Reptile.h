#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

    class Reptile : public Animal {
    private:
        bool isVenomous;

    public:
        Reptile(string name, int age, bool hungry, bool isVenomous)
            : Animal(age, name, isHungry) {
            venom =  isVenomous;
        }

        void displayInfo() {
            Animal::displayInfo();
            cout << "venom" << isVenomous  << endl;
        }
    };
   






#endif

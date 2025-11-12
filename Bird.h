#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

 class Bird : public Animal {
 private:
    float wingSpan;

 public:
     Bird(string name, int age, bool hungry, float wingSpan)
         : Animal(age, name, isHungry) {
         wing = wingSpan;
     }

     void displayInfo() {
         Animal::displayInfo();
         cout << "Wing span" << wingSpan << endl;
     }
 };




#endif

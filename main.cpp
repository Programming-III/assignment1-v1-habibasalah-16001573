#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>


#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
    int age;
    string name;
    bool isHungry;


public:
    Animal(int age, string name , bool isHunrgy) {
        age = age;
        name = name;
        hunrgy = isHungry;
    }

    void displayInfo() {
        cout << "Animal age " << age << endl;
        cout << "name " << name << endl;
        cout << "hungry" << hungry << endl;

    }
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
   

};
class visitor {
    private:
        int ticketsBougt;
        string vistorname;

    public:
        visitor(int ticketsBought, string vistorname) {
            tickets = ticketsBought;
            namevisit  = vistorname;
           
        }

        void displayInfo() {
            cout << "tickets " << ticketsBougt << endl;
            cout << "name " << vistorname << endl;

        }

};
int main() {
    visitor h("Habiba", 25);
    h.displayInfo();
    Animal x("panda", 25,'yes');
    h.displayInfo();
    return 0;
}




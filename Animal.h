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
#endif

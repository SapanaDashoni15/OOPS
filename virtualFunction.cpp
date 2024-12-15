#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;
    // dog.sound();  // Outputs: Dog barks

    Animal a, *ptr;
    ptr = &dog;
    // a.sound();
    ptr->sound();
    return 0;
}

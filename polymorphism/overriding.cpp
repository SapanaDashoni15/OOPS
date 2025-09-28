#include<iostream>
#include<string>

using namespace std;

class Base{
    public:
    void virtual show() {
        cout << "Hello form base" << endl;
    }

};

class Child : public Base{
    public:
    void show() {
        cout << "Hello from child" << endl;
    }
};

int main() {

    // Child c1;
    // c1.show();

    // Base b1;
    // b1.show();
    // return 0;


    // my base ptr has child obj, but i am still getting output as hello from base, this is happening because of realy binding

    // this can be removed my making base class function as virtual
    Base* bptr;
    Child cptr;

    bptr = &cptr;

    bptr->show();
}
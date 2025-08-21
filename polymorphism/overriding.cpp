#include<iostream>
#include<string>

using namespace std;

class Base{
    public:
    void show() {
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

    Child c1;
    c1.show();

    Base b1;
    b1.show();
    return 0;
}
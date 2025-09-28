#include<iostream>
#include<string>

using namespace std;

class Base{
    public:
    void show() {
        cout << "Hello from Base class!" << endl;
    }
};

class Parent1 :  public Base {

};

class Parent2 : virtual public Base {

};

class Child  : public Parent1 , public Parent2{

};

int main() {

    Child c1;
    c1.show(); // deadly diamond of death problem


    // there are 2 methods to resolve this prob
    // 1. specify explicitly whose func you want to call
    c1.Parent1::show();

    //2. use virtal inheritance
    // Without virtual → 2 copies of Base → ambiguity.

    // With virtual → 1 shared Base → no ambiguity.

    return 0;
}
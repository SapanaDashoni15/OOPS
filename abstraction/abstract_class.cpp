#include<iostream>
#include<string>
using namespace std;

class Shape{ // abstract class
    public:
    virtual void draw() = 0; // pure virtual function
};

class Triangle : public Shape {
    public:
    void draw() {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {

    Triangle t1;
    t1.draw();
    return 0;
}
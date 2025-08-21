#include<iostream>
#include<string>
using namespace std;

class Shape{
    public:
    virtual void draw() = 0;
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
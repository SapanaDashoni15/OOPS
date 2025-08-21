#include<iostream>
#include<string>

using namespace std;

class Student{
    public:
    void show(int x) {
        cout << x << endl;
    }

    void show(char c) {
        cout << c << endl;
    }
};


int main() {

    Student s1;
    s1.show(3);
    s1.show('a');

    return 0;
}
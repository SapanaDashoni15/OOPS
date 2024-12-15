// example for compile time polymorphism..
// constructor overloading
#include<bits/stdc++.h>
using namespace std;
class student {
    public:
        string name;
        int age;
        int rollno;
        
        student() {
            name = "Sapana";
            age = 19;
        }
        
        student(string n, int a) {
            name = n;
            age = a;
            
        }
        
        void getInfo() {
            cout << "name : " << name << endl;
            cout << "age : " << age << endl;
        }
        
};

int main() {
    
    student s1("sapana", 19);
    s1.getInfo();
    
    student s2;
    s2.name = "Soni";
    s2.age = 19;
    s2.getInfo();

    
    return 0;
}
// a class  can have different constructors given that tthey have different parameters  - constructor overloading (eg of polymorphism)

#include <bits/stdc++.h>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    int salary;

public:


    // Constructor

    Teacher() {

    }

    Teacher(string n, string d, string s, int sal) {
        name = n;
        dept = d;
        subject = s;
        if (sal > 0)
            salary = sal;
        else {
            cout << "❌ Invalid salary! Setting salary = 0" << endl;
            salary = 0;
        }
    }

    // Getters
    string getName() { return name; }
    string getDept() { return dept; }
    string getSubject() { return subject; }
    int getSalary() { return salary; }

    // Method
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    // Object creation using constructor
    Teacher t1("Sapana", "CSE", "DSA", 45000);
    Teacher t2("Rohit", "ECE", "Networks", -10000);  // invalid salary

    cout << "Teacher 1: " << t1.getName() 
         << ", " << t1.getDept() 
         << ", " << t1.getSubject() 
         << ", Salary: " << t1.getSalary() << endl;

    cout << "Teacher 2: " << t2.getName() 
         << ", " << t2.getDept() 
         << ", " << t2.getSubject() 
         << ", Salary: " << t2.getSalary() << endl;

    return 0;
}

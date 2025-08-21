#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    double cgpa;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0)    
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    void setCGPA(double c) {
        if (c >= 0 && c <= 10)  =
            cgpa = c;
        else
            cout << "Invalid CGPA!" << endl;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getCGPA() {
        return cgpa;
    }
};

int main() {
    Student s;

    s.setName("Sapana");
    s.setAge(21);
    s.setCGPA(8.5);

    cout << "Student Details:\n";
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "CGPA: " << s.getCGPA() << endl;

    return 0;
}

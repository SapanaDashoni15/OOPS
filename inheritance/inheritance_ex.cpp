#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }


    Person() {
        cout << "Hello!, I am parent constructor" << endl;
    }
};

class Student : public Person {
    public:
    int rollno;

    Student() {
        cout << "Hello!, I am Child Constructor" << endl;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno. " << rollno << endl;
    }
};

int main() {

    Student s1;
    s1.name = "Soni";
    s1.age = 21;
    s1.rollno = 62;

    s1.getInfo();

    return 0;
}
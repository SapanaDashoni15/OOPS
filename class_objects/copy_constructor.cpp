#include<iostream>
using namespace std;

class Teacher{
    private:
    string name;
    string subject;
    int salary;

    public:

    Teacher(string n, string s, int sal) {
        cout << "Hello, I am parametrised constructor" << endl;
        name = n;
        subject = s;
        salary = sal;
    }

    Teacher( Teacher &obj) {
        cout << "hello, I am copy constructor" << endl;
        name = obj.name;
        subject = obj.subject;
        salary = obj.salary;
    }

    // writing setter and getter is a good practise to ensure data integrity
    //  but here i am initializing the values with constructor, so no need here
    void setName(string n) {
        name = n;
    }
    void setSubject(string s) {
        subject = s;
    }
    void setSalary(int sal) {
        if(sal <= 0) salary = 0;
        else salary = sal;
    }

    void getInfo() {
        cout << "name is " << name << endl;
        cout << "subject is " << subject << endl;
        cout << "salary is " << salary << endl;
    }



};

int main() {

    Teacher t1( "Chintu", "DSA", 10000 );

    Teacher t2(t1);

    t2.getInfo();


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Teacher {

    private:
    // properties , attributes
    string name;
    string dept;
    string subject;
    int salary;

    public:
    //setters
    void setName(string n) {
        name = n;
    }

    void setSubject(string sub) {
        subject = sub;
    }

    void setSalary(int sal) {
        if(sal > 0 ) 
            salary = sal;
        else {
            cout << "You have entered invalid salary" << endl;
            salary = 0;
        }
    }


    //getters
    string getName() {
        return name;
    }

    int getSalary() {
        return salary;
    }

    string getSubject() {
        return subject;
    }

   
    //methods, function , member function
    void changeDept(string newDept) {
        dept = newDept;
    }



};

int main() {

    Teacher t1;
    t1.setName("Sapana");
    t1.setSubject("DSA");
    t1.setSalary(-2);

    cout << t1.getName() << endl;
    cout << t1.getSubject() << endl;
    cout << t1.getSalary() << endl;

    return 0;

}
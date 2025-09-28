### OOPS in cpp
. Object oriented is a programming appraoch where we write code using classes and objects.
. it is easy to write code using real life scenario using OOPS

### Object 
all entities in the real world are objects. ex - laptop, phone, pen, book 

### Class 
Blueprint of the objects. It defines object's properties and methods.

1. Encapsulation → Data Hiding
Encapsulation is wrapping up of data and member functions in a single unit called class.

Prevents direct access to data, allows access only through methods.

2. Abstraction → Hide the implementation, show only functionality

Focus on what the object does, not how it does it.

Example:
When you drive a car, you only press the start() button, you don’t care how the engine works inside.

3. Inheritance → Reusability of Code

One class can inherit properties and methods of another class.

Promotes code reuse.

4. Polymorphism → One name, many forms

Same function behaves differently depending on context.



### Summary

Encapsulation → Protect the data

Abstraction → Show only essential details

Inheritance → Reuse existing code

Polymorphism → Same interface, different behavior   

Access Specifier

Private - data and methods accessible inside class
Public - data & methods accesible to everyone
Protected - data and memebrs are accessible inside class and to its derived class (used in inheritance)

### Constructors 
special method invoked automatically at time of object creation. Used for initialisation
- same name as class
- constructor dosen't have a return type
- only called once(automatically), at object creation
- memeory allocation happens when the constructor is called objects

this pointer - is a special pointer in cpp that points to the current object.
 t1.func() ---> this->func()  

 this->prop is same as *(this).prop


Types-

### Destructor 
opp0site of constructor - deallocate memory
~ClassName() {
    // to delete dynamic memory
    delete cgpaPtr; 
} 
compilers make destructors on its own for static memory only

### Inheritance 
when properties & members functions of base class are passed on to the derived class

#Type 
1.
2.
3.
4.
5.

### Diamond problem
- The Diamond Problem is an ambiguity error that arises in multiple inheritance when a derived class inherits from two or more base classes that share a common ancestor. This results in the inheritance hierarchy forming a diamond shape, hence the name "Diamond Problem." The ambiguity arises because the derived class has multiple paths to access members or methods inherited from the common ancestor, leading to confusion during method resolution and member access.




### Polymorphism

Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

- Compile Time polymorphism
    1. function overloading - same function with different parametrs
    2. operator overloading - operators are overloaded to peform different task then they are intended to do

- Runtime polymorphism
    1. function overriding - parent and child both contain same function with different implementation. then parent class function is said to be overridden (it is done in inheritance)

    2. Virtual function - a virtual function is a member function that you expect to be redefined in derived class

    -virtual function are dynamic in nature.
    -defined by the keyword "virtual" inside a base class and are always declared with base class and overridden in a child class.
    -a virtual functtion is called during runtime

### Abstraction 
hiding all unncessary details & showing only the important parts
    it can be implemented using 
    1. Abstract classes (having atleast 1 pure virtual function)
    2. access specifier

    
    An abstract class is a class which cant be instantiatd means no object can be created.
    - Abstract class are just meant for inheritance, act as an interface for derived class
    - contauns atleast 1 pure virtual fucntion

    Pure virtual function - a function declared in abse class but has no definition there.
        virtual void funcNmae() = 0;

### Encapsulation 
Encapsulation means combining data memebers and methods into a single unit called class.In Object-Oriented Programming, it helps keep things organized and secure.

For example, think of a company with different departments—finance, sales, and accounts. Each department handles its own tasks and data. The finance department deals only with financial records, and the sales department handles only sales. Just like that, in programming, each class manages its own data and operations, keeping everything separate and protected. That's encapsulation.

### Static keyword 

Static can be used with variables and objects.

variables declared as static in a function are created & inherited once for the ligetime of the program. -> in function

static variables in a class are created & initialised once. Thay are shared by all the objects of the class. -> in class


### Friend function
A friend function is a function that is not a member of a class, but it can access the class’s private and protected members.

Declared using the keyword friend.

why friend function ?? Normally, private and protected members of a class are hidden (encapsulation).
But sometimes, we want external functions (not members of the class) to access these hidden members safely and intentionally.

That’s where friend functions come in.

# Friend functions break encapsulation, so they should be used only when absolutely necessary.

They are not inherited (a derived class does not inherit friend functions).

Use them mainly for operator overloading or closely related classes.

Courtesy - Sourabh Shukla, Shradha Kapra
#include<iostream>

using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void Introduce_your_self(){
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }


Employee (string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}
};



   /* 

    Even though we haven't given any values for class objects
    as the objects got created it will invoke the constructor
    and "default constructors" will be created 
    which will generate some random values when created.

   */

    /*
    
    Constructors follows 3 Rules :-
    1. Constructor is a method but unlike other methods the constructor
        will not have any return type
    2. The constructor has the same name as the class that it belong to 
        so the constructor of the class Employee will be called "Employee" 
    3. Constructor must be public. 
        There may be certain situations where we make our constructor private.

    */

int main() { 
    Employee emp1 = Employee("Guru", "CDAC", 21); 

    emp1.Introduce_your_self();
    
    Employee emp2 = Employee("Satya", "Quantum", 22);
    
    emp2.Introduce_your_self();

    return 0;
} 
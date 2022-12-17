/*

1. Bundeling or tieing the data with in the  class
2. To prevent other classes to directly access objects in this class
3. So that we can provide our own way to do it.

Getters and Setters

*/

#include<iostream>

using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;


public:
    // string Name;
    // string Company;
    // int Age;

    // Adding getters and setters to make a provision for other classes to access objects from this private class


    // For those properties which we ave added getters and setters are only accessable by other classes 
    // since these getters and setters are declared in public class. 

    void setName(string name){ // Setters for name property
        Name = name;
    }

    string getName(){   // Getters for name property
        return Name;
    }


    void setCompany(string company){ // Setters for company property
        Company = company;
    }

    string getCompany(){   // Getters for company property
        return Company;
    }


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

int main() { 
    Employee emp1 = Employee("Guru", "CDAC", 21); 

    emp1.Introduce_your_self();
    
    Employee emp2 = Employee("Satya", "Quantum", 22);
    
    emp2.Introduce_your_self();

    emp1.setCompany("CDAC");
    cout << emp1.getCompany() << " from setCompany";

    return 0;
} 
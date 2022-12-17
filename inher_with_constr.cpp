#include <iostream>

using namespace std;

class AbstractEmployee{

    virtual void Ask_for_promotion() = 0;

}; 

class Employee : AbstractEmployee
{
protected:
    string Name;
private:
    //string Name;
    string Company;
    int Age;



public:
     void setName(string name){ // Setters for name property
        Name = name;
    }

    string getName(){   // Getters for name property
        return Name;
    }


    void setAge(int age){ // Setters for company property
        if (age >= 18)
            Age = age;
    }

    int getAge(){   // Getters for company property
        return Age;
    }

    void Introduce_your_self(){
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }
    // Constructor for employee class
    Employee (string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
}

    void Ask_for_promotion() {
        if (Age >= 30)
            cout << Name << " got promoted " << endl;
        else
            cout << Name << " , Sorry not elgible for promotion ";
    }
};

class Developer : public Employee{
    public:
    string Fav_prog_lang;
    Developer(string name, string company , int age , string fav_prog_lang)
    :Employee(name, company, age){
        Fav_prog_lang = fav_prog_lang;
    }
    void Fix_Bug(){
            // We can directly use only getName as it's public from Employee class
        cout << getName() << " Fix bug using " << Fav_prog_lang << endl;
            // But we can't directly use Name from the Employee class as it's private under under class
            // To use private members of parent class in child class : We have to make the parent - child relation "protected" in parent class.
        cout << Name << " Fix bug using " << Fav_prog_lang << endl;

        Ask_for_promotion(); // It will apply the function call for all objects in the class

            // We can use functions of parent class only in the class of child class 
                // But not in the objects of the child class : 
                    // To use functions of parent class in objects of child class we have to make 
                        // Parent - child relation public in child class. 
    }  
    
};

class Teacher : public Employee{
public: // Making it public so we can create objects with attributes and use them

    string Subject;
    void prep_lesson(){
        cout << Name << " is preparing " << Subject << "lesson " << endl;
    }

// Creating a constructor of Techer class
    Teacher (string name, string company , int age, string subject)
    : Employee(name, company, age)
    {
        Subject = subject;
    }


};

int main() {
    // Employee emp1 = Employee("Guru", "CDAC", 21); 
    // Employee emp2 = Employee("Satya", "Quantum", 22);

    

    Developer d1 = Developer("Guru_Dev", "CDAC_Dev", 21, "Python");
        d1.Fix_Bug();

    Developer d2 = Developer("Satya_Dev", "Quantum_Dev", 32, "Qiskit");
        d2.Fix_Bug();
        // Accessing parent class methods in child class.
        d2.Ask_for_promotion(); // This will apply only for d2 class. 

    Teacher t = Teacher("Guru_Dutt", "Acts", 22, "ML ");
    t.prep_lesson();
    t.Ask_for_promotion();

    return 0;
} 
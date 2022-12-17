#include <iostream>

using namespace std;

class AbstractEmployee{

    virtual void Ask_for_promotion() = 0;

}; 

class Employee : AbstractEmployee
{
private:
    string Name;
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

    void Ask_for_promotion() {
        if (Age >= 30)
            cout << Name << " got promoted " << endl;
        else
            cout << Name << " , Sorry not elgible for promotion ";
    }
};

class Developer: Employee{
    public:
    /* If the parent class doesn't has a default class that is constructor was been created 
    then the child class also needs to create a constructor

    Ex: Developer(with parameters from parent and child classes)
    : Employee(name, company, age){
        parameter of developer class 
        Fav_prog_lang = fav_prog_lang;
    }

    But here it's is not needed
    */
        string Fav_prog_lang;

};

int main() {
    Employee emp1;
    Employee emp2;

    emp1.setName("Class emp1");
    emp1.setAge(44);    // Emp1 may execute but as getAge is not returning in this case it may print some random value.
    //cout << emp1.getAge() << " from emp1 \n";

    emp2.setName("Class emp2");
    emp2.setAge(24);

    Developer d;
        d.Fav_prog_lang;

    return 0;
} 
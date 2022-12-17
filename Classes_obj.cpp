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
};

int main() { 
    Employee emp1; 
    emp1.Name = "Guru";
    emp1.Company = "CDAC";
    emp1.Age = 21;

    emp1.Introduce_your_self();
    
    Employee emp2;
    emp2.Name = "Satya";
    emp2.Company = "Quantum";
    emp2.Age = 22;
    
    emp2.Introduce_your_self();

    return 0;
}
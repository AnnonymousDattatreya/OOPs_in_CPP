#include<iostream>

using namespace std;

class Employee
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
};

int main() {
    Employee emp1;
    Employee emp2;

    emp1.setAge(11);    // Emp1 may execute but as getAge is not returning in this case it may print some random value.
    cout << emp1.getAge() << " from emp1 \n";

    emp2.setAge(22);
    cout <<"\n" << emp2.getAge() << " from emp2";

    return 0;
} 
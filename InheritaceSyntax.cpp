
/********** Derived Class syntax **********/ /*


class {{derived-class-name}}  :  {{visibility mode}}  {{base-class-name}}
{
    class members, methods, etc....
};

⭕ Note : 
    1. Public visibility mode : public of base becomes public of derived 
    2. Private visibility mode : public of base class becomes private of derived  
    3. We cant inherit private members of base class 
    4. Default visibility mode is private 


 ❌ Problem : code is running but garbage values are assigning to language code & id of employee class (not entering in constructors)
 ✅ Solution : Another way to use base class's constructor in derived ..search further file (constructor in derived class)
*/


#include <iostream>
using namespace std;

class Employee
{

public:
    int salary;
    int id;

    Employee(){};

    Employee(int a)
    {
        int id = a;
        salary = 1000;
    }
};

class Programmer : public Employee
{                                                   // Default visibility mode is private
                                                    // Public members of Employee are private here
    public:                                         // we cant access id of Programmer object
    int languageCode;
    Programmer(int x) 
    {
        id = x;
        int languageCode = 9;
    }
    void getData()
    {
        cout << "The Id is " << id << endl;
        cout << "The lang code is " << languageCode << endl;
    }
};

int main()
{

    Employee shree(1), atharva(2);
    cout << shree.salary << endl;
    cout << atharva.salary << endl;
    cout << shree.id << endl;
    cout << atharva.id << endl;

    Programmer skillF(11);
    //cout <<skillF.id<<endl;     // errror  (if we inherited privately so public of employee is private here)
    skillF.getData();

    return 0;
}


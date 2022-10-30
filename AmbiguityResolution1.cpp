// In Multiple Inheritance if two base class contains exactly same function then there is confusion from which base class we have to take function, to resolve this ambiguity we use this metod mentioned below...

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        // To resolve ambiguity we are giving preference to Base1's greet() when derived greet() is called....
        Base1 ::greet();
    }
};
 
int main()
{

    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    Derived d;
    // d.greet();       // Ambiguity Occurs :( To avoid this we have written ambiguity resolution code in line 24.. then it works :)
    d.greet();

    return 0;
}
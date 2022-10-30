#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase;
    virtual void display() /*🔴*/
    {
        cout << "Displaying Base class variable " << varBase << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int varDerived;
    void display()
    {
        cout << "Displaying Derived class variable " << varDerived << endl;
    }
};

int main()
{
    BaseClass obj_base;
    DerivedClass obj_derived;

    BaseClass *base_class_pointer;     // Pointer of base class
    base_class_pointer = &obj_derived; // Base class pointer pointing to derived class
    base_class_pointer->display(); // If we not declared display() as a virtual, base class's display will run, so to avoid that we made base class's display as virtual

    return 0;
}

// 🔴 Run time polymorphism can be achieved through this virtual functions 🔴 //


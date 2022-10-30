#include <iostream>
using namespace std;

class BaseClass
{
public:
    int varBase;
    void display()
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

    BaseClass *base_class_pointer; // Pointer of base class

    base_class_pointer = &obj_derived; // Base class pointer pointing to derived class
    base_class_pointer->varBase = 20;  // We can assign it
    // 🔴 base_class_pointer->varDerived = 20; // We can't access derived class element through base class pointer
    base_class_pointer->display(); // Base class's display function will run

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->varDerived = 30;
    derived_class_pointer->display();

    // 🔴 Run time polymorphism is illustrated in case of display() function
    
    return 0;
}

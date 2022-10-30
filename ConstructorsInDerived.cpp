/*
⭕ Constructors in derived class ⭕

    1. We can use constructors in derived class.
    2. If base class constructor does not have any arguments, there is no need of
       any constructor in derived class.
    3. But if there are one or more than one arguments in base class constructor, 
       derived class need to pass arguments to the base clas constructor 
    4. If both base & derived class have constructors, base class constructor is executed first.


⭕ Constructor in inheritances ⭕

    1. In multiple inheritance, base classes are constructedin the order in which they appear in the class destination.
    2. In multilevel inheritance, the constructor are executed in the order of in the order of inheritace.


⭕ Speecial case of virtual base class ⭕

    1. The constructors of virtual base classes are invoked before an non-virtual base class.
    2. If there are multiple virtual base classes, they are invoked in thr order declared.
    3. Any non-virtual base class are then constructed before the derived class constructor is executed.


🟡 Case 1:
        class B : public A{
            // orderd of executiono of constructor -> first A() -> then B()
        }

🟡 Case 2:
        class A : public B, public C{
            // orderd of executiono of constructor -> first B() -> then C() and A()
        }

🟡 Case 3::
        class A : public B, virtual public C{
            // Order of executon of constructor -> first C() -> then B() and A()
        }
*/

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called !!" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called !!" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)    // 🟡🟡🟡🟡
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called !!" << endl;
    }
    void printDataDerived()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived shri(1,2,3,4);
    shri.printDataBase1();
    shri.printDataBase2();
    shri.printDataDerived();

    return 0;
}

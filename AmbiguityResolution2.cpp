// In Multiple Inheritance if two base class contains exactly same function then there is confusion from which base class we have to take function, to resolve this ambiguity we use this metod mentioned below...

#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    // D's new say() override base class's say() function
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    B b;
    b.say();

    D d;    // It gives preference to our say(), No Ambiguity
    d.say();

    return 0;
}
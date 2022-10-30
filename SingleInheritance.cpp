#include <iostream>
using namespace std;

class Base
{
private:
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

class Derived : public Base
{
private:
    int data3;

public:
    void process();
    void display();
};

    void Base ::setData()
    {
        data1 = 10;
        data2 = 20;
    }

    int Base ::getData1()
    {
        return data1;
    }

    int Base ::getData2()
    {
        return data2;
    }

    void Derived ::process()
    {
        data3 = data2 * getData1(); // data 1 is private of base hence accessed by member function
    }

    void Derived ::display()
    {
        cout << "Value of data1 is " << getData1() << endl; // data 1 is private of base hence accessed by member function
        cout << "Value of data2 is " << data2 << endl;
        cout << "Value of data3 is " << data3 << endl;
    }

int main()
{

    Derived der;
    der.setData(); // derived class using funct of base
    der.process();
    der.display();

    return 0;
}

// If we inherited derived publically then setData becomes public to derived & no access to setData()....but but there is a solution...
// call setData() function in process() function as member functions can access private part :)

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    // constructor
public:
    Complex(void); // constructor declaration // no return type , not even void // automatically invoked
    void printNumber()
    {
        cout << "Your no is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{ // Default constructor(without any arguments)
    a = 0;
    b = 0;
}

int main()
{

    Complex c1;
    c1.printNumber();

    return 0;
}

// Constructor should be declared in the public section of class
// We cannot refer to their address
// Automatically invoked when obj is created
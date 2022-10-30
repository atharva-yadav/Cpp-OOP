#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);

    Complex(int, int);

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
Complex ::Complex(int x, int y)
{ // Parametric constructor
    a = x;
    b = y;
}

int main()
{

    Complex c1(10, 20); // Implicit call
    c1.printNumber();

    Complex c3;
    c3.printNumber();

    Complex c2 = Complex(10, 20); // Expllicit Call
    c2.printNumber();

    return 0;
}
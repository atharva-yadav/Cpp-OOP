//Making friend function to funct of another class

#include <iostream>
using namespace std;

//Forward Declaration (imp) bcaz compiler doesn't know & we used in calculator class
// Forward declaration is necessary bcaz while traversing class Calculator, it came across sumRealComplex() & sumImagComplex() function which takes argument as object of class Complex
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex); // Function Declaration
    int sumImagComplex(Complex, Complex); // Function Declaration
};

class Complex
{
    int a, b;
    // Indivisually declaring funnctions as friends
            // friend int Calculator ::sumRealComplex(Complex o1, Complex o2); // Friend banaya... to the the functn of Calculator class
            // friend int Calculator ::sumImagComplex(Complex o1, Complex o2); // Friend banaya... to the the functn of Calculator class

    //Aliter: Declare entire class as a friend rather than making many functions as a friend(as above)
            friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{                                                                           // Function Declaration compulsary here
    return (o1.a + o2.a);
}

int Calculator :: sumImagComplex(Complex o1, Complex o2)
{                                                                           // Function Declaration
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.setNumber(1, 2);
    o1.printNumber();

    o2.setNumber(5, 7);
    o2.printNumber();

    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 & o2 is " << result << endl;

    cout << "The sum of Imaginary part of o1 & o2 is " << calc.sumImagComplex(o1, o2) << endl;

    return 0;
}
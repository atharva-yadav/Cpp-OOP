#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{

    Complex c1; // Normal method
    c1.setData(1, 2);
    c1.getData();

    // Complex *ptr = &c1; // Using pointer
    Complex(*ptr) = new Complex; // Using new keyword
    (*ptr).setData(31, 41);      //Bracket is must because '.' dot operator has more precedance than '*'.
    (*ptr).getData();
    ptr->getData();

    //  ⭕ "(*ptr).setData(3,4)" is exactly equal to "ptr->setData(3,4)" ⭕

    //Arrays of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(100, 200);
    ptr1->getData();

    return 0;
}
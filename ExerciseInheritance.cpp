#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{
protected:
    int a, b;

public:
    void set_simple_val(int x, int y)
    {
        a = x;
        b = y;
    }
    void get_simple_numbers()
    {
        cout << "Two numbers are " << a << " & " << b << endl;
    }
    // void simple_operations(int a,int b){
    //     cout<<"The sum of two numbers is "<<a+b<<endl;
    //     cout<<"The difference of two numbers is "<<a-b<<endl;
    //     cout<<"The multiplication of two numbers is "<<a*b<<endl;
    //     cout<<"The division of two numbers is "<<a/b<<endl;

    // }
    void display_simple_result()
    {   
        cout <<endl;
        cout << "The sum of two numbers is " << a + b << endl;
        cout << "The difference of two numbers is " << a - b << endl;
        cout << "The multiplication of two numbers is " << a * b << endl;
        cout << "The division of two numbers is " << a / b << endl;
    }
};

class sciCalculator
{
protected:
    int c;

public:
    void set_sci_val(int z)
    {
        c = z;
    }
    // void sci_operations(int c){
    //     cout <<"The square of number is "<<c*c<<endl;
    //     cout <<"The cube of number is "<<c*c*c<<endl;
    // }
    void display_sci_result()
    {   cout <<a;
        cout <<endl;
        cout << "The sine of numbers is " << sin(c) << endl;
        cout << "The cosine of number is " << cos(c) << endl;
        cout << "The tangent of number is " << tan(c) << endl;
        cout << "The expo. (e^) of number is " << exp(c) << endl;
    }
};

class hybridCalculator : public simpleCalculator, public sciCalculator
{
public:
    void show()
    {
        display_simple_result();
        display_sci_result();
    }
};

int main()
{
    hybridCalculator calc;
    calc.set_simple_val(1, 2);
    calc.set_sci_val(3);
    calc.show();

    return 0;
}
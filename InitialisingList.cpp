#include <iostream>
using namespace std;

/*
        ⭕ Syntax for initialization list in constructor ⭕

            constructor (argument-list) : initilization-section
            {
                assignment + other code;
            }

*/

class Test
{
    int a;
    int b;

public:

    // Test(int i, int j) : a(i), b(j) // value of 'i' is assigned to 'a' & same with 'j' and 'b' (a=i, b=j)
    // Test(int i, int j) : a(i), b(j+i) //  (a=i, b=j+i)
    // Test(int i, int j) : a(i), b(2 * j) //  (a=i, b=2 * j)
    // Test(int i, int j) : a(i), b(a * j) //  (a=i, b=a + j)
       Test(int i, int j) : b(j), a(i+b) //  (a=i+b, b=j) .... Garbage value to 'a' becaz we have declared 'a' first (in class) & which is declared first, it also initialize first
    {
        cout << "Constructor executed\n";
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}
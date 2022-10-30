// Exchanging the data using friend function

#include <iostream>
using namespace std;

class C2; // Forward declaration
class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << "Value is " << val1 << endl;
    }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << "Value is " << val2 << endl;
    }
};

void exchange(C1 &x, C2 &y)
{ // pass by reference
    int temp = x.val1;
    x.val1 = y.val2; // For swapping nos.
    y.val2 = temp;
}

int main()
{

    C1 oc1;
    oc1.inData(10);

    C2 oc2;
    oc2.inData(20);

    exchange(oc1, oc2);

    cout << "The values after exchanging becomes : ";
    oc1.display();
    cout << "The values after exchanging becomes : ";
    oc2.display();

    return 0;
}
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        // a = a;  // Value not assigned caz local variable scope...we get garbage value at output...To avoid such we use this keyword.....
        this->a = a; // the scope of variable with 'this' is global
    }

    /* 
       A &setData(int a)
       {
           this->a = a;
           return *this;        // Syntax : If we want to return object using this pointer
        } 
    */

    void getData()
    {
        cout << "\nThe value of a is " << a << endl;
    }
};

int main()
{

    // this is a keyword which is a pointer which points to the object which invokes the member function

    A a;
    a.setData(4);
    a.getData();

    
    return 0;
}
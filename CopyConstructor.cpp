//  ⭕ Copy constructor ⭕  //
 
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj) // copy constructor.....Assign value of given obj to new obj
    {
        cout << "Copy constructor is callled !!!"<<endl;
        a = obj.a;
    }

    void display()
    {

        cout << "The Number is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

                    // compiler allocates default copy constructor to all obj
                    // When there is no copy constructor found, compiler supplier its own copy constructor

                    // z1 should exactly resemble x,y or z.....Done through copy constructor
    Number z1(z);   // The z1 is made using z object by use of copy constructor
    z1.display();

    Number z2;  // uses default constructor
    z2 = z;     // copy constructor not called ❌ because obj already created at line no 48 & get assignes according to default constructor
    z2.display();
    
    Number z3 = z;      // Copy constructor called ✅ because we're giving ref of z at time of creation
    z3.display();

    return 0;
}
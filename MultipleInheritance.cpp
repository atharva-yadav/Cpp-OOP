/*
  | A |     | B |
   ↆ         ↆ          This is Multiple Inheritance
      | C |

Syntax for multiple Iheritance:

class derived : visibility-mode base1, visibility-mode base2{
    class Body of class derived
};

*/

#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int val){
        base1int = val;
    }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int val){
        base2int = val;
    }
};

class Deived : public Base1, public Base2{
    public: 
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of Base1 & Base2 is "<<base1int+base2int<<endl;
    }
};

/* 
The Inherited derived class will look like this:

    Data Members:
        base1int --> protected
        base2int --> protected
    Member Functions:
        set_base1int() --> public
        set_base2int() --> public

Base1 & Base2 inherited publically
*/
int main(){
    
    Deived d;
    d.set_base1int(1);
    d.set_base2int(2);
    d.show();

    return 0;
}
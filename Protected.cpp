#include<iostream>
using namespace std;

class Base{
    protected: // private , which can be inherited
    int a;

    private:
    int b;
};

/* 
For a protected member :
                            public derivation   private derivation  protected derivation

    1. Private members      Not inherited        Not inherited        Not inherited
    2. Protected members     Protected              Private             Protected
    3. Public members         Public                Private             Protected

*/
class Derived : protected Base{

};

int main(){

    Base b;
    Derived d;
    // cout <<d.a; // will throw error bcaz a is protected in base & derived class
        
    return 0;
}
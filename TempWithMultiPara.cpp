// #include <iostream>
// using namespace std;

// /*
// ⭕ Syntax for multiple parameter templates ⭕

// template <class T1, class T2>
// class ClassName{
//     //Body of class
// };
// */

// template <class T1, class T2>
// class myClass
// {
// public:
//     T1 data1;
//     T2 data2;

//     myClass(T1 a, T2 b)
//     {
//         data1 = a;
//         data2 = b;
//     }
//     void display()
//     {
//         cout << data1 << end;
//         cout << data2 << end;
//     }
// };

// int main()
// {
//     myClass<int, char> obj(1, 'C');
//     obj.display();
//     cout << "Moryaa..";

//     return 0;
// }
#include <bits/stdc++.h>
#include <string.h>

template<class T>
class AddElements{
    private:
        T a;
    public:
    
    AddElements(T arg){
        a = arg;
    }
    T add(T b){
        return a+b;
    } 
};

template<>
class AddElements<string>{
    private:
    string a;
    
    public:
    AddElements(string arg){
        a = arg;
    }
    string concatenate(string b){
        return a+b;
    }
};
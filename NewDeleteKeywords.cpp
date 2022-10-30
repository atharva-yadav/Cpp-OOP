#include <iostream>
using namespace std;

int main()
{
    // ⭕ Basic Example ⭕

    int a = 4;
    int *ptr = &a;
    cout << "The address of a is " << (ptr) << endl;
    cout << "The value of a is " << *(ptr) << endl;

    // ⭕ new Keyword ⭕

    // int* p = new int(40);        } allocating space for integer variable in heap
    int *p = new int;
    *p = 40;
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3]; // allocating contiguious block of memory(array) of int datatype
    arr[0] = 10;
    arr[1] = 20; // *(arr+1) = 20  this will also work
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << endl;

    // ⭕ delete Keyword ⭕

    delete p; // deallocate memory
    cout << "The value at address p is " << *(p) << endl;

    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl; // will not print previous allocated values caz we have free it by delete operator
    cout << "The value of arr[1] is " << arr[1] << endl; // will not print previous allocated values caz we have free it by delete operator
    cout << "The value of arr[2] is " << arr[2] << endl; // will not print previous allocated values caz we have free it by delete operator

    return 0;
}
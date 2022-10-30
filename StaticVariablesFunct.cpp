// For using a same counter to many objects use static variables
// if we not use static variables each object take one counter separately
// Static member funct. have only acess to static variables and runs directly by class name and scope resolution operation

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // Default value is zero, makes only one copy for all objects

public:
    void setData()
    {
        cout << "Enter the id\n";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id
             << " and this is employee no. " << count << endl;
    }
    static void getCount()
    { // Static member function
        // cout <<id;                                 // Throws an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count;
// int Employee::count=1000;                          // If we want start counting from specific number

int main()
{

    Employee shri, atharva, aaditya;
    // Count is static data variable

    shri.setData();
    shri.getData();
    Employee::getCount();

    atharva.setData();
    atharva.getData();
    Employee::getCount();

    aaditya.setData();
    aaditya.getData();
    Employee::getCount();

    return 0;
}

// static function is only accesees static variables.
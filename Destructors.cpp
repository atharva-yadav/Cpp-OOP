// ⭕ Destructors ⭕ //

// Never takes an arguments nor returns any value

#include <iostream>
using namespace std;

int count = 0; // Global variable
class num
{
public:
    num() // constructor
    {
        count++;
        cout << "This is time when constructor is called for object number " << count << endl;
    }
    ~num() // Destructor
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "\nInside Main function" << endl;
    cout << "Creating 2 objects" << endl;

    num n1;                                       // This block performs major role in this example
    {                                             // n2 & n3 gets destructed before n1 bcaz they are in block, whenever block exits destructor gets called
        cout << "Entering in this block" << endl; // but in case of n1 when main ends then destructor called
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
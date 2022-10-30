// 🟡⭕ ASCII VALUES : https://www.rapidtables.com/code/text/ascii-table.html ⭕🟡 //

// 🔺 Readiing & Writing in files 🔺//

/*
🔺 The useful classes for working with files -->
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase

🔺 In order to work with files we need to open it, 2 ways to open files -->
    1. Using constructor
    2. Using member function open() of the class
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //🔸1. Openiing a file using constructor and writing it 🔸//

    string s1 = "Shree";
    ofstream out("FileIO-1.txt"); // we made a 'out' object of fstream class (write operation)
    out << s1;                    // Writes "shree" in a FileIO.txt file


    //🔸1. Openiing a file using constructor and reading it 🔸//

    string s2;
    ifstream in("FileIO-2.txt"); // We made a 'in' object of ifstream class (read operation)
    // in>>s2; // Whole line & whitespaces can't be read by this
    getline(in, s2); // Whole line can be read by this function
    cout << s2;

    return 0;
}
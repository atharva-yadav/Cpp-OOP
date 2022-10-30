#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream out;                   // Made a object
    out.open("Files-open-eof.txt"); // Opening a file using open() function
    out << "This is Atharva\n";     // Writes in file
    out << "This is a Great !!!";
    out.close();

    ifstream in;
    string s1, s2;
    in.open("Files-open-eof.txt");
    // in>>s1>>s2;                  // Reading one by one word....🤯 to avoid this use eof()
    // cout<<s1<<s2;

    while (in.eof() == 0)
    {
        getline(in, s1); // String ka getline() hai ye.....
        cout << s1 << endl;
    }

    in.close();

    return 0;
}







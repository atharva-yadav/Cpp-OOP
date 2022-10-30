#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Connecting our file with get_out screen
    ofstream a_out("FilesReadWrite-1.txt");

    // Creating name string and filling it with the string entered by user
    string name;
    cout << "Enter your name " << endl;
    cin >> name;

    // Writing string to the file
    a_out << name <<" is my name"; // Writes in the file

    // Closing relation b/w file and user
    a_out.close();


    ifstream a_in("FilesReadWrite-1.txt");
    string content_from_file;
    // a_in>>content_from_file;
    getline(a_in, content_from_file);
    cout<<"The content of this file is: "<<content_from_file;

    a_in.close();

    return 0;
}
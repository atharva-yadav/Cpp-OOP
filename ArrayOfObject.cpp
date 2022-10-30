// Object Arrays 

#include<iostream>
using namespace std;

class Employee{

    int id;
    int salary;

    public:

    void setId(){
        salary=122;
        cout<<"Enter the Id"<<endl;
        cin>>id;
    }

    void getId(){

        cout<<"The id of this employee is "<<id<<endl;
    }

};

int main(){

    // Employee shri, atharva, aaditya, yadav;              //this is feasible when objects no. is limited

    // shri.setId();
    // shri.getId();
    
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}
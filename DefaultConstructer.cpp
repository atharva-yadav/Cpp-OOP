#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a, int b = 9, int c = 8){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData(){
            cout <<"Your data is "<<data1<<","<<data2<<" & "<<data3<<endl;
        }
};
int main(){

    Simple a(1,2,3);
    a.printData();

    Simple s(1,4);
    s.printData();

    Simple r(1);            // takes default value for b=9
    r.printData();

    
    return 0;
}
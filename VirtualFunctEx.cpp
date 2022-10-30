#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    char title[30];
    float rating;

public:
    CWH(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }
    virtual void display() {}
};

int main()
{

    return 0;
}
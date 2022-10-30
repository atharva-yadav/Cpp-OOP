#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit();
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 4%, 8% etc.
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r); // let principal=100....return val is 100*(1+0.04) = 100*1.04 = 104 rs
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // let principal=100....return val is 100 * (1+ (4.00/100)) = 104
    }
}

void BankDeposit ::show()
{
    cout << endl;
    cout << "Principal Amount was " << principal << endl
         << "Return value after " << years
         << " is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter values of principal, years and interest rate(r) " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter values of principal, years and interest rate(R) " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
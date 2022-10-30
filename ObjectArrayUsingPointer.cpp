#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[20];
    ShopItem *ptr = new ShopItem[size]; // In case of dynamic arrays pointer pointing to first block, we have to increment it for next values

    int p;
    float q;
    ShopItem *ptrTemp = ptr; // We are creating one copy for getData() function as setData() is at end position pointer

    /*
        1       2       3
                            ↑
                            |  (used for setData()....cant set pointer to initial position....so, ptrTemp is used to getData())
                           ptr
      PtrTemp                    
    */

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id & Price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nThe item no is " << i + 1 << endl;
        // (*ptrTemp).getData();
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}
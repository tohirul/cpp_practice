#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

  public:
    void initCounter(void) { counter = 0; }
    void getPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id for your item No " << counter + 1 << ": " << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id: " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop MiniDepo;
    MiniDepo.initCounter();
    MiniDepo.setPrice();
    MiniDepo.setPrice();
    MiniDepo.setPrice();

    MiniDepo.getPrice();
    return 0;
}
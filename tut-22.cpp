#include <iostream>
using namespace std;

class binary
{
    string s;

  public:
    void read(void);
    void chk_bin(void);
    void print(void) const { cout << "Binary Number: " << s << endl; }
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
};

void binary ::chk_bin(void)
{
    bool isBin = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary number." << endl;
            isBin = 0;
            break;
        }
    }
    if (isBin == 1)
        cout << "Valid binary number." << endl;
};

int main()
{
    cout << "Statement" << endl;

    binary bin;
    bin.read();
    bin.print();
    bin.chk_bin();

    return 0;
}
#include <iostream>
using namespace std;

class BankAccount
{
  private:
    string accountNumber;
    double balance;
    string holderName;

  public:
    BankAccount(string accNum, double initialBalance, string name)
    {
        accountNumber = accNum;
        balance       = initialBalance;
        holderName    = name;
    }

    // get account information
    double getBalance() const { return balance; }

    // method to deposit balance
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit of amount " << amount << "BDT successfully completed." << endl;
            cout << "Your current balance after deposit  is: " << balance << "BDT." << endl;
        }
        else
            cout << "Failed to deposit, invalid amount" << endl;
    }

    void withdraw(double amount)
    {
        if (amount >= balance)
            cout << "Withdraw amount exceeds minimum balance! Please decrease your withdrawal "
                    "amount."
                 << endl;
        else if (amount <= 0)
            cout << "Failed to withdraw, invalid amount" << endl;
        else
        {
            balance -= amount;
            cout << "You have successfully made an withdraw of amount " << amount << "BDT." << endl;
            cout << "Your current balance after withdrawal is: " << balance << "BDT." << endl;
        }
    }
};

int main()
{
    BankAccount  myAcc("4535-svv43324", 45000.00, "Tohirul Islam");
    double const balance = myAcc.getBalance();

    cout << "Balance: " << balance << endl;

    myAcc.deposit(6000.00);
    myAcc.withdraw(355.44);
    return 0;
}
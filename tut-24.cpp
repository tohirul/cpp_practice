#include <iostream>
using namespace std;

class Employee
{
    int        id;
    static int count;

  public:
    void setData(void)
    {
        cout << "Enter the employee id: " << endl;
        cin >> id;
        count++;
    }
    void        getData(void) { cout << id << endl; }
    static void getCount(void) { cout << "The value of count is: " << count << endl; }

  private:
};

int Employee ::count; // default value 0;

int main()
{
    return 0;
}
#include <cstring>
#include <iostream>
using namespace std;

struct employee
{
    int id;
    char name[100];
    double salary;
};

union currency
{
    int USD;
    int EUR;
    int BDT;
    int INR;
    int AUD;
};

int main() {

    struct employee Developer;
    Developer.id = 1223;
    strcpy(Developer.name, "Tohirul Islam");
    Developer.salary = 35000.00;

    cout << "Developer: "
    << endl;
     
    cout<< "ID: " << Developer.id << endl;
    cout << "Name: " << Developer.name << endl;
    cout << "Salary: " << Developer.salary << endl;

    cout << endl;
    struct employee Manager;
    Manager.id = 1133;
    strcpy(Manager.name, "Raisul Islam");
    Manager.salary = 56000.00;

    cout << "Manager: "
    << endl;

    cout << "ID: " << Manager.id << endl;
    cout << "Name: " << Manager.name << endl;
    cout << "Salary: " << Manager.salary << endl;

    return 0;
}
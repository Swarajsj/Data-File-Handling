#include <iostream>
#include <fstream>
using namespace std;
class employee
{
private:
    int emp_code;
    char name[20];
    int age;
    int id;
    int salary;

public:
    void read_data()
    {
        cout << "\n\n Enter the employee code\n";
        cin >> emp_code;
        cout << "\n\n Enter the name of the employee\n";
        cin >> name;
        cout << "\n\n Enter Age, ID, Salary\n";
        cin >> age >> id >> salary;
    }
    void show_data()
    {
        cout << "\n\n EMP code\n"
             << emp_code;
        cout << "\n\n Name of employee\n"
             << name;
        cout << "\n\n Age , ID , Salary\n"
             << age << "\t" << id << "\t" << salary;
    }
};
int main()
{
    fstream FILE;
    employee e;
    int no;
    FILE.open("employee.txt", ios::in | ios::binary);
    cout << "\n Enter the object whose record has to be saerching";
    cin >> no;
    int location = (no - 1) * sizeof(e);
    FILE.seekg(location);
    FILE.read((char *)&e, sizeof(e));
    e.show_data();
}
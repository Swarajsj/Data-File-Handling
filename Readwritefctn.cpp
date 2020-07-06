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
        cout << "\n\n Enter the employee code :";
        cin >> emp_code;
        cout << "\n\n Enter the name of the employee";
        cin >> name;
        cout << "\n\n Enter Age, ID, Salary :";
        cin >> age >> id >> salary;
    }
    void show_data()
    {
        cout << "\n\n EMP code :" << emp_code;
        cout << "\n\n Name of employee" << name;
        cout << "\n\n Age , ID , Salary :" << age << "\t" << id << "\t" << salary;
    }
};
int main()
{
    fstream FILE;
    employee e[3], d[3];
    int i;
    FILE.open("employee.txt", ios::out | ios::binary);
    cout << "\n Enter the datails of two employee\n";
    cout << "\n ---------------------------------------";
    for (i = 0; i < 3; i++)
    {
        e[i].read_data();
        FILE.write((char *)&e[i], sizeof(e[i]));
    }
    FILE.close();
    FILE.open("employee.txt", ios::in | ios::binary);
    for (i = 0; i < 3; i++)
    {
        FILE.read((char *)&d[i], sizeof(d[i]));
        d[i].show_data();
    }
    return 0;
}
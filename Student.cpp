#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age, roll, cgpa;
    cout << "enter name , age , roll ,cgpa";
    cin >> name >> age >> roll >> cgpa;
    ofstream ob;
    ob.open("Details.txt");
    ob << name << endl;
    ob << age << endl;
    ob << roll << endl;
    ob << cgpa;
    ob.close();
    ifstream inf;
    inf.open("Details.txt");
    inf >> name >> age >> roll >> cgpa;
    cout << "\n Name is :" << name;
    cout << "\n Age is :" << age;
    cout << "\n ROll no. is :" << roll;
    cout << "\n CGPA is :" << cgpa;
}
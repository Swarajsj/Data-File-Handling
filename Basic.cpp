#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char name[30];
    int age;
    ofstream outf("Swaraj"); // writing on file
    cout << "Enter Name :";
    cin >> name;
    outf << name;
    cout << "Enter Age :";
    cin >> age;
    outf << age << "\n";
    outf.close();

    ifstream inf("Swaraj"); // reading on file
    inf >> name;
    inf >> age;
    cout << "Item Name :" << name << endl;
    cout << " Item Age :" << age;
    inf.close();
}
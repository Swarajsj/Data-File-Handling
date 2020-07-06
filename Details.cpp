#include <fstream>
#include <iostream>
using namespace std;
class inventory
{
    int a, b;

public:
    void readdata()
    {
        cout << "Enter two values : \n";
        cin >> a >> b;
    }
    void writedata()
    {
        cout << "\n a=" << a << "\n b=" << b;
    }
};
int main()
{
    fstream file;
    inventory iobj;
    file.open("Stock.txt", ios::out | ios::binary);
    cout << "Enter details for items :";
    iobj.readdata();
    file.write((char *)&iobj, sizeof(iobj));
    file.close();
    file.open("Stock.txt", ios::in | ios::binary);
    file.read((char *)&iobj, sizeof(iobj));
    iobj.writedata();
    file.close();
}
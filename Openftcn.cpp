#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("Country");
    fout << "USA\n";
    fout << "Uk\n";
    fout << "INDIA\n";
    fout.close();

    fout.open("Capital");
    fout << "WASHINGTON\n";
    fout << "LONDON\n";
    fout << "NEW DELHI\n";
    fout.close();

    const int n = 80;
    char line[n];
    ifstream fin;
    fin.open("Country");
    cout << "\n Content of Country file";
    while (fin)
    {
        fin.getline(line, n);
        cout << "\n"
             << line << "\t";
    }
}
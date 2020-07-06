#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <process.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;
class hospital
{
    int id;
    char name[50];
    char dept[40];
    int exp;
    float fees;

public:
    hospital()
    {
        id = 0;
        name[0] = '\0';
        dept[0] = '\0';
        exp = 0;
        fees = 0.0;
    }

    void getdata();
    void showdata();
    char *ret_name()
    {
        return name;
    }
    char *ret_data()
    {
        return dept;
    }
    int ret_id()
    {
        return id;
    }
};
void hospital ::getdata()
{
    cout << "Enter Doctor Id :" << endl;
    cin >> id;
    cout << "Enter Doctor Name :" << endl;
    cin >> name;
    cout << "Enter The Depatment :" << endl;
    cin >> dept;
    cout << "Enter The Experience (in years):" << endl;
    cin >> exp;
    cout << "Enter The Fees :" << endl;
    cin >> fees;
}
void hospital ::showdata()
{
    cout << "Id Of The Doctor :" << id;
    cout << "\n Name :" << name;
    cout << "\n Department :" << dept;
    cout << "\n Experience (in years) :" << exp;
    cout << "\n Fees :" << fees;
}
class patient
{
    char day[20], day1[20], mon[20], mon1[20];
    int year, year1;
    char nameofdoc[20];
    int patid;
    int patname[20];
    int patfees;

public:
    patient()
    {
        patid = 0000;
        strcpy(nameofdoc, "null");
        strcpy(patname, "null");
        patfees = 00;
    }
    void enterpat()
    {
        cout << endl
             << "Enter Name of patient :";
        gets(patname);
        cout << "Enter patient id :";
        cin >> patid;
        cout << "Enter name of doctor :";
        cin >> nameofdoc;
        cout << "Enter fees of doctor :";
        cin >> patfees;
        cout << "Enter date of joining :";
        cout << "\n Enter day :";
        cin >> day;
        cout << "Enter month :";
        cin >> mon;
        cout << "Enter year :";
        cin >> year;
        cout << "Enter date of brith :";
        cout << "\n Enter day :";
        cin >> day1;
        cout << "Enter month :";
        cin >> mon1;
        cout << "Enter year :";
        cin >> year1;
    }
    void disppat()
    {
        cout << endl
             << "Name of patient :";
        puts(patname);
        cout << "\n Patient id :";
        cin >> patid;
        cout << "\n Name of doctor :";
        puts(nameofdoc);
        cout << "\n Fess of doctor :";
        cout << patfees;
        cout << "\n Date of joining :";
        cout << "\n Day :";
        cout << "\n Month :" << mon;
        cout << "\n Year :" << year;
        cout << "\n Date of birth :";
        cout << "\n day :";
        cin >> day1;
        cout << "\n Month :" << mon1;
        cout << "\n Year :" << year1;
    }
    char *nameofdoc1()
    {
        return nameofdoc;
    }
    int patid1()
    {
        return patid;
    }
    char *patname1()
    {
        return patname;
    }
} p;
class fix_app
{
    char pat_name[20];
    int pat_id;
    int day, year;
    char month[20];
    char doc_name[20];
    int doc_id;

public:
    fix_app()
    {
        pat_id = 00;
        doc_id = 00;
        day = 00;
        year = 00;
        strcpy(month, "null");
        strcpy()
    }
}
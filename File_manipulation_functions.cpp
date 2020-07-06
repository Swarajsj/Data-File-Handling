#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int pos;
fstream outfile;
outfile.open("Message.txt",ios::out|ios::in);
outfile<<"WELCOME";
cout<<"\n The current position of write pointer is:";
cout<<outfile.tellp();
cout<<"\n Enter the position to move:";
cin>>pos;
outfile.seekg(pos,ios::beg);
cout<<"\n The position of Get pointer is:";
cout<<outfile.tellg();
char ch=outfile.get();
cout<<"\n"<<ch;
outfile.seekp(pos,ios::beg);
outfile.put('%');
cout<<"\n Enter the position to move from current position:";
cin>>pos;
outfile.seekg(pos,ios::cur);
cout<<"\n The position of Get pointer is:";
cout<<outfile.tellg();
cout<<"\n Enter the position to move from end:";
cin>>pos;
outfile.seekg(-pos,ios::end);
cout<<"\n The position of Get pointer is:";
cout<<outfile.tellg()<<endl;
char ch1=outfile.get();
cout<<"\n"<<ch1;
return 0;

}

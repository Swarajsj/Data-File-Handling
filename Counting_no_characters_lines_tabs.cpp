#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
fstream s;
int lines=1,nospaces=0,notabs=0,nochars=0;
s.open("Lines.txt",ios::in);
char ch;
if(!s)
{
    cout<<"\n File could not be opened";
    exit(1);
}
s.get(ch);
while(s.eof()==0)
{
    if(ch=='\n')
        lines++;
    else if(ch==' ')
        nospaces++;
    else if(ch=='\t')
        notabs++;
        nochars++;
        s.get(ch);
}
cout<<"\n Lines:"<<lines<<" "<<"Spaces:";
cout<<nospaces<<" "<<"Tabs:"<<notabs<<" "<<"Charas:"<<nochars;
return 0;
}

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
clrscr();
ofstream fout("student",ios::out);
char name[30],ch;
float marks=0.0;

for(int i=0;i<5;i++)
{ cout<<"Student"<<(i+1)<<":   Name:";
   cin.get(name,30);
   cout<<"\t\tMarks:";
   cin>>marks;
   cin.get(ch);
   fout<<name<<'\n'<<marks<<'\n';
}

fout.close();
ifstream fin("student",ios::in);
fin.seekg(0);
cout<<"\n";

for(i=0;i<5;i++)
{ fin.get(name,30);
  fin.get(ch);
  fin>>marks;
  fin.get(ch);
  cout<<"Student Name: "<<name;
  cout<<"\t\tMarks:"<<marks<<"\n";
}
fin.close();
//return 0;
getch();
}

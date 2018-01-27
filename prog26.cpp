#include<iostream.h>
#include<conio.h>
#include<fstream.h>
struct stu
{
int rollno;
char name[25];
char Class[4];
float marks;
char grade;
}
s1;
void main()
{
clrscr();
int rn;
char found='n';
ifstream fin("stu.dat",ios::in);
cout<<"Enter rollno to be searched for:";
cin>>rn;
while(!fin.eof())
{
fin.read((char*)&s1,sizeof(s1));
if(s1.rollno==rn)
{
cout<<s1.name<<",rollno"<<rn<<"has"<<s1.marks<<"%marks and"<<s1.grade<<"grade."<<endl;
found='y';
break;
}
}
if(found=='n')
cout<<"Rollno not found in file!!"<<endl;
fin.close();
getch();
}

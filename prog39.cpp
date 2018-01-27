#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
struct STACK
{
int rollno,age;
STACK*next;
}
*top,*nptr,*ptr;
void pop()
{
if(!top)
{
cout<<"\nUnderflow!!";
exit(1);
}
else
{
cout<<'\n'<<top->rollno<<'\t'<<top->age;
ptr=top;
top=top->next;
delete ptr;
}
}
void push()
{
clrscr();
nptr=new STACK;
cout<<"\nEnter roll number and age to be inserted:";
cin>>nptr->rollno>>nptr->age;
nptr->next=NULL;
if(!top) top=nptr;
else
{
ptr->next=top;
top=nptr;
}
}

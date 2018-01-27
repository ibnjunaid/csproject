#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int push(int[],int &,int),pop(int[],int&);
const int size=40;
int top=-1,stack[size],ret_val,item;
void Push(),Pop(),display(int [],int);

int main()
{ system("cls");
  int choice=0;
  cout<<"Please choose from the following menu\nPRESS\n";
  cout<<"1.To Push an element to stack\t2.To Pop an element out of stack";
  cout<<"\nMy choice::";cin>>choice;
  switch(choice)
  {
    case 1: cout<<endl;
	    Push();
		  break;
    case 2: cout<<endl;
	    Pop();
		  break;
    default: cout<<"Wrong choice !!.ABROATING\n";
		  break;
  }
  getch();
  return 0;
}

//__________end of main________________
int push(int stack[],int &top,int val)
{
  if (top==size-1) {return (-1);}
  else
  {
    top++;
    stack[top]=val;
  }
  return 0;
}

int pop(int stack[],int &top)
{
  int to_ret;
  if (top==-1) {return (-1);}
  else
  {
    to_ret=stack[top];
    top--;
  }
  return to_ret;
}

void Push()
{
  char ch='y';
  while(ch=='y'||ch=='Y')
  {
    cout<<"Enter item for Insertion::";
    cin>>item;
    ret_val=push(stack,top,item);
    if (ret_val==-1)
    {
      cout<<"OverFlow!!\n";
      getch();
      exit(1);
    }
    cout<<"Do you want me to insert more Elements(Y/N)\nMy choice::";
    cin>>ch;
  }
  display(stack,top);
}

void Pop()
{
  char ch='y';
  while (ch=='y'||ch=='Y')
  {
    ret_val=pop(stack,top);
    if (ret_val==-1)
    {
      cout<<"UNDERFLOW!!Abroating::\n";
      getch();
      exit(-1);
    }
    else
    {
      cout<<"\nElement deleted is:"<<ret_val<<'\n';
    }
  }
}

void display(int stack[],int top)
{
  if (top==-1)
  {return;}

  cout<<"\n0utput::>"<<endl;

  for (int i=top;i>=0;i--)
      cout<<stack[i]<<endl;
}


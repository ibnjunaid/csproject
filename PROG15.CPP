#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//#include"myheader.hpp"

struct node
{
  int value;

  node *nextptr;
}*top,*newptr,*save,*ptr;

void push(node *),display(node*);
node *node_generator(int);
void Push(), Pop();

int main()
{ system("cls");
  clock_t start=clock();
  int choice;
  cout<<"Please choose for the follwoing menu\n ";
  cout<<"Press 1.To add element to a linear linked stack";
  cout<<"\n Press 2.To remove an element form a linear linked  stack\n";
  cout<<"My choice:";
  cin>>choice;
  switch(choice)
  {
    case 1: Push();
	    break;
    case 2: Pop();
	    break;
    default: cout<<"Wrong choice!!.Program will exit Now\n";
	    system("pause");
	    exit(0);
	    break;
  }

  cout<<"\n\nexecution time taken::"
  <<double(((clock()-start)/CLOCKS_PER_SEC))<<"seconds";
  getch();
  return 0;
}

void Push()
{
  int info; char choice ='y';
  top=NULL;
  while (choice=='y'||choice=='Y')
  {
    cout<<"Please enter the value of new Node";
    cout<<"\nValue::";cin>>info;
    newptr=node_generator(info);
    if (!newptr)
    {
      cout<<"New Node Cannot be generated ::Error  Abroting";exit(1);
    }
    push(newptr);
    cout<<"Do you want to enter more elements(Y/N)";
    cin>>choice;
  }
  display(top);
//possibly some code may be put there is future revisions
}
  void Pop()
  {
    char ch='y';
    while (ch=='y'||ch=='Y')
    {
      if (top==NULL){cout<<"UNDERFLOW";}
      else
      {
	ptr=top;
	top=top->nextptr;
	delete ptr;
      }
      cout<<"Do You want to delete more elements\n";
      cout<<"My choice";
      cin>>ch;
    }
  }

  void push(node *temp)
  {
    if (top==NULL) top=temp;
    else
    {
      save =top; top=temp;
      temp->nextptr=save;
    }
  }

  void display(node *temp)
  {
    while(temp!=NULL)
    {
      cout<<temp->value<<"->";
      temp=temp->nextptr;
    }
    cout<<'\n';
  }
  node *node_generator(int temp)
  {
    ptr =new node;
    ptr->value=temp;
    ptr->nextptr=NULL;
    return ptr;
  }

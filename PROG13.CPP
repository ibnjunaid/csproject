#include<iostream.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
  int value;
  node *nextptr;
}*save,*start,*newptr,*ptr;

node *node_generator(int );
void insert(node *),add(),show(node*),Delete(),Modify(),delnode();
int main()
{ system("cls");
  int choice;
  cout<<"Please choose from the following Menu\n";
  cout<<"1.To Insert an Element"<<"\t2.To delete an Element"<<"\t3.To Modify an element";
  cout<<"\nMy choice:";
  cin>>choice;
  switch(choice)
  {
    case 1: add();
	    break;
    case 2: Delete();
	    break;
    case 3: Modify();
	    break;
    default: cout<<"wrong choice .Exiting";
  }

  getch();

  return 0;

}

void add()
{
  int n_info;
  start=NULL;
  char ch='y';
  while (ch=='y'||ch=='Y')
  {
     cout<<" Enter information of the new Node";
     cout<<"\nMy value:";
     cin>>n_info;
     newptr=node_generator(n_info);
     if (!newptr)
     {
	 cout<<"Cannnot create new Node\n";
     }
     else
     {
	 cout<<"Node created Sucessfully\n";
	       insert(newptr);
     }
     cout<<"\nDo you want to insert new node Y/N";
     cout<<"\nMy choice:";
     cin>>ch;
   }

   char choice;
   cout<<"\nDo you want me show inserted node Y/N";
   cout<<"\nMy choice:";
   cin>>choice;
   if (choice=='y'||choice=='Y')
   {
       show(newptr);
   }
   else
       exit(0);
}

node *node_generator(int temp)
{
  ptr=new node;
  ptr->value=temp;
  ptr->nextptr=NULL;
  return ptr;
}

void insert (node *temp)
{
  if (start==NULL)
  {
    start=temp;
  }

  else
  {
    save=start;
    start=temp;
    temp->nextptr=save;
  }
}

void show(node *temp)
{
  while (temp!=NULL)
  {
    cout<<temp->value<<"->";
    temp=temp->nextptr;
  }

}
void Delete()
{ char ch='y';
  while(ch=='y'||ch=='Y')
  { delnode();
    cout<<"You list is now::";
    show(start);
    cout<<"\nDo you want to delete more Y/N";
    cin>>ch;
  }
}
void delnode()
{
 if (start==NULL)
 {
 cout<<"UNDERFLOW!!\n";
 getch();
 exit(0);
 }
 else
 {
 ptr=start;
 start=start->nextptr;
 delete ptr;
 }
}

void Modify()
{
cout<<"A bogus function dclared with no defination\n";
}
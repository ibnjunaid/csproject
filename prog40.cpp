#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

int Insert_in_CQ(int[],int);
void Display(int[],int,int)
int Del_in_CQ(int CQ[]);
const int size=7;
int CQ[size],front=-1,rear=-1;

int main()
{
clrscr();
int Item,res,ch;
do{ cout<<"\t\tCircular Queue Menu\n:";
     cout<<"\t1.Insert\n";
     cout<<"\t2.Delete\n";
     cout<<"\t3.Display\n";
     cout<<"\t4.Exit\n";
     cout<<"Enter your choice:";
     cin>>ch;
     switch(ch)
     {
       case 1:cout<<"\nEnter ITEM for insertion:";
      cin>>Item;
      res=Insert_in_CQ(CQ,Item);
      if (res==-1)
       cout<<"Overflow!";
      else
      { cout<<"\nNow the Circle Queue is:\n";
Display(CQ,front,rear);
      }
      system("pause");
      break;

       case 2:Item=Del_in_CQ(CQ);
      cout<<"Element deleted is:"<<Item<<endl;
      Display(CQ,front,rear);
      system("pause");
      break;

       case 3:Display(CQ,front,rear);
      system("pause");
      break;

       case 4:break;
       default:cout<<"Valid choices are 1...4 only\n";
       system("pause");
       break;
     }
   }while(ch!=4);
    return 0;
}

int Insert_in_CQ(int CQ[], int ele)
{  if((front==0 && rear==size-1) || (front==rear+1))
      return-1;
   else if(rear==-1)
     front=rear=0;
   else if(rear==size-1)
     rear=0;
   else
     rear++;
   CQ[rear]=ele;
   return 0;
}

void Display(int CQ[], int front, int rear)
{ int i=0;
  cout<<"\n Cir_Queue is:\n"<<"(Front shown as >>>, Rear as <<< AND free space as-)\n";
  if(front==-1)
    return;
  if(rear>=front)
  {
    for(i=0;i<front;i++)
      cout<<"-";
      cout<<">>>";
    for(i=0;i<rear;i++)
      cout<<CQ[i]<<"<-";
      cout<<CQ[rear]<<"<<<"<<endl;
  }
  else
  {
   for(i=0;i<rear;i++)
     cout<<CQ[i]<<"<-";
     cout<<CQ[rear]<<"<<<";
   for(i=0;i<front;i++)
     cout<<"-";
     cout<<">>>";
   for(i=front;i<size;i++)
     cout<<CQ[i]<<"<-";
     cout<<"\t...wrap around...";
  }
}

int Del_in_CQ(int CQ[])
{
  int ret;
  if(front==-1)
    return-1;
  else
  {
   ret=CQ[front];
   if(front==rear)
     front=rear=-1;

   else if(front==size-1)
     front=0;
   else front++;
  }
  return ret;
}

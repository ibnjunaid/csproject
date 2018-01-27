#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int*Val,*Rsum,*Csum;
int MaxR,MaxC,i,j;
cout<<"Enter dimensions (row & column):";
cin>>MaxR>>MaxC;
Val=new int[MaxR*MaxC];
Rsum=new int[MaxR];
Csum=new int[MaxC];

for(i=0;i<MaxR;i++)
{
   cout<<"\nEnter elements of row"<<(i+1)<<":";
   Rsum[i]=0;
   for(j=0;j<MaxC;j++)
   { cin>>Val[i*MaxC+j];
     Rsum[i]+=Val[i*MaxC+j];
   }
}

for(j=0;j<MaxC;j++)
{
   Csum[j]=0;
   for(i=0;i<MaxR;i++)
   { Csum[j]+=Val[i*MaxC+j]; }
}

cout<<"\nThe given array along with Rowsum and Column-sum is:\n";
for(i=0;i<MaxR;i++)
{ for(j=0;j<MaxC;j++)
    { cout<<Val[i*MaxC+j]<<'\t'; }
   cout<<Rsum[i]<<endl;
}

for(j=0;j<MaxC;j++)
  { cout<<Csum[j]<<'\t'; }
cout<<endl;

getch();
}

//#include<iostream.h>
//#include<stdlib.h>
#include<iostream>
using namespace std;
void showarr(int *ptr,int row,int column);
void swaparr(int *ptr,int row,int column);

int main()
{
  int row,column;
  cout<<"How many Rows in your matrix::";
  cin>>row;
  cout<<"how many columns in your matrix::";
  cin>>column;
  int *arrptr=new int[row*column];
  for (int i=0;i<row;i++)
  {
    for (int j=0;j<column;j++)
    {
      cout<<"Enter Element @ "<<i+1<<'.'<<j+1<<"::";
      cin>>arrptr[i*column+j];
    }
  }
  cout<<"Your Entered Matrix is ::\n";
  showarr(arrptr,row,column);
  cout<<"\nMatrix After flipping 1st and last row is ::\n";
  swaparr(arrptr,row,column);
  showarr(arrptr,row,column);

  return 0;
}

void swaparr(int *ptr,int row,int column)
{
  int *tptr=new int[column];

  for (int j=0;j<column;j++)
  {
    tptr[j]=ptr[0*column+j];
    (ptr[0*column+j])=ptr[((row-1)*column)+j];
    ptr[(row-1)*column+j]=tptr[j];
  }
 }


void showarr(int *ptr,int row,int column)
{
  for (int i=0;i<row;i++)
  {
    for (int j=0;j<column;j++)
    {
      cout<<ptr[i*column+j];
      cout<<'\t';
    }
    cout<<'\n';
  }
}

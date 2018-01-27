//#include<iostream.h>
//#include<conio.h>
#include<iostream>

using namespace std;

void Matshow(int *ptr,int row,int column)
{
	int rpd=1;

	for (int i=0;i<row;i++)
	{	rpd=1;

		for (int j=0;j<column;j++)
		{
			rpd*=ptr[i*column+j];

			cout<<'\t';

		}
		cout<<rpd;

	}
}

int main()

{	int row,column=0;

	cout<<"Please enter how many rows::";
	
	cin>>row;
	
	cout<<"Please enter how many columns::";
	
	cin>>column;
	
	int *matptr=new int[row*column];
	
	for(int i=0;i<row;i++)
	{
		for (int j=0;j<column;j++)
		{
			cout<<"Please enter element @"<<i+1<<','<<j+1;

			cin>>matptr[i*column+j];
		}
	}
		
	Matshow(matptr,row,column);
	
	return 0;
}




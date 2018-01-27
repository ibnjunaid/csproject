//DISCLAMER :YOUR ARRAY NEEDS TO BE SORTED IN ORDER TO WORK THIS PROGRAM
//UNSORTED ARRAY WILL BE TREATED AS GARBAGE INPUT AND HENCE AUTHOR WILL BE RESPONSIBLE FOR

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int main()
{       clrscr();

	int arr[50],lsearch(int[],int,int),bsearch(int[],int,int);

	int size,choice,search_element;

	cout<<"please enter number of elements (max 50) ";

	cin>>size;

	for(int i=0;i<size;i++)

		{
			cout<<"Please enter element"<<i+1<<"::";
			cin>>arr[i];

		}

	cout<<"please enter the element you want to search in the array::";

	cin>>search_element;

	cout<<"please choose from the following menu\n";
	cout<<"Please press\n";
	cout<<"1.For using linear search";
	cout<<"\t2.For using binary search\n";
	cin>>choice;

	if (choice ==1)
	{

		int tempo=lsearch(arr,size,search_element);
		if (tempo==-1)
		{
			cout<<tempo;
		       //	cout<<"Sorry !! the give element couldn\'nt be found";
		}
		else
			cout<<"The element found is found at position::"<<tempo+1;
	}
	if (choice==2)
	{
	  int tempo =bsearch(arr,size,search_element);
	  if (tempo!=-1)
	  {
		cout<<"element is found at position::"<<tempo+1;
	  }
	  else
	  {
	  cout<<"Sorry!! The given element coludnt be found";
	  }
	}

    getch();

    return 0;
}

int lsearch(int arr[],int size,int search_element)
{
	for(int i=0;i<size;i++)
	{

		if (search_element==arr[i])
		   {
		   return (i);
		   }
		else
		{
			if (i==size-1)
			{return (-1);}
			else
			continue;
		}
}

}

int bsearch(int arr[],int size,int search_element)
{
	int beg=0,last=size-1,mid;

	while(beg<=last)
	{
		mid=(beg+last)/2;

		if (search_element=arr[mid]){return(mid+1);}

		else
				{if (search_element>arr[mid])
					   beg=mid-1;
				else
						last=mid-1;
				}
	return (-1);

	}

}

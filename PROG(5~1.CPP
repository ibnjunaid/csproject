#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	system("cls");

	long sum_of_series=0;

	int x,n;

	cout<<"please enter the value of \"x\" given in the series::";

	cin>>x;

	cout<<"\nplease enter the value of \"n\" given in the series::\n";

	cin>>n;

	for(int i=1;i<=n;i++)
	{
		sum_of_series+=(pow(x,n)/2*n);

	}

	sum_of_series+=1;

	cout<<"Sum of the given series is "<<sum_of_series<<"\n";

	cout<<"\nProgram Over .";system("pause");

	return 0;

}


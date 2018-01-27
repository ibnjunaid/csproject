#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

float fact(int );

int main()
{
 system("cls");
 int x,n;
 float sum=0;
 cout<<"Please enter the value for x::";
 cin>>x;
 cout<<"Number of terms in series::";
 cin>>n;
 for(int i=0;i<=n;i++)
 {
   sum+=(pow(x,i)/(fact(i)));
 }
 cout<<"The sum of the Seres is"<<sum;
 getch();
}

float fact(int i)       //this dfunction retuns factorial
{
   float product=1;
   for (i;i>=1;i--)
   {
     product*=i;
   }
   return (product);
}

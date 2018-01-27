#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float area(float a,float b,float c)
{  float s,ar;
   s=(a+b+c)/2;
   ar=sqrt(s*(s-a)*(s-b)*(s-c));
   return ar;
}
float area(float a,float b)
{
   return a*b;
}

float area(float a)
{
   return a*a;
}

void main()
{
    clrscr();
    int choice,s1,s2,s3,ar;

     cout<<"\nMain Menu:-\n";
     cout<<"1.Triangle\n";
     cout<<"2.Rectangle\n";
     cout<<"3.Square\n";
     cout<<"4.Exit\n";
     cout<<"Enter your choice (1-4)-->";
     cin>>choice;

     switch(choice)
     {
       case 1: cout<<"\nYou chose Triangle!\n";
       cout<<"Enter 3 sides:\n";
       cin>>s1>>s2>>s3;
       ar=area(s1,s2,s3);
       cout<<"Area= "<<ar<<" sq cm";
       break;

       case 2: cout<<"\nYou chose Rectangle!\n";
       cout<<"Enter length and breadth:\n";
       cin>>s1>>s2;
       ar=area(s1,s2);
       cout<<"Area= "<<ar<<" sq cm";
       break;

       case 3: cout<<"\nYou chose Square!\n";
       cout<<"Enter a side:\n";
       cin>>s1;
       ar=area(s1);
       cout<<"Area= "<<ar<<" sq cm";
       break;

       case 4: break;
       default:cout<<"WRONG CHOICE!\n";
     };
  getch();
}

#include<iostream.h>
#include<conio.h>

class data
{
int a,b;
public:
   void get();
   friend data sum(data,data);
   void show();
};
data sum(data a1,data a2)
{
  data a3;
  a3.a=a1.a+a2.a;
  a3.b=a1.b+a2.b;
  return a3;
}

void main()
{
  clrscr();
  data a,b,c;
  a.get();
  b.get();
  c=sum(a,b);
  c.show();
  getch();
}

void data::get()
{
  cout<<"\nPlease enter for A:->";
  cin>>a;
  cout<<"Please enter for B:->";
  cin>>b;
}

void data::show()
{
  cout<<"A= "<<a<<endl;
  cout<<"B= "<<b<<endl;
}

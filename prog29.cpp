#include<iostream.h>
#include<conio.h>
class Time
{
short int hh,mm,ss;
public:
Time()
{
hh=mm=ss=0;
}
void getdata(int i,int j, int k)
{
hh=i;
mm=j;
ss=k;
}
void prntdata(void)
{
cout<<"\nTime is"<<hh<<":"<<mm<<":"<<ss<<"\n";
}
};
void main()
{
clrscr();
Time T1,*tp;
cout<<"Initializing data members using the object,with values 12,22,10\n";
T1.getdata(12,22,10);
cout<<"Printing members using the object";
T1.prndata();
tp=&T1;
cout<<"Printing members using the object pointer";
tp->prndata();
cout<<"Intializing data membrs using the object pointer,"<<"with values 15,10,17\n";
tp->getdata(15,10,17);
cout<<"Printing members using the object";
T1->prndata();
cout<<"Printing members using the object pointer";
tp->prndata();
getch();
}

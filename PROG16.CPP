#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

struct date
{
  int hh,mm,sec;
}time_clock,*time_clock_ptr;

void clock_set(date *temp);

void clock_show(date *temp);

int main()
{
clock_t start=clock();
system("cls");

  time_clock_ptr=&time_clock;

  clock_set(time_clock_ptr);

  clock_show(time_clock_ptr);

  cout<<"\n\n\t execution time ::"<<((clock()-start)/CLOCKS_PER_SEC)<<"sec";

  getch();
}

void clock_set(date *temp)
{
  cout<<"How many hours it is::";
  cin>>temp->hh;
  cout<<"\nHow many Minutes::";
  cin>>temp->mm;
  cout<<"\nHow many Seconds::";
  cin>>temp->sec;
}
void clock_show(date *temp)
{
cout<<"\nTime is "<<temp->hh<<"Hrs::"<<temp->mm<<"minutes::"<<temp->sec<<"seconds";
}

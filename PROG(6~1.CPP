//comments:error in assignment
//solved in rev2.5
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int usd_rate=63.66;

class money
{
    int usd,inr;

public:

    void getdata()
    {
      cout<<"Please enter the amount(USD only)::";

      cin>>usd;

    }

    void putdata()
    {
      cout<<"\nEntered amount is ::"<<usd<<"USD\n";

      cout<<"\nConverted value is ::"<<inr<<"INR\n";

    }

    money converter(money m1)
    {
      money m2;

      m2.usd=usd;

      m2.inr=usd*usd_rate;

      return (m2);

    }
  };

//________________________start of main()

  int main()

  { clrscr();

    money x,y;

    x.getdata();

    y=x.converter(x);

    y.putdata();

    getch();

  }

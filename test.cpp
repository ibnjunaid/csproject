#include<iostream>
//#include<conio.h>
#include<cstdio>
using namespace std;

typedef char* string;
class employee
{
  public:
    int num ;
    string depart,address;
    void input()
    {
       cout<<"Enter the employee's name::";
       cin>>name;
       cout<<"\nEnter the employee number::";
       cin>>num;
       cout<<"\nEnter the address(NO Space seprated by comma)::";
       cin>>address
       cout<<"\nenter your department name::";
       cin>>depart;
     }

     void output()
     {
       cout<<"\nEmployee's infomation:";
       cout<<"Name::"<<name;
       cout<<"\nAddress::"<<address;
       cout<<"\nDepartment::"<<depart;
     }
};

class manager: public employee
{
  string name;
  int no_of_emply;

  public:
  void getdata()
  {
    cout<<"Enter the manager's name::";
    cin>>name;
    puts("Enter the total number of employee's working under Manager");
    cin>>no_of_emply;
  }
  void getinfo();
  void showinfo();
};

  void manager::info()
  {
    getdata();
    for(int i=1;i<=no_of_emply;i++)
    {
      cout<<"Enter Details for Employee"<<i+1;
      input();
    }
  }
  void manager::showinfo()
  {

    for(i=1;i<=no_of_emply;i++)
    {
      cout<<"Detail of "<<"employee"<<i+1<<'\n';
      output();
    }
  }
int main()
{
  class manager M;
  //clrscr();
  M.getinfo();
  M.showinfo();
//  getch();
}

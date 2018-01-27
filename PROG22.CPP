#include<iostream.h>
#include<conio.h>
#include<stdio.h>
typedef char* string;
class employee
{
  public:
    int num ;
    string name,depart,address;
    void input()
    {
       cout<<"Enter the employee's name::";
       gets(name);
       cout<<"\nEnter the employee number::";
       cin>>num;
       cout<<"\nEnter the address(NO Space seprated by comma)::";
       gets(address);
       cout<<"\nenter your department name::";
       gets(depart);
     }

     void output()
     {
       cout<<"\nEmployee's infomation:";
       cout<<"Name::";puts(name);
       cout<<"\nAddress::";puts(address);
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

  void manager::getinfo()
  {
    getdata();
    for(int i=0;i<no_of_emply;i++)
    {
      cout<<"Enter Details for Employee"<<i+1<<"\n";
      input();
    }
  }
  void manager::showinfo()
  {

    for(int i=0;i<no_of_emply;i++)
    {
      cout<<"Detail of "<<"employee"<<i+1<<'\n';
      output();
    }
    if (i==no_of_emply){getch();exit(0);}
  }
int main()
{
  manager M;
  clrscr();
  M.getinfo();
  M.showinfo();
  getch();
  return 0;
}

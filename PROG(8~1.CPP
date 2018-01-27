#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>

typedef char* string;

class student
{

public:

  string stu_name,f_name,stu_addr,grade,stu_id;

  void getdata();

};

void student::getdata()
{
  cout << "Please enter Your student ID::";

  gets(stu_id);

  cout<<"\nPlease enter your name::";

  gets(stu_name);

  cout<<"\nPlease enter your father\'s name::";

  gets(f_name);

  cout<<"\nPlease enter your Address:: ";

  gets(stu_addr);

  cout<<"\nPlease enter your grade::";

  cin>>grade;
}

//_____________________start of main()

int main()
{ clrscr();
  ofstream fout;
  fout.open("student.txt",ios::out);

  int choice =1;
  do
  {
    cout << "Please Choose from the folowing menu" << '\n';

    cout<<"press 1.To add a record \n";
    cout<<"press 2.To delete a record\n";
    cout<<"press 3.To modify a record\n";
    cout<<"press 4. If you executed a wrong program\n";
    cin>>choice;
  }
  while((choice<1)||(choice>3));

if(choice ==4)
{
  return 0;
}
  switch (choice)
  {
    case 1:
	    break;

    case 2: cout<<"delete_record()";
	    break;

    case 3: cout<<"modify_record()";
	    break;

    default: break;                   //accorrding to logic this line never gonna execute

  }

  getch();                         //dont  get confuse here ,getch() is only used to hold the user scrren

  return 0;

}

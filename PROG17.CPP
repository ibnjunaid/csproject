#include<iostream.h>
#include<stdlib.h>
#include<ctype.h>

void case_changer(char ch);

int main()
{
  system("cls");
  char ch;
  do
  {
    cout<<"\nPlease enter any Character(press any number to exit.)::";
    cin>>ch;
    case_changer(ch);
  }

  while(isalpha(ch));

  system("pause");

  return 0;
}

void case_changer(char ch)
{
    if (isupper(ch))
    { cout<<"\nGive is a Uppercase letter::"<<ch;

      cout<<"\nlowercase of"<<ch<< "is "<<char(tolower(ch));
    }
    if (islower(ch))
    {
      cout<<"Give is a lower case letter::"<<ch;

      cout<<"\nUpper case of"<<ch<< "is "<<char(toupper(ch));
    }
}

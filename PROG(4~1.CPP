#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef char string[100];

char *concate(char str1[],char str2[])
{ string temp;
  strcpy(temp,str1);
  strcat(temp,str2);
  return(temp);
}
int main()
{
clrscr();

string str1;

string str2;

cout<<"please enter the first string ::";

cin.getline(str1,100);

cout<<"\nplease enter the second string ::";

cin.getline(str2,100);

char *outstr=concate(str1,str2);

cout<<"\nConcatnated string is::"<<outstr;

getch();

return 0;

}


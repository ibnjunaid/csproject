#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

char *names[]={"Yamini", "Shweta", "Juhi","Pargati","Parul"};

int main()
{
clrscr();

for (int i=4;i>-1;i--)
{

  cout.write(names[i],strlen(names[i])).put('\n');

}
getch();
return 0;
}

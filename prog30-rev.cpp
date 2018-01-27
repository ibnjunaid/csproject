#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void * reverse(char * str)
{
  int i,len;
  len=strlen(str);
  for(i=len;i>=0;i--)
    printf("%c", *(str+i));
}

int main(void)
{
  clrscr();
  char a[43];
  cin.getline(a,40);
  reverse (a);
  getch();
}

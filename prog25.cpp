#include<iostream.h>
#include<conio.h>
char*match(char,char*);
void main()
{
char string[80],*cp,ch;
cout<<"Enter a string(Max.80 characters).\n";
cin.getline(string,80);
cout<<"Enter a character to be searched for\n";
cin>>ch;
cp=NULL;
cp=match(ch,string);
if(*cp)
{
cout<<"\n";
for(;(*CP!='\0');cp++)
cout<<*cp;
}
else
cout<<"No match found!\n";
cout<<"\n";
getch();
}
char*match(char c,char*s)
{
while( (c!=*s)&&(*s))
s++;
return(s);
}

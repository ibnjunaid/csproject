#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{       system("cls");

	ifstream fin;

	char ch;int counter =0;

	fin.open("student.txt",ios::in);

	if(!fin)
	{
		cout<<"cannot open file\n";

		system("pause");

		return 1;
	}
	while(fin)
	{
		fin.get(ch);

		if((ch>='A'||ch<='Z')||(ch>='a'||ch<='z'))

		{
			counter++;

		}
	}

	cout<<"the total number of alphabets present in the file is" <<counter;

	fin.close();
	cout<<"\n";
	system("pause");

	return 0;
}


#include<iostream.h>
#include<conio.h>

void mat_sub(),mat_mul(),mat_add();

int matrix1[50][50],matrix2[50][50],i,j=0;

int row1,column1,row2,column2=0;

int main()

{

clrscr();

cout<<"Number of rows in matrix 1::\n";

cin>>row1;

cout<<"Number of columns in matrix 2::\n";

cin>>column1;

for (i=0;i<row1;i++)
{
   for(j=0;j<column1;j++)
   {
	  cout<<"\nEnter element @ Position"<<i+1<<',' <<j+1;
	  cin>>matrix1[i][j];
   }

}
cout<<"\tMAtrix1 Input completed " ;
cout<<"\nNumber of rows in matrix2";
cin>>row2;
cout<<"\nNumber of columns in matrix2";
cin>>column2;
for (i=0;i<row2;i++)
{
   for(j=0;j<column2;j++)
   {
	  cout<<"Enter element @ Position"<<i+1<<',' <<j+1<<'\n';
	  cin>>matrix2[i][j];
   }

}
cout<<"\nPlease choose from the following menu";
cout<<"\t1.For matrix Subtraction\n";
cout<<"\t2.For matrix Addition\n";
cout<<"\t3.For matrix Multiplication";
int choice;
cin>>choice;
switch(choice)
{
case 1: mat_sub();
	break;
case 2: mat_add();
	break;
case 3: mat_mul();
	break;
default: cout<<"WrOng choice .Exiting!!";
}

getch();

return 0;

}
void mat_sub()
{
 if (row1!=row2||column1!=column2)
 {cout<<"Matrix with diffrent dimensions cant be Subtracted";
 }
 else
 {
 for (i=0;i<row1;i++)
 {
   for(j=0;j<column1;j++)
   {
      cout<<((matrix1[i][j])-(matrix2[i][j]))<<'\t';
   }
   cout<<'\n';
 }
}

void mat_add()
{      ;
 if (row1!=row2||column1!=column2)
 {
   cout<<"Matrix with different dimensions cant be Added";
 }
 else
 {
 for (i=0;i<row1;i++)
  {
     for(j=0;j<column1;j++)
      {
	 cout<< (matrix1[i][j])+(matrix2[i][j])<<'\t';
      }

     cout<<'\n';
  }
 }
}

void mat_mul()
{
 for (i=0;i<row1;i++)
 {
   for(j=0;j<column1;j++)
   {
	 cout<<matrix1[i][j]*matrix2[j][i]<<'\t';
   }
 cout<<'\n';
 }
}
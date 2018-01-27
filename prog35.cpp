class resort
{
int rno;
char name[80];
float charges;
int days;
float compute()
{
float amount;

if (amount>11000)
amount=days*charges*1.02;
else
amount=days*charges;
return amount;
}
public:
void getinfo()
{
cout<<"enter details";
cin>>rno>>name>>charges>>days;
float x;
x=compute();
}
void dispinfo()
{
cout<<"the details are";
cout<<rno<<name<<charges<<days;
cout<<x;
}

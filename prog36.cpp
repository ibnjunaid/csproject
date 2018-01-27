class garments
{
char GCode[100];
char Gtype[100];
char GFabric[100];
int GSize;
float GPrice;
void assign()
{ if (GFabric=="cotton";
  (
    if(Gtype==trouser)
        GPrice=1300;
     elseGType==shirt;
      GPrice=1100;
    )
   else
  {if(GType==trouser&&GFabric!="cotton")
      GPrice=1270
    else
GPrice=990;
}
public:
garments()
{
GCode=1001;
Gtype="cotton";
GFabric="not alloted";
GSize=0;GPrice=0;
}
void input()
{
cout<<"enter details";
cin>>GCode>>GType>>GSize>>GFabric;
assign();
}
void display()
{
cout<<"the details are";
cout<<GCode<<GType<<GSize<<GFabric;
}

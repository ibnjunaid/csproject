#include<iostream.h>
#include<conio.h>
void COPYABC()
{
  ifstream fin("TELEPHONE.DAT",ios::in/ios::binary);
  ofstream fout("TELEPHONE.DAT",ios::out/ios::binary);
  Directory ph;
  while(!fin.eof())
  {   fin.read((char*)&ph, sizeof(ph));
      if(ph.checkcode("123")==0)
fout.write((char*)&ph,sizeof(ph));
  }
  fin.close();
  fout.close();
  getch();
}

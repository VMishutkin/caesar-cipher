#include "cesare.h"
AnsiString FuncCesareCode(AnsiString tocode,int n)
{//AnsiString tocode;
 //,n;
  //tocode=Edit1->Text;
//n=ComboBox1->ItemIndex;

  for (int i = 1;i<=tocode.Length();i++)
{
   int T = (((unsigned char)tocode[i] + n))%255;//
   // if (T >= 256) T=T-255;
        tocode[ i ] = (char)T;
}
 // Edit2->Text = tocode;
 return tocode;
}
AnsiString FuncCesareDecode(AnsiString todecode,int n)
{
//AnsiString todecode;
//int T,n;

 //todecode=Edit2->Text;
 //n=ComboBox1->ItemIndex;
 for (int i=1;i<=todecode.Length();i++)
 {
  int  T =( (unsigned char)todecode[ i ] - n);
    if (T <= 0)  T=T+255;
    todecode[ i ] = (char) T;
      }
    return todecode;
}


//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) //רטפנףול
{
AnsiString tocode;
 int T,n;
  tocode=Edit1->Text;
n=ComboBox1->ItemIndex;
  for (int i = 1;i<=tocode.Length();i++)
{
    T = (((unsigned char)tocode[i] + n))%255;//
   // if (T >= 256) T=T-255;
        tocode[ i ] = (char)T;
}
  Edit2->Text = tocode;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)  //נאסרטפנמגûגאול
{

AnsiString todecode;
int T,n;

 todecode=Edit2->Text;
 n=ComboBox1->ItemIndex;
 for (int i=1;i<=todecode.Length();i++)
 {
    T =( (unsigned char)todecode[ i ] - n);
    if (T <= 0)  T=T+255;
    todecode[ i ] = (char) T;
      }
  Edit3->Text = todecode;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)   //קטסעטל
{
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();

}
//---------------------------------------------------------------------------

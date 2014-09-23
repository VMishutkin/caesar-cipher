//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "cesare.h"
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
Edit2->Text=FuncCesareCode(Edit1->Text,ComboBox1->ItemIndex);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)  //נאסרטפנמגûגאול
{


  Edit3->Text =  FuncCesareDecode(Edit2->Text,ComboBox1->ItemIndex);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)   //קטסעטל
{

Edit1->Clear();
Edit2->Clear();
Edit3->Clear();

}
//---------------------------------------------------------------------------

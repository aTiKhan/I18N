//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BaseFrm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBaseForm *BaseForm;
//---------------------------------------------------------------------------
__fastcall TBaseForm::TBaseForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

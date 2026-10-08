TESWaterForm *__thiscall TESWaterForm::`scalar deleting destructor'(TESWaterForm *this, char a2)
{
  TESWaterForm::~TESWaterForm(this); /*0x4eddc3*/
  if ( (a2 & 1) != 0 ) /*0x4eddcd*/
    FormHeapFree((unsigned int)this); /*0x4eddd0*/
  return this; /*0x4eddda*/
}

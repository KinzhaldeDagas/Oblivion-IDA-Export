TESWaterForm *__thiscall TESWaterForm::`scalar deleting destructor'(TESWaterForm *this, char a2)
{
  TESWaterForm::~TESWaterForm(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

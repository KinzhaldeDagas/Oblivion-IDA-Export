TESForm *__thiscall TESGrass::`scalar deleting destructor'(TESForm *this, char a2)
{
  TESGrass::~TESGrass(this); /*0x4af403*/
  if ( (a2 & 1) != 0 ) /*0x4af40d*/
    FormHeapFree((unsigned int)this); /*0x4af410*/
  return this; /*0x4af41a*/
}

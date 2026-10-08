TESForm *__thiscall TESForm_VDdestr(TESForm *this, char a2)
{
  TESForm_destr(this); /*0x46c623*/
  if ( (a2 & 1) != 0 ) /*0x46c62d*/
    FormHeapFree((unsigned int)this); /*0x46c630*/
  return this; /*0x46c63a*/
}

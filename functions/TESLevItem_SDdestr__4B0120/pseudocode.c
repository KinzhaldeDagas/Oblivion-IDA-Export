TESForm *__thiscall TESLevItem_SDdestr(TESForm *this, char a2)
{
  TESLevItem_destr(this); /*0x4b0123*/
  if ( (a2 & 1) != 0 ) /*0x4b012d*/
    FormHeapFree((unsigned int)this); /*0x4b0130*/
  return this; /*0x4b013a*/
}

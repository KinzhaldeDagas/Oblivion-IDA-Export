TESClimate *__thiscall TESClimate::`scalar deleting destructor'(TESClimate *this, char a2)
{
  TESClimate_dtor(this); /*0x4bec13*/
  if ( (a2 & 1) != 0 ) /*0x4bec1d*/
    FormHeapFree((unsigned int)this); /*0x4bec20*/
  return this; /*0x4bec2a*/
}

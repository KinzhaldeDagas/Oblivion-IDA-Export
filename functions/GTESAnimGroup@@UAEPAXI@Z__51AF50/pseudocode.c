TESAnimGroup *__thiscall TESAnimGroup::`scalar deleting destructor'(TESAnimGroup *this, char a2)
{
  TESAnimGroup_destructor(this); /*0x51af53*/
  if ( (a2 & 1) != 0 ) /*0x51af5d*/
    FormHeapFree((unsigned int)this); /*0x51af60*/
  return this; /*0x51af6a*/
}

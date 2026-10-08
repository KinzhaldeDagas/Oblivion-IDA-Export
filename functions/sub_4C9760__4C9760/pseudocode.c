TESForm *__thiscall sub_4C9760(TESForm *this, char a2)
{
  sub_4C9490(this); /*0x4c9763*/
  if ( (a2 & 1) != 0 ) /*0x4c976d*/
    FormHeapFree((unsigned int)this); /*0x4c9770*/
  return this; /*0x4c977a*/
}

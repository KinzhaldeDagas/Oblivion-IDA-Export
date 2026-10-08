TESForm *__thiscall sub_65AB20(TESForm *this, char a2)
{
  MobileObject_destr(this); /*0x65ab23*/
  if ( (a2 & 1) != 0 ) /*0x65ab2d*/
    FormHeapFree((unsigned int)this); /*0x65ab30*/
  return this; /*0x65ab3a*/
}

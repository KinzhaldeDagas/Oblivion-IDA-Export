ExtraHavok *__thiscall ExtraHavok::`scalar deleting destructor'(ExtraHavok *this, char a2)
{
  ExtraHavok::~ExtraHavok(this); /*0x41de13*/
  if ( (a2 & 1) != 0 ) /*0x41de1d*/
    FormHeapFree((unsigned int)this); /*0x41de20*/
  return this; /*0x41de2a*/
}

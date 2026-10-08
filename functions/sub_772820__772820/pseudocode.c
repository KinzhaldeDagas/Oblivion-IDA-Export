unsigned int *__thiscall sub_772820(unsigned int *this, char a2)
{
  sub_772840(this); /*0x772823*/
  if ( (a2 & 1) != 0 ) /*0x77282d*/
    FormHeapFree((unsigned int)this); /*0x772830*/
  return this; /*0x77283a*/
}

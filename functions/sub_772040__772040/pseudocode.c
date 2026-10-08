unsigned int **__thiscall sub_772040(unsigned int **this, char a2)
{
  sub_7724D0(this); /*0x772043*/
  if ( (a2 & 1) != 0 ) /*0x77204d*/
    FormHeapFree((unsigned int)this); /*0x772050*/
  return this; /*0x77205a*/
}

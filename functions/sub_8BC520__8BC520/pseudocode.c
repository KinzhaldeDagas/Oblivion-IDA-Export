int *__thiscall sub_8BC520(int *this, char a2)
{
  sub_8BC370(this); /*0x8bc523*/
  if ( (a2 & 1) != 0 ) /*0x8bc52d*/
    FormHeapFree((unsigned int)this); /*0x8bc530*/
  return this; /*0x8bc53a*/
}

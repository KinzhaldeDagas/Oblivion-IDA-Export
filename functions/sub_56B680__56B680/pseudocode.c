void (__stdcall ****__thiscall sub_56B680(void (__stdcall ****this)(signed int), char a2))(signed int)
{
  sub_56B6A0(this); /*0x56b683*/
  if ( (a2 & 1) != 0 ) /*0x56b68d*/
    FormHeapFree((unsigned int)this); /*0x56b690*/
  return this; /*0x56b69a*/
}

_DWORD *__thiscall sub_8CABB0(_DWORD *this, char a2)
{
  *this = &off_A99B50; /*0x8cabb8*/
  if ( (a2 & 1) != 0 ) /*0x8cabbe*/
    FormHeapFree((unsigned int)this); /*0x8cabc1*/
  return this; /*0x8cabcb*/
}

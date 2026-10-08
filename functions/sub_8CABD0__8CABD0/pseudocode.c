_DWORD *__thiscall sub_8CABD0(_DWORD *this, char a2)
{
  *this = &off_A99B58; /*0x8cabd8*/
  if ( (a2 & 1) != 0 ) /*0x8cabde*/
    FormHeapFree((unsigned int)this); /*0x8cabe1*/
  return this; /*0x8cabeb*/
}

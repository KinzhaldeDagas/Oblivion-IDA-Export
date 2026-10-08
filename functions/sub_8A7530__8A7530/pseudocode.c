char *__thiscall sub_8A7530(char *this, char a2)
{
  *(_DWORD *)this = &off_A975C8; /*0x8a7533*/
  sub_8A71B0(this); /*0x8a7539*/
  if ( (a2 & 1) != 0 ) /*0x8a7543*/
    FormHeapFree((unsigned int)this); /*0x8a7546*/
  return this; /*0x8a7550*/
}

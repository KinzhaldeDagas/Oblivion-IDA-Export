_DWORD *__thiscall sub_918500(_DWORD *this, char a2)
{
  *this = &off_A9D1C0; /*0x918508*/
  if ( (a2 & 1) != 0 ) /*0x91850e*/
    FormHeapFree((unsigned int)this); /*0x918511*/
  return this; /*0x91851b*/
}

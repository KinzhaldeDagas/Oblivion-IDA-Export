_DWORD *__thiscall sub_918520(_DWORD *this, char a2)
{
  *this = &off_A9D1D8; /*0x918528*/
  if ( (a2 & 1) != 0 ) /*0x91852e*/
    FormHeapFree((unsigned int)this); /*0x918531*/
  return this; /*0x91853b*/
}

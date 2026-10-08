_DWORD *__thiscall sub_919180(_DWORD *this, char a2)
{
  *this = &off_A9D2B4; /*0x919188*/
  if ( (a2 & 1) != 0 ) /*0x91918e*/
    FormHeapFree((unsigned int)this); /*0x919191*/
  return this; /*0x91919b*/
}

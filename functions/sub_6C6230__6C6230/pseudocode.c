unsigned int *__thiscall sub_6C6230(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x6c6236*/
  *this = (unsigned int)&NiStringPalette::`vftable'; /*0x6c6237*/
  FormHeapFree(v4); /*0x6c623d*/
  NiRefObject_destr(this); /*0x6c6247*/
  if ( (a2 & 1) != 0 ) /*0x6c6251*/
    FormHeapFree((unsigned int)this); /*0x6c6254*/
  return this; /*0x6c625e*/
}

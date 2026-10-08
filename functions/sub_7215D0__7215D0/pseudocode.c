unsigned int *__thiscall sub_7215D0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x7215d6*/
  *this = (unsigned int)&NiExtraData::`vftable'; /*0x7215d7*/
  FormHeapFree(v4); /*0x7215dd*/
  *(this + 2) = 0; /*0x7215e7*/
  NiRefObject_destr(this); /*0x7215ee*/
  if ( (a2 & 1) != 0 ) /*0x7215f8*/
    FormHeapFree((unsigned int)this); /*0x7215fb*/
  return this; /*0x721605*/
}

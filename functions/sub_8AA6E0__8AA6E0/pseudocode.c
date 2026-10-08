unsigned int *__thiscall sub_8AA6E0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x8aa6e6*/
  *this = (unsigned int)&NiTLargeArray<BLENDKEY>::`vftable'; /*0x8aa6e7*/
  FormHeapFree(v4); /*0x8aa6ed*/
  if ( (a2 & 1) != 0 ) /*0x8aa6fa*/
    FormHeapFree((unsigned int)this); /*0x8aa6fd*/
  return this; /*0x8aa707*/
}

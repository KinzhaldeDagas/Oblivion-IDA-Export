unsigned int *__thiscall sub_521D10(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x521d16*/
  *this = (unsigned int)&NiTArray<TESModel *>::`vftable'; /*0x521d17*/
  FormHeapFree(v4); /*0x521d1d*/
  if ( (a2 & 1) != 0 ) /*0x521d2a*/
    FormHeapFree((unsigned int)this); /*0x521d2d*/
  return this; /*0x521d37*/
}

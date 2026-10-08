unsigned int *__thiscall sub_4E4B00(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4e4b06*/
  *this = (unsigned int)&NiTArray<TESPathGridPoint *>::`vftable'; /*0x4e4b07*/
  FormHeapFree(v4); /*0x4e4b0d*/
  if ( (a2 & 1) != 0 ) /*0x4e4b1a*/
    FormHeapFree((unsigned int)this); /*0x4e4b1d*/
  return this; /*0x4e4b27*/
}

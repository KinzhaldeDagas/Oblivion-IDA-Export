unsigned int *__thiscall sub_446D20(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x446d26*/
  *this = (unsigned int)&NiTLargeArray<TESForm *>::`vftable'; /*0x446d27*/
  FormHeapFree(v4); /*0x446d2d*/
  if ( (a2 & 1) != 0 ) /*0x446d3a*/
    FormHeapFree((unsigned int)this); /*0x446d3d*/
  return this; /*0x446d47*/
}

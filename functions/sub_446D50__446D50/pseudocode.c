unsigned int *__thiscall sub_446D50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x446d56*/
  *this = (unsigned int)&NiTLargeArray<TESObjectCELL *>::`vftable'; /*0x446d57*/
  FormHeapFree(v4); /*0x446d5d*/
  if ( (a2 & 1) != 0 ) /*0x446d6a*/
    FormHeapFree((unsigned int)this); /*0x446d6d*/
  return this; /*0x446d77*/
}

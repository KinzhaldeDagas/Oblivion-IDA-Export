unsigned int *__thiscall sub_4CA180(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4ca186*/
  *this = (unsigned int)&NiTArray<TESObjectREFR *>::`vftable'; /*0x4ca187*/
  FormHeapFree(v4); /*0x4ca18d*/
  if ( (a2 & 1) != 0 ) /*0x4ca19a*/
    FormHeapFree((unsigned int)this); /*0x4ca19d*/
  return this; /*0x4ca1a7*/
}

unsigned int *__thiscall sub_95F7E0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x95f7e6*/
  *this = (unsigned int)&NiTArray<NiBoundingVolume *>::`vftable'; /*0x95f7e7*/
  FormHeapFree(v4); /*0x95f7ed*/
  if ( (a2 & 1) != 0 ) /*0x95f7fa*/
    FormHeapFree((unsigned int)this); /*0x95f7fd*/
  return this; /*0x95f807*/
}

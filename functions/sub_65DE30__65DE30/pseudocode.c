unsigned int *__thiscall sub_65DE30(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x65de36*/
  *this = (unsigned int)&NiTArray<TESRegion *>::`vftable'; /*0x65de37*/
  FormHeapFree(v4); /*0x65de3d*/
  if ( (a2 & 1) != 0 ) /*0x65de4a*/
    FormHeapFree((unsigned int)this); /*0x65de4d*/
  return this; /*0x65de57*/
}

unsigned int *__thiscall sub_4BFCE0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4bfce6*/
  *this = (unsigned int)&NiTArray<NiAdditionalGeometryData::NiAGDDataBlock *>::`vftable'; /*0x4bfce7*/
  FormHeapFree(v4); /*0x4bfced*/
  if ( (a2 & 1) != 0 ) /*0x4bfcfa*/
    FormHeapFree((unsigned int)this); /*0x4bfcfd*/
  return this; /*0x4bfd07*/
}

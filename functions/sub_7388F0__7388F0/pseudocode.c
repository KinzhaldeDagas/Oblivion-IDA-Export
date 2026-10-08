unsigned int *__thiscall sub_7388F0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x7388f6*/
  *this = (unsigned int)&NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'; /*0x7388f7*/
  FormHeapFree(v4); /*0x7388fd*/
  if ( (a2 & 1) != 0 ) /*0x73890a*/
    FormHeapFree((unsigned int)this); /*0x73890d*/
  return this; /*0x738917*/
}

unsigned int *__thiscall sub_4528E0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4528e6*/
  *this = (unsigned int)&NiTLargeArray<unsigned int>::`vftable'; /*0x4528e7*/
  FormHeapFree(v4); /*0x4528ed*/
  if ( (a2 & 1) != 0 ) /*0x4528fa*/
    FormHeapFree((unsigned int)this); /*0x4528fd*/
  return this; /*0x452907*/
}

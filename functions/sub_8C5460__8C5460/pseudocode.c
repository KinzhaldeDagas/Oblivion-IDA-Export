unsigned int *__thiscall sub_8C5460(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x8c5466*/
  *this = (unsigned int)&NiTArray<unsigned short>::`vftable'; /*0x8c5467*/
  FormHeapFree(v4); /*0x8c546d*/
  if ( (a2 & 1) != 0 ) /*0x8c547a*/
    FormHeapFree((unsigned int)this); /*0x8c547d*/
  return this; /*0x8c5487*/
}

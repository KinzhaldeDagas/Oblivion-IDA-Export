unsigned int *__thiscall sub_65DEC0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable'; /*0x65dec3*/
  NiTMap_Clear(this); /*0x65dec9*/
  FormHeapFree(*(this + 2)); /*0x65ded2*/
  if ( (a2 & 1) != 0 ) /*0x65dedf*/
    FormHeapFree((unsigned int)this); /*0x65dee2*/
  return this; /*0x65deec*/
}

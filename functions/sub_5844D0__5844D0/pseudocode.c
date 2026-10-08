unsigned int *__thiscall sub_5844D0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x5844d6*/
  *this = (unsigned int)&NiTArray<Tile *>::`vftable'; /*0x5844d7*/
  FormHeapFree(v4); /*0x5844dd*/
  if ( (a2 & 1) != 0 ) /*0x5844ea*/
    FormHeapFree((unsigned int)this); /*0x5844ed*/
  return this; /*0x5844f7*/
}

unsigned int *__thiscall sub_588AD0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x588ad6*/
  *this = (unsigned int)&NiTArray<Tile::StringListElement *>::`vftable'; /*0x588ad7*/
  FormHeapFree(v4); /*0x588add*/
  if ( (a2 & 1) != 0 ) /*0x588aea*/
    FormHeapFree((unsigned int)this); /*0x588aed*/
  return this; /*0x588af7*/
}

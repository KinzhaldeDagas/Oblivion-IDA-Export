unsigned int *__thiscall sub_959B90(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x959b96*/
  *this = (unsigned int)&NiTArray<NiPick::Record *>::`vftable'; /*0x959b97*/
  FormHeapFree(v4); /*0x959b9d*/
  if ( (a2 & 1) != 0 ) /*0x959baa*/
    FormHeapFree((unsigned int)this); /*0x959bad*/
  return this; /*0x959bb7*/
}

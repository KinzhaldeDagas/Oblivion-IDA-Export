unsigned int *__thiscall sub_77D330(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x77d336*/
  *this = (unsigned int)&NiTArray<NiVBChip *>::`vftable'; /*0x77d337*/
  FormHeapFree(v4); /*0x77d33d*/
  if ( (a2 & 1) != 0 ) /*0x77d34a*/
    FormHeapFree((unsigned int)this); /*0x77d34d*/
  return this; /*0x77d357*/
}

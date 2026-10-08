unsigned int *__thiscall sub_452B30(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x452b36*/
  *this = (unsigned int)&NiTArray<char *>::`vftable'; /*0x452b37*/
  FormHeapFree(v4); /*0x452b3d*/
  if ( (a2 & 1) != 0 ) /*0x452b4a*/
    FormHeapFree((unsigned int)this); /*0x452b4d*/
  return this; /*0x452b57*/
}

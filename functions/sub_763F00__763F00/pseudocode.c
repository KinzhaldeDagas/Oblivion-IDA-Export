unsigned int *__thiscall sub_763F00(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x763f06*/
  *this = (unsigned int)&NiTArray<void *>::`vftable'; /*0x763f07*/
  FormHeapFree(v4); /*0x763f0d*/
  if ( (a2 & 1) != 0 ) /*0x763f1a*/
    FormHeapFree((unsigned int)this); /*0x763f1d*/
  return this; /*0x763f27*/
}

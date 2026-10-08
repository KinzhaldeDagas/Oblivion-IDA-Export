unsigned int *__thiscall sub_77D360(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x77d366*/
  *this = (unsigned int)&NiTArray<NiVBBlock *>::`vftable'; /*0x77d367*/
  FormHeapFree(v4); /*0x77d36d*/
  if ( (a2 & 1) != 0 ) /*0x77d37a*/
    FormHeapFree((unsigned int)this); /*0x77d37d*/
  return this; /*0x77d387*/
}

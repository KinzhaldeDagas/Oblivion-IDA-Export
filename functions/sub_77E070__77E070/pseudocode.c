unsigned int *__thiscall sub_77E070(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x77e076*/
  *this = (unsigned int)&NiTArray<NiVBDynamicSet *>::`vftable'; /*0x77e077*/
  FormHeapFree(v4); /*0x77e07d*/
  if ( (a2 & 1) != 0 ) /*0x77e08a*/
    FormHeapFree((unsigned int)this); /*0x77e08d*/
  return this; /*0x77e097*/
}

unsigned int *__thiscall sub_716C50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3); /*0x716c56*/
  *this = (unsigned int)&NiStringExtraData::`vftable'; /*0x716c57*/
  FormHeapFree(v4); /*0x716c5d*/
  *(this + 3) = 0; /*0x716c67*/
  NiExtraData_dtor(this); /*0x716c6e*/
  if ( (a2 & 1) != 0 ) /*0x716c78*/
    FormHeapFree((unsigned int)this); /*0x716c7b*/
  return this; /*0x716c85*/
}

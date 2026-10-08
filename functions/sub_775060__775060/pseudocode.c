unsigned int *__thiscall sub_775060(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x775066*/
  *this = (unsigned int)&NiTArray<NiDX9AdapterDesc *>::`vftable'; /*0x775067*/
  FormHeapFree(v4); /*0x77506d*/
  if ( (a2 & 1) != 0 ) /*0x77507a*/
    FormHeapFree((unsigned int)this); /*0x77507d*/
  return this; /*0x775087*/
}

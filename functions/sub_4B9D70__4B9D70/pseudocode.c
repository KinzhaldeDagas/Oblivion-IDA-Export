unsigned int *__thiscall sub_4B9D70(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4b9d76*/
  *this = (unsigned int)&NiTArray<unsigned int>::`vftable'; /*0x4b9d77*/
  FormHeapFree(v4); /*0x4b9d7d*/
  if ( (a2 & 1) != 0 ) /*0x4b9d8a*/
    FormHeapFree((unsigned int)this); /*0x4b9d8d*/
  return this; /*0x4b9d97*/
}

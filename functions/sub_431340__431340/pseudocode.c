unsigned int *__thiscall sub_431340(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x431346*/
  *this = (unsigned int)&NiTArray<char const *>::`vftable'; /*0x431347*/
  FormHeapFree(v4); /*0x43134d*/
  if ( (a2 & 1) != 0 ) /*0x43135a*/
    FormHeapFree((unsigned int)this); /*0x43135d*/
  return this; /*0x431367*/
}

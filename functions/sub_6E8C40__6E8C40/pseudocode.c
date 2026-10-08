unsigned int *__thiscall sub_6E8C40(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x6e8c46*/
  *this = (unsigned int)&NiTArray<NiTSet<NiNode *> *>::`vftable'; /*0x6e8c47*/
  FormHeapFree(v4); /*0x6e8c4d*/
  if ( (a2 & 1) != 0 ) /*0x6e8c5a*/
    FormHeapFree((unsigned int)this); /*0x6e8c5d*/
  return this; /*0x6e8c67*/
}

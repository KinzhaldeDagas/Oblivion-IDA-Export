unsigned int *__thiscall sub_42BB60(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x42bb66*/
  *this = (unsigned int)&NiTArray<BSHash *>::`vftable'; /*0x42bb67*/
  FormHeapFree(v4); /*0x42bb6d*/
  if ( (a2 & 1) != 0 ) /*0x42bb7a*/
    FormHeapFree((unsigned int)this); /*0x42bb7d*/
  return this; /*0x42bb87*/
}

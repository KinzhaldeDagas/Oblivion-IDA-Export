unsigned int *__thiscall sub_4528B0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4528b6*/
  *this = (unsigned int)&NiTLargeArray<FormAndFlags *>::`vftable'; /*0x4528b7*/
  FormHeapFree(v4); /*0x4528bd*/
  if ( (a2 & 1) != 0 ) /*0x4528ca*/
    FormHeapFree((unsigned int)this); /*0x4528cd*/
  return this; /*0x4528d7*/
}

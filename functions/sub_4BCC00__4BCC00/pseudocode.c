unsigned int *__thiscall sub_4BCC00(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x4bcc06*/
  *this = (unsigned int)&NiTArray<float>::`vftable'; /*0x4bcc07*/
  FormHeapFree(v4); /*0x4bcc0d*/
  if ( (a2 & 1) != 0 ) /*0x4bcc1a*/
    FormHeapFree((unsigned int)this); /*0x4bcc1d*/
  return this; /*0x4bcc27*/
}

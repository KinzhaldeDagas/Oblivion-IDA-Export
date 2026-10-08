unsigned int *__thiscall sub_703C50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x703c56*/
  *this = (unsigned int)&NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'; /*0x703c57*/
  FormHeapFree(v4); /*0x703c5d*/
  if ( (a2 & 1) != 0 ) /*0x703c6a*/
    FormHeapFree((unsigned int)this); /*0x703c6d*/
  return this; /*0x703c77*/
}

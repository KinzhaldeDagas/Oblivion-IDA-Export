unsigned int *__thiscall sub_76F4F0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x76f4f6*/
  *this = (unsigned int)&NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable'; /*0x76f4f7*/
  FormHeapFree(v4); /*0x76f4fd*/
  if ( (a2 & 1) != 0 ) /*0x76f50a*/
    FormHeapFree((unsigned int)this); /*0x76f50d*/
  return this; /*0x76f517*/
}

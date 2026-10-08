unsigned int *__thiscall sub_76F4C0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x76f4c6*/
  *this = (unsigned int)&NiTArray<unsigned int (__cdecl *)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'; /*0x76f4c7*/
  FormHeapFree(v4); /*0x76f4cd*/
  if ( (a2 & 1) != 0 ) /*0x76f4da*/
    FormHeapFree((unsigned int)this); /*0x76f4dd*/
  return this; /*0x76f4e7*/
}

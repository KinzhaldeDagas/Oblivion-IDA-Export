unsigned int *__thiscall sub_763F30(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x763f36*/
  *this = (unsigned int)&NiTArray<bool (__cdecl *)(void *)>::`vftable'; /*0x763f37*/
  FormHeapFree(v4); /*0x763f3d*/
  if ( (a2 & 1) != 0 ) /*0x763f4a*/
    FormHeapFree((unsigned int)this); /*0x763f4d*/
  return this; /*0x763f57*/
}

unsigned int *__thiscall sub_763ED0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x763ed6*/
  *this = (unsigned int)&NiTArray<bool (__cdecl *)(bool,void *)>::`vftable'; /*0x763ed7*/
  FormHeapFree(v4); /*0x763edd*/
  if ( (a2 & 1) != 0 ) /*0x763eea*/
    FormHeapFree((unsigned int)this); /*0x763eed*/
  return this; /*0x763ef7*/
}

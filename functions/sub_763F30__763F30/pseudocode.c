unsigned int *__thiscall sub_763F30(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1);
  *this = (unsigned int)&NiTArray<bool (__cdecl *)(void *)>::`vftable';
  FormHeapFree(v4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

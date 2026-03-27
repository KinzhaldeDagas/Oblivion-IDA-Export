unsigned int *__thiscall sub_76F4F0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1);
  *this = (unsigned int)&NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable';
  FormHeapFree(v4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

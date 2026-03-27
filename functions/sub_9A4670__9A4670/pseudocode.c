int **__thiscall sub_9A4670(int **this, char a2)
{
  int *v3; // ecx

  v3 = *(this + 1);
  *this = (int *)&NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable';
  if ( v3 )
    sub_4027F0(v3, 3);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

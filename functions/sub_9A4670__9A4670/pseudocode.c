int **__thiscall sub_9A4670(int **this, char a2)
{
  int *v3; // ecx

  v3 = *(this + 1); /*0x9a4673*/
  *this = (int *)&NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'; /*0x9a4678*/
  if ( v3 ) /*0x9a467e*/
    sub_4027F0(v3, 3); /*0x9a4682*/
  if ( (a2 & 1) != 0 ) /*0x9a468c*/
    FormHeapFree((unsigned int)this); /*0x9a468f*/
  return this; /*0x9a4699*/
}

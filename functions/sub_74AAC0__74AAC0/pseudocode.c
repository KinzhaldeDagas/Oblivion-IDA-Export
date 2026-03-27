int **__thiscall sub_74AAC0(int **this, char a2)
{
  int *v3; // ecx

  v3 = *(this + 1);
  *this = (int *)&NiTArray<NiPointer<NiGeometry>>::`vftable';
  if ( v3 )
    sub_74A000(v3, 3);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}

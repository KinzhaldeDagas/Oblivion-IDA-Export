signed int __thiscall sub_42BC10(unsigned int *this, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax

  v2 = *this;
  v3 = *(this + 1);
  v4 = *a2;
  v5 = a2[1];
  if ( v3 > v5 )
    return 1;
  if ( v3 < v5 || v2 < v4 )
    return 0xFFFFFFFF;
  return __PAIR64__(v3, v2) > __PAIR64__(v5, v4);
}

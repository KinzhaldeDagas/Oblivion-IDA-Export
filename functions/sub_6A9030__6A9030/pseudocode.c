int __thiscall sub_6A9030(unsigned int *this)
{
  unsigned int v1; // edx
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *i; // ecx

  v1 = *(this + 1);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = (_DWORD *)*(this + 2);
  for ( i = v3; !*i; ++i )
  {
    if ( ++v2 >= v1 )
      return 0;
  }
  return v3[v2];
}

int __thiscall sub_8B0F00(int *this, unsigned int a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // ecx

  v2 = *(this + 2);
  v3 = *this;
  result = v2 & (0x9E3779B1 * (a2 >> 4));
  v5 = *(_DWORD *)(*this + 4 * result);
  if ( !v5 )
    return v2 + 1;
  while ( v5 != a2 )
  {
    result = v2 & (result + 1);
    v5 = *(_DWORD *)(v3 + 4 * result);
    if ( !v5 )
      return v2 + 1;
  }
  return result;
}

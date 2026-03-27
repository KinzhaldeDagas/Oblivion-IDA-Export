signed int __thiscall sub_953160(int *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *i; // ecx

  v3 = *(this + 2);
  v4 = 0;
  if ( v3 <= 0 )
    return 1;
  v5 = (_DWORD *)*(this + 1);
  for ( i = v5; *i != a2; i += 2 )
  {
    if ( ++v4 >= v3 )
      return 1;
  }
  *a3 = v5[2 * v4 + 1];
  return 0;
}

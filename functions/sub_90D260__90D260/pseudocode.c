int __thiscall sub_90D260(_DWORD *this, int a2)
{
  int v2; // eax
  int i; // esi
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // edx

  v2 = *(this + 1);
  for ( i = *(this + 7); v2; i += v4 )
  {
    v4 = *(_DWORD *)(v2 + 0x1C);
    v2 = *(_DWORD *)(v2 + 4);
  }
  v5 = this;
  v6 = a2 - i;
  while ( 1 )
  {
    v6 += v5[7];
    if ( v6 >= 0 )
      break;
    v5 = (_DWORD *)v5[1];
    if ( !v5 )
      return *(this + 6);
  }
  return v5[6] + 0x14 * v6;
}

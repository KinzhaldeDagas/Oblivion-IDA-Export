int __thiscall sub_775280(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v8; // edx

  v5 = (_DWORD *)*(this + 0x4E);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)v5[2];
    v5 = (_DWORD *)*v5;
    if ( v6 )
    {
      if ( *v6 == a2 )
        break;
    }
    if ( !v5 )
      return 0;
  }
  if ( !a5 )
  {
    v8 = a4;
    return sub_7750F0(v6, a3, v8, a5);
  }
  if ( a4 > 0x10 )
  {
    v8 = 0x18;
    if ( a5 != 1 )
      return sub_7750F0(v6, a3, 0x18, 8);
    return sub_7750F0(v6, a3, v8, a5);
  }
  if ( a5 != 1 )
    return sub_7750F0(v6, a3, 0x18, 8);
  return sub_7750F0(v6, a3, 0xF, 1);
}

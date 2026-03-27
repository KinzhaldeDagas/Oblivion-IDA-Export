char __thiscall sub_6C6110(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)(a2 + 0x58);
  if ( !v2 )
    return 1;
  while ( v2 != this )
  {
    v2 = (_DWORD *)v2[0x16];
    if ( !v2 )
      return 1;
  }
  return 0;
}

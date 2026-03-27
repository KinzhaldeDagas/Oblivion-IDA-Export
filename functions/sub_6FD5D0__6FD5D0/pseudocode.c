char __thiscall sub_6FD5D0(int this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  char i; // bl
  _DWORD *v5; // esi
  unsigned int j; // edx
  int v7; // eax

  v2 = *(_DWORD *)(this + 0x40);
  if ( !v2 || *(_DWORD *)(this + 0x3C) == a2 || a2 != 0xFFFFFFFF && ((int)a2 <= (int)0xFFFFFFFF || a2 >= v2) )
    return 0;
  v3 = 0;
  for ( i = 0; v3 < *(unsigned __int16 *)(this + 0x4E); ++v3 )
  {
    v5 = *(_DWORD **)(*(_DWORD *)(this + 0x48) + 4 * v3);
    if ( v5 )
    {
      if ( v3 == a2 )
        i = 1;
      for ( j = 0; j < v5[2]; ++j )
      {
        if ( *(_DWORD *)(*v5 + 4 * j) )
        {
          v7 = *(_DWORD *)(*v5 + 4 * j);
          if ( i )
            *(_WORD *)(v7 + 0x18) |= 2u;
          else
            *(_WORD *)(v7 + 0x18) &= ~2u;
        }
      }
    }
  }
  *(_DWORD *)(this + 0x3C) = a2;
  return 1;
}

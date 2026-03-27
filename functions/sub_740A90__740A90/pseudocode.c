char __thiscall sub_740A90(unsigned int *this, int a2)
{
  unsigned int v3; // edx
  _DWORD *v4; // eax
  unsigned int v5; // ecx
  int v6; // esi

  if ( !a2 )
    return 0;
  v3 = *(this + 3);
  if ( v3 != *(_DWORD *)(a2 + 0xC) )
    return 0;
  v4 = (_DWORD *)*(this + 4);
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0x10) )
      goto LABEL_8;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 0x10) )
    return 0;
LABEL_8:
  if ( !v4 )
    return 1;
  v5 = 0;
  if ( !v3 )
    return 1;
  v6 = *(_DWORD *)(a2 + 0x10) - (_DWORD)v4;
  while ( *v4 == *(_DWORD *)((char *)v4 + v6) )
  {
    ++v5;
    ++v4;
    if ( v5 >= v3 )
      return 1;
  }
  return 0;
}

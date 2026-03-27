char __thiscall sub_73CDB0(unsigned int *this, int a2)
{
  unsigned int v3; // ebp
  int v4; // ebx
  int v5; // esi

  if ( !a2 )
    return 0;
  v3 = *(this + 3);
  if ( v3 != *(_DWORD *)(a2 + 0xC) )
    return 0;
  v4 = *(this + 4);
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0x10) )
      goto LABEL_10;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 0x10) )
    return 0;
LABEL_10:
  if ( !v4 )
    return 1;
  v5 = 0;
  if ( !v3 )
    return 1;
  while ( !*(_DWORD *)(v4 + 4 * v5) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x10) + 4 * v5) )
      return 0;
LABEL_18:
    if ( ++v5 >= v3 )
      return 1;
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x10) + 4 * v5)
    && !strcmp(*(const char **)(v4 + 4 * v5), *(const char **)(*(_DWORD *)(a2 + 0x10) + 4 * v5)) )
  {
    goto LABEL_18;
  }
  return 0;
}

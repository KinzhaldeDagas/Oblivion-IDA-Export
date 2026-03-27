char __thiscall sub_73C7A0(unsigned int *this, _DWORD *a2)
{
  unsigned int v3; // ebp
  int v4; // ebx
  int v5; // esi

  if ( !a2 )
    return 0;
  v3 = *(this + 3);
  if ( v3 != a2[3] || *(this + 5) != a2[5] )
    return 0;
  v4 = *(this + 4);
  if ( v4 )
  {
    if ( a2[4] )
      goto LABEL_11;
    return 0;
  }
  if ( a2[4] )
    return 0;
LABEL_11:
  if ( !v4 )
    return 1;
  v5 = 0;
  if ( !v3 )
    return 1;
  while ( !*(_DWORD *)(v4 + 4 * v5) )
  {
    if ( *(_DWORD *)(a2[4] + 4 * v5) )
      return 0;
LABEL_19:
    if ( ++v5 >= v3 )
      return 1;
  }
  if ( *(_DWORD *)(a2[4] + 4 * v5) && !strcmp(*(const char **)(v4 + 4 * v5), *(const char **)(a2[4] + 4 * v5)) )
    goto LABEL_19;
  return 0;
}

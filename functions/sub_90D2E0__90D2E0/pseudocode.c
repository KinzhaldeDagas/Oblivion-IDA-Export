const char **__thiscall sub_90D2E0(_DWORD *this, const char *a2)
{
  int i; // ebx
  int v4; // edx
  int v5; // eax
  int j; // ecx
  int k; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  int v10; // eax
  const char **v11; // esi

  for ( i = 0; ; ++i )
  {
    v4 = *(this + 7);
    v5 = *(this + 1);
    for ( j = v4; v5; v5 = *(_DWORD *)(v5 + 4) )
      j += *(_DWORD *)(v5 + 0x1C);
    if ( i >= j )
      break;
    for ( k = *(this + 1); k; v4 += v8 )
    {
      v8 = *(_DWORD *)(k + 0x1C);
      k = *(_DWORD *)(k + 4);
    }
    v9 = this;
    v10 = i - v4;
    while ( 1 )
    {
      v10 += v9[7];
      if ( v10 >= 0 )
        break;
      v9 = (_DWORD *)v9[1];
      if ( !v9 )
      {
        v11 = (const char **)*(this + 6);
        goto LABEL_11;
      }
    }
    v11 = (const char **)(v9[6] + 0x14 * v10);
LABEL_11:
    if ( !sub_8B1770(*v11, a2) )
      return v11;
  }
  return 0;
}

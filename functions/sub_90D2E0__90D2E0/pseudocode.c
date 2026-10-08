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

  for ( i = 0; ; ++i ) /*0x90d2ea*/
  {
    v4 = *(this + 7); /*0x90d2f3*/
    v5 = *(this + 1); /*0x90d2f6*/
    for ( j = v4; v5; v5 = *(_DWORD *)(v5 + 4) ) /*0x90d2fc*/
      j += *(_DWORD *)(v5 + 0x1C); /*0x90d300*/
    if ( i >= j ) /*0x90d30c*/
      break; /*0x90d30c*/
    for ( k = *(this + 1); k; v4 += v8 ) /*0x90d312*/
    {
      v8 = *(_DWORD *)(k + 0x1C); /*0x90d314*/
      k = *(_DWORD *)(k + 4); /*0x90d317*/
    }
    v9 = this; /*0x90d322*/
    v10 = i - v4; /*0x90d324*/
    while ( 1 ) /*0x90d326*/
    {
      v10 += v9[7]; /*0x90d326*/
      if ( v10 >= 0 ) /*0x90d329*/
        break; /*0x90d329*/
      v9 = (_DWORD *)v9[1]; /*0x90d32b*/
      if ( !v9 ) /*0x90d330*/
      {
        v11 = (const char **)*(this + 6); /*0x90d332*/
        goto LABEL_11; /*0x90d332*/
      }
    }
    v11 = (const char **)(v9[6] + 0x14 * v10); /*0x90d34e*/
LABEL_11:
    if ( !sub_8B1770(*v11, a2) ) /*0x90d343*/
      return v11; /*0x90d359*/
  }
  return 0; /*0x90d353*/
}

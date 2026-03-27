bool __thiscall sub_727FA0(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // ecx
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned int v10; // eax
  unsigned __int8 *v11; // edx
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // edx
  unsigned __int8 *v14; // ecx
  int v15; // eax

  if ( !a2 )
    return 0;
  v3 = *(this + 4);
  if ( v3 != *(_DWORD *)(a2 + 0x10) )
    return 0;
  v4 = *(_DWORD **)(a2 + 0xC);
  v5 = (_DWORD *)*(this + 3);
  if ( v3 < 4 )
  {
LABEL_7:
    if ( !v3 )
    {
LABEL_17:
      v15 = 0;
      return v15 == 0;
    }
  }
  else
  {
    while ( *v5 == *v4 )
    {
      v3 -= 4;
      ++v4;
      ++v5;
      if ( v3 < 4 )
        goto LABEL_7;
    }
  }
  v6 = *(unsigned __int8 *)v5 - *(unsigned __int8 *)v4;
  if ( !v6 )
  {
    v7 = v3 - 1;
    v8 = (unsigned __int8 *)v4 + 1;
    v9 = (unsigned __int8 *)v5 + 1;
    if ( !v7 )
      goto LABEL_17;
    v6 = *v9 - *v8;
    if ( !v6 )
    {
      v10 = v7 - 1;
      v11 = v8 + 1;
      v12 = v9 + 1;
      if ( !v10 )
        goto LABEL_17;
      v6 = *v12 - *v11;
      if ( !v6 )
      {
        v13 = v11 + 1;
        v14 = v12 + 1;
        if ( v10 == 1 )
          goto LABEL_17;
        v6 = *v14 - *v13;
        if ( !v6 )
          goto LABEL_17;
      }
    }
  }
  v15 = 1;
  if ( v6 <= 0 )
    return 0;
  return v15 == 0;
}

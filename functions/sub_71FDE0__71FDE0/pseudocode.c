bool __thiscall sub_71FDE0(NiTriBasedGeomData *this, int a2)
{
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  int v17; // eax

  if ( !sub_732E10(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 0x11);
  if ( v4 != *(_DWORD *)(a2 + 0x44) )
    return 0;
  v5 = *(_DWORD **)(a2 + 0x48);
  v6 = *((_DWORD **)this + 0x12);
  v7 = 2 * v4;
  if ( v7 < 4 )
  {
LABEL_7:
    if ( !v7 )
    {
LABEL_17:
      v17 = 0;
      return v17 == 0;
    }
  }
  else
  {
    while ( *v6 == *v5 )
    {
      v7 -= 4;
      ++v5;
      ++v6;
      if ( v7 < 4 )
        goto LABEL_7;
    }
  }
  v8 = *(unsigned __int8 *)v6 - *(unsigned __int8 *)v5;
  if ( !v8 )
  {
    v9 = v7 - 1;
    v10 = (unsigned __int8 *)v5 + 1;
    v11 = (unsigned __int8 *)v6 + 1;
    if ( !v9 )
      goto LABEL_17;
    v8 = *v11 - *v10;
    if ( !v8 )
    {
      v12 = v9 - 1;
      v13 = v10 + 1;
      v14 = v11 + 1;
      if ( !v12 )
        goto LABEL_17;
      v8 = *v14 - *v13;
      if ( !v8 )
      {
        v15 = v13 + 1;
        v16 = v14 + 1;
        if ( v12 == 1 )
          goto LABEL_17;
        v8 = *v16 - *v15;
        if ( !v8 )
          goto LABEL_17;
      }
    }
  }
  v17 = 1;
  if ( v8 <= 0 )
    return 0;
  return v17 == 0;
}

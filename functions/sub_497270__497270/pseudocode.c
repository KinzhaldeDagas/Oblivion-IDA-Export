bool __thiscall sub_497270(_DWORD *this, int a2)
{
  unsigned __int8 v3; // al
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  unsigned int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  unsigned __int8 *v9; // edx
  unsigned __int8 *v10; // ecx
  unsigned int v11; // eax
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  int v16; // eax

  if ( !a2 )
    return 1;
  v3 = *(_BYTE *)this;
  if ( *(_BYTE *)this != *(_BYTE *)a2 )
    return 1;
  if ( v3 )
  {
    v4 = (_DWORD *)*(this + 1);
    v5 = *(_DWORD **)(a2 + 4);
    v6 = 0x1C * v3;
    if ( v6 < 4 )
    {
LABEL_8:
      if ( !v6 )
        goto LABEL_18;
    }
    else
    {
      while ( *v4 == *v5 )
      {
        v6 -= 4;
        ++v5;
        ++v4;
        if ( v6 < 4 )
          goto LABEL_8;
      }
    }
    v7 = *(unsigned __int8 *)v4 - *(unsigned __int8 *)v5;
    if ( v7 )
      goto LABEL_16;
    v8 = v6 - 1;
    v9 = (unsigned __int8 *)v5 + 1;
    v10 = (unsigned __int8 *)v4 + 1;
    if ( v8 )
    {
      v7 = *v10 - *v9;
      if ( v7
        || (v11 = v8 - 1, v12 = v9 + 1, v13 = v10 + 1, v11)
        && ((v7 = *v13 - *v12) != 0 || (v14 = v12 + 1, v15 = v13 + 1, v11 != 1) && (v7 = *v15 - *v14) != 0) )
      {
LABEL_16:
        v16 = 1;
        if ( v7 <= 0 )
          v16 = 0xFFFFFFFF;
        return v16 != 0;
      }
    }
LABEL_18:
    v16 = 0;
    return v16 != 0;
  }
  return 0;
}

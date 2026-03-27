bool __thiscall sub_703080(unsigned __int16 *this, int a2)
{
  unsigned __int16 v5; // ax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  unsigned int v21; // eax
  int v22; // esi
  unsigned int v23; // eax
  unsigned __int8 *v24; // ecx
  unsigned __int8 *v25; // edx
  unsigned int v26; // eax
  unsigned __int8 *v27; // ecx
  unsigned __int8 *v28; // edx
  unsigned __int8 *v29; // ecx
  unsigned __int8 *v30; // edx
  int v31; // eax
  int v32; // [esp+Ch] [ebp+4h]

  if ( !sub_71FDE0(this, a2) )
    return 0;
  v5 = *(this + 0x30);
  if ( *((_DWORD *)this + 0x18) != *(_DWORD *)(a2 + 0x60)
    || *(this + 0x32) != *(_WORD *)(a2 + 0x64)
    || *(this + 0x33) != *(_WORD *)(a2 + 0x66)
    || *(this + 0x34) != *(_WORD *)(a2 + 0x68)
    || *(this + 0x35) != *(_WORD *)(a2 + 0x6A)
    || *(this + 0x36) != *(_WORD *)(a2 + 0x6C) )
  {
    return 0;
  }
  v6 = *(_DWORD **)(a2 + 0x58);
  v7 = *((_DWORD **)this + 0x16);
  v32 = v5;
  v8 = 8 * v5;
  if ( v8 < 4 )
  {
LABEL_12:
    if ( !v8 )
    {
LABEL_22:
      v18 = 0;
      goto LABEL_23;
    }
  }
  else
  {
    while ( *v7 == *v6 )
    {
      v8 -= 4;
      ++v6;
      ++v7;
      if ( v8 < 4 )
        goto LABEL_12;
    }
  }
  v9 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6;
  if ( !v9 )
  {
    v10 = v8 - 1;
    v11 = (unsigned __int8 *)v6 + 1;
    v12 = (unsigned __int8 *)v7 + 1;
    if ( !v10 )
      goto LABEL_22;
    v9 = *v12 - *v11;
    if ( !v9 )
    {
      v13 = v10 - 1;
      v14 = v11 + 1;
      v15 = v12 + 1;
      if ( !v13 )
        goto LABEL_22;
      v9 = *v15 - *v14;
      if ( !v9 )
      {
        v16 = v14 + 1;
        v17 = v15 + 1;
        if ( v13 == 1 )
          goto LABEL_22;
        v9 = *v17 - *v16;
        if ( !v9 )
          goto LABEL_22;
      }
    }
  }
  v18 = 1;
  if ( v9 <= 0 )
    v18 = 0xFFFFFFFF;
LABEL_23:
  if ( v18 )
    return 0;
  v19 = *(_DWORD **)(a2 + 0x5C);
  v20 = *((_DWORD **)this + 0x17);
  v21 = 2 * v32;
  if ( (unsigned int)(2 * v32) < 4 )
  {
LABEL_28:
    if ( !v21 )
    {
LABEL_38:
      v31 = 0;
      return v31 == 0;
    }
  }
  else
  {
    while ( *v20 == *v19 )
    {
      v21 -= 4;
      ++v19;
      ++v20;
      if ( v21 < 4 )
        goto LABEL_28;
    }
  }
  v22 = *(unsigned __int8 *)v20 - *(unsigned __int8 *)v19;
  if ( !v22 )
  {
    v23 = v21 - 1;
    v24 = (unsigned __int8 *)v19 + 1;
    v25 = (unsigned __int8 *)v20 + 1;
    if ( !v23 )
      goto LABEL_38;
    v22 = *v25 - *v24;
    if ( !v22 )
    {
      v26 = v23 - 1;
      v27 = v24 + 1;
      v28 = v25 + 1;
      if ( !v26 )
        goto LABEL_38;
      v22 = *v28 - *v27;
      if ( !v22 )
      {
        v29 = v27 + 1;
        v30 = v28 + 1;
        if ( v26 == 1 )
          goto LABEL_38;
        v22 = *v30 - *v29;
        if ( !v22 )
          goto LABEL_38;
      }
    }
  }
  v31 = 1;
  if ( v22 <= 0 )
    return 0;
  return v31 == 0;
}

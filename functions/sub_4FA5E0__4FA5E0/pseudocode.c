char __thiscall sub_4FA5E0(int *this, int a2)
{
  const char *v3; // eax
  unsigned int v4; // eax
  char *v5; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int *v11; // edi
  _DWORD *v12; // eax
  int v13; // ecx
  int *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  int *v17; // ecx
  _DWORD *v18; // edx
  int v19; // esi
  int *v20; // edx
  int v21; // esi
  char *v22; // [esp-4h] [ebp-Ch]

  if ( !byte_B333F4 )
  {
    byte_B333F4 = 1;
    v3 = (const char *)(*(int (__thiscall **)(int *))(*this + 0xD4))(this);
    byte_B333F4 = 0;
    if ( v3 )
    {
      if ( strlen(v3) )
      {
        LOWORD(v4) = *(_WORD *)(a2 + 0x10);
        v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(a2 + 0xC)) : (unsigned __int16)v4;
        if ( v4 )
        {
          v22 = *(char **)(a2 + 0xC);
          v5 = (char *)(*(int (__thiscall **)(int *))(*this + 0xD4))(this);
          if ( _strcmp(v5, v22) )
            return 1;
        }
      }
    }
  }
  v7 = *(this + 8);
  if ( v7 != *(_DWORD *)(a2 + 0x30) || *(this + 7) != *(_DWORD *)(a2 + 0x2C) )
    return 1;
  v8 = 0;
  if ( v7 )
  {
    while ( *(_BYTE *)(*(this + 0xC) + v8) == *(_BYTE *)(v8 + *(_DWORD *)(a2 + 0x20)) )
    {
      if ( ++v8 >= v7 )
        goto LABEL_15;
    }
    return 1;
  }
LABEL_15:
  v9 = a2 + 0x3C;
  v10 = 0;
  v11 = this + 0x12;
  v12 = (_DWORD *)(a2 + 0x3C);
  if ( a2 != 0xFFFFFFC4 )
  {
    do
    {
      if ( *v12 )
        ++v10;
      v12 = (_DWORD *)v12[1];
    }
    while ( v12 );
  }
  v13 = 0;
  v14 = this + 0x12;
  if ( this != (int *)0xFFFFFFB8 )
  {
    do
    {
      if ( *v14 )
        ++v13;
      v14 = (int *)v14[1];
    }
    while ( v14 );
  }
  if ( v10 != v13 )
    return 1;
  if ( a2 != 0xFFFFFFC4 )
  {
    while ( v11 )
    {
      if ( *(_DWORD *)v9 && *v11 && sub_517B60(*(char ***)v9, *v11) )
        return 1;
      v9 = *(_DWORD *)(v9 + 4);
      v11 = (int *)v11[1];
      if ( !v9 )
        break;
    }
  }
  v15 = (_DWORD *)(a2 + 0x44);
  v16 = 0;
  v17 = this + 0x10;
  v18 = (_DWORD *)(a2 + 0x44);
  if ( a2 != 0xFFFFFFBC )
  {
    do
    {
      if ( *v18 )
        ++v16;
      v18 = (_DWORD *)v18[1];
    }
    while ( v18 );
  }
  v19 = 0;
  v20 = this + 0x10;
  if ( this != (int *)0xFFFFFFC0 )
  {
    do
    {
      if ( *v20 )
        ++v19;
      v20 = (int *)v20[1];
    }
    while ( v20 );
  }
  if ( v16 != v19 )
    return 1;
  if ( a2 != 0xFFFFFFBC )
  {
    while ( v17 )
    {
      v21 = *v17;
      if ( *v15 && v21 && *(_DWORD *)(*v15 + 8) != *(_DWORD *)(v21 + 8) )
        return 1;
      v15 = (_DWORD *)v15[1];
      v17 = (int *)v17[1];
      if ( !v15 )
        return 0;
    }
  }
  return 0;
}

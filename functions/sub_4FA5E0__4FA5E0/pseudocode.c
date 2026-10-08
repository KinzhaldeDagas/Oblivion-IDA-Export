char __thiscall sub_4FA5E0(int *this, int a2)
{
  const char *v3; // eax
  unsigned int v4; // eax
  const char *v5; // eax
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
  const char *v22; // [esp-4h] [ebp-Ch]

  if ( !unk_B333F4 )
  {
    unk_B333F4 = 1; /*0x4fa5f1*/
    v3 = (const char *)(*(int (__thiscall **)(int *))(*this + 0xD4))(this); /*0x4fa601*/
    unk_B333F4 = 0; /*0x4fa605*/
    if ( v3 )
    {
      if ( strlen(v3) )
      {
        LOWORD(v4) = *(_WORD *)(a2 + 0x10); /*0x4fa620*/
        v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(a2 + 0xC)) : (unsigned __int16)v4;
        if ( v4 ) /*0x4fa642*/
        {
          v22 = *(const char **)(a2 + 0xC); /*0x4fa647*/
          v5 = (const char *)(*(int (__thiscall **)(int *))(*this + 0xD4))(this); /*0x4fa653*/
          if ( CRT_StricmpLocaleDispatch(v5, v22) ) /*0x4fa656*/
            return 1; /*0x4fa656*/
        }
      }
    }
  }
  v7 = *(this + 8); /*0x4fa669*/
  if ( v7 != *(_DWORD *)(a2 + 0x30) || *(this + 7) != *(_DWORD *)(a2 + 0x2C) ) /*0x4fa677*/
    return 1; /*0x4fa666*/
  v8 = 0; /*0x4fa67d*/
  if ( v7 ) /*0x4fa682*/
  {
    while ( *(_BYTE *)(*(this + 0xC) + v8) == *(_BYTE *)(v8 + *(_DWORD *)(a2 + 0x20)) ) /*0x4fa696*/
    {
      if ( ++v8 >= v7 ) /*0x4fa6a1*/
        goto LABEL_15; /*0x4fa6a1*/
    }
    return 1; /*0x4fa696*/
  }
LABEL_15:
  v9 = a2 + 0x3C; /*0x4fa6a3*/
  v10 = 0; /*0x4fa6a6*/
  v11 = this + 0x12; /*0x4fa6aa*/
  v12 = (_DWORD *)(a2 + 0x3C); /*0x4fa6ad*/
  if ( a2 != 0xFFFFFFC4 ) /*0x4fa6af*/
  {
    do /*0x4fa6be*/
    {
      if ( *v12 ) /*0x4fa6b1*/
        ++v10; /*0x4fa6b6*/
      v12 = (_DWORD *)v12[1]; /*0x4fa6b9*/
    }
    while ( v12 ); /*0x4fa6be*/
  }
  v13 = 0; /*0x4fa6c0*/
  v14 = this + 0x12; /*0x4fa6c4*/
  if ( this != (int *)0xFFFFFFB8 ) /*0x4fa6c6*/
  {
    do /*0x4fa6d5*/
    {
      if ( *v14 ) /*0x4fa6c8*/
        ++v13; /*0x4fa6cd*/
      v14 = (int *)v14[1]; /*0x4fa6d0*/
    }
    while ( v14 ); /*0x4fa6d5*/
  }
  if ( v10 != v13 ) /*0x4fa6d9*/
    return 1; /*0x4fa6d9*/
  if ( a2 != 0xFFFFFFC4 ) /*0x4fa6e1*/
  {
    while ( v11 ) /*0x4fa6e5*/
    {
      if ( *(_DWORD *)v9 && *v11 && sub_517B60(*(char ***)v9, *v11) ) /*0x4fa6f4*/
        return 1; /*0x4fa6fb*/
      v9 = *(_DWORD *)(v9 + 4); /*0x4fa6fd*/
      v11 = (int *)v11[1]; /*0x4fa702*/
      if ( !v9 ) /*0x4fa705*/
        break; /*0x4fa705*/
    }
  }
  v15 = (_DWORD *)(a2 + 0x44); /*0x4fa707*/
  v16 = 0; /*0x4fa70a*/
  v17 = this + 0x10; /*0x4fa70e*/
  v18 = (_DWORD *)(a2 + 0x44); /*0x4fa711*/
  if ( a2 != 0xFFFFFFBC ) /*0x4fa713*/
  {
    do /*0x4fa722*/
    {
      if ( *v18 ) /*0x4fa715*/
        ++v16; /*0x4fa71a*/
      v18 = (_DWORD *)v18[1]; /*0x4fa71d*/
    }
    while ( v18 ); /*0x4fa722*/
  }
  v19 = 0; /*0x4fa724*/
  v20 = this + 0x10; /*0x4fa728*/
  if ( this != (int *)0xFFFFFFC0 ) /*0x4fa72a*/
  {
    do /*0x4fa73d*/
    {
      if ( *v20 ) /*0x4fa730*/
        ++v19; /*0x4fa735*/
      v20 = (int *)v20[1]; /*0x4fa738*/
    }
    while ( v20 ); /*0x4fa73d*/
  }
  if ( v16 != v19 ) /*0x4fa741*/
    return 1; /*0x4fa775*/
  if ( a2 != 0xFFFFFFBC ) /*0x4fa745*/
  {
    while ( v17 ) /*0x4fa749*/
    {
      v21 = *v17; /*0x4fa74f*/
      if ( *v15 && v21 && *(_DWORD *)(*v15 + 8) != *(_DWORD *)(v21 + 8) ) /*0x4fa75d*/
        return 1; /*0x4fa75d*/
      v15 = (_DWORD *)v15[1]; /*0x4fa75f*/
      v17 = (int *)v17[1]; /*0x4fa764*/
      if ( !v15 ) /*0x4fa767*/
        return 0; /*0x4fa767*/
    }
  }
  return 0; /*0x4fa662*/
}

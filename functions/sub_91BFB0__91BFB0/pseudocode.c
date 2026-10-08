int __thiscall sub_91BFB0(_DWORD *this, const void **a2)
{
  const void **v2; // ebp
  const void ***v3; // edi
  _DWORD *v4; // eax
  int v6; // eax
  const void ***v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // edi
  _DWORD *v13; // ebp
  int result; // eax
  int v15; // esi
  int v16; // ecx
  _DWORD *v17; // esi
  int v18; // edi
  _DWORD *v19; // ebp
  _DWORD *v20; // ebx
  int k; // esi
  int i; // [esp+18h] [ebp+4h]
  int j; // [esp+18h] [ebp+4h]

  v2 = (const void **)this; /*0x91bfb5*/
  v3 = 0; /*0x91bfb7*/
  if ( this ) /*0x91bfbf*/
    v4 = this + 0xA; /*0x91bfc1*/
  else
    v4 = 0; /*0x91bfc6*/
  sub_899CA0(a2, (int)v4); /*0x91bfcf*/
  if ( v2 ) /*0x91bfd6*/
    v6 = (int)(v2 + 0xB); /*0x91bfd8*/
  else
    v6 = 0; /*0x91bfdd*/
  sub_899D20(a2, v6); /*0x91bfe2*/
  v7 = (const void ***)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x32); /*0x91bff3*/
  if ( v7 ) /*0x91bff8*/
  {
    v7[1] = 0; /*0x91bffa*/
    v7[2] = 0; /*0x91bffd*/
    v7[3] = (const void **)0x80000000; /*0x91c000*/
    v3 = v7; /*0x91c007*/
  }
  *v3 = a2; /*0x91c00c*/
  if ( v2[0xD] == (const void *)((unsigned int)v2[0xE] & 0x3FFFFFFF) ) /*0x91c01c*/
    sub_8A6EE0(v2 + 0xC, 4); /*0x91c021*/
  *((_DWORD *)v2[0xC] + (_DWORD)v2[0xD]) = v3; /*0x91c02e*/
  v2[0xD] = (char *)v2[0xD] + 1; /*0x91c031*/
  v8 = 0; /*0x91c037*/
  for ( i = 0; v8 < (int)a2[0xF]; i = v8 ) /*0x91c03f*/
  {
    v9 = *((_DWORD *)a2[0xE] + v8); /*0x91c044*/
    v10 = *(_DWORD *)(v9 + 0x38); /*0x91c047*/
    v11 = (_DWORD *)(v9 + 0x34); /*0x91c04a*/
    v12 = 0; /*0x91c04d*/
    if ( v10 > 0 ) /*0x91c051*/
    {
      v13 = v2 + 0xA; /*0x91c053*/
      do /*0x91c06a*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 4))(v13, *(_DWORD *)(*v11 + 4 * v12++)); /*0x91c061*/
      while ( v12 < v11[1] ); /*0x91c06a*/
      v2 = (const void **)this; /*0x91c06c*/
      v8 = i; /*0x91c070*/
    }
    ++v8; /*0x91c077*/
  }
  result = 0; /*0x91c083*/
  for ( j = 0; result < (int)a2[0x12]; j = result ) /*0x91c08b*/
  {
    v15 = *((_DWORD *)a2[0x11] + result); /*0x91c093*/
    v16 = *(_DWORD *)(v15 + 0x38); /*0x91c096*/
    v17 = (_DWORD *)(v15 + 0x34); /*0x91c099*/
    v18 = 0; /*0x91c09c*/
    if ( v16 > 0 ) /*0x91c0a0*/
    {
      v19 = v2 + 0xA; /*0x91c0a2*/
      do /*0x91c0b9*/
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v19 + 4))(v19, *(_DWORD *)(*v17 + 4 * v18++)); /*0x91c0b0*/
      while ( v18 < v17[1] ); /*0x91c0b9*/
      result = j; /*0x91c0bb*/
      v2 = (const void **)this; /*0x91c0bf*/
    }
    ++result; /*0x91c0c6*/
  }
  v20 = a2[0xC]; /*0x91c0cf*/
  if ( v20 ) /*0x91c0d4*/
  {
    result = v20[0xE]; /*0x91c0d6*/
    for ( k = 0; k < result; ++k ) /*0x91c0dd*/
    {
      (*((void (__thiscall **)(const void **, _DWORD))v2[0xA] + 1))(v2 + 0xA, *(_DWORD *)(v20[0xD] + 4 * k)); /*0x91c0ed*/
      result = v20[0xE]; /*0x91c0f0*/
    }
  }
  return result; /*0x91c0f8*/
}

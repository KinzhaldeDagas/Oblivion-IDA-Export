// positive sp value has been detected, the output may be wrong!
void __userpurge sub_726C63(signed int a1@<ebx>, int a2@<ebp>, int a3)
{
  void (__cdecl *v3)(int, int, int, int *, int); // eax
  void (__cdecl *v4)(int, int, int, int *, int); // edx
  unsigned int *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  bool v10; // zf
  int v11; // eax
  void (__cdecl *v12)(int, unsigned int *, int, int *, int); // eax
  unsigned int i; // edi
  void (__cdecl *v14)(int, char *, int, int *, int); // edx
  _DWORD *v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // [esp-58h] [ebp-58h]
  int v19; // [esp-44h] [ebp-44h]
  int v20; // [esp-44h] [ebp-44h]
  int v21; // [esp-44h] [ebp-44h]
  char v22; // [esp-19h] [ebp-19h] BYREF
  unsigned int v23; // [esp-18h] [ebp-18h] BYREF
  int v24; // [esp-14h] [ebp-14h] BYREF
  int v25; // [esp-10h] [ebp-10h] BYREF
  unsigned int v26; // [esp-4h] [ebp-4h]

  v19 = *(_DWORD *)(a1 + 0x21C); /*0x726c76*/
  v3 = *(void (__cdecl **)(int, int, int, int *, int))(v19 + 4); /*0x726c77*/
  v24 = 2; /*0x726c7a*/
  v3(v19, a2 + 0xC, 2, &v24, 1); /*0x726c82*/
  v4 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4); /*0x726c8a*/
  v5 = (unsigned int *)(a2 + 0x10); /*0x726c96*/
  v18 = *(_DWORD *)(a1 + 0x21C); /*0x726c9a*/
  v24 = 4; /*0x726c9b*/
  v4(v18, a2 + 0x10, 4, &v24, 1); /*0x726ca3*/
  v6 = *(_DWORD *)(a2 + 0x10); /*0x726ca5*/
  if ( v6 )
  {
    v7 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v6);
    v24 = (int)v7; /*0x726cc9*/
    v26 = 0; /*0x726ccf*/
    if ( v7 ) /*0x726cd7*/
    {
      sub_401080(v7, 0x1C, v6, (void *(__thiscall *)(void *))sub_53D910); /*0x726ce2*/
      v8 = v24; /*0x726ce7*/
    }
    else
    {
      v8 = 0; /*0x726ced*/
    }
    v9 = 0; /*0x726cef*/
    v10 = *v5 == 0; /*0x726cf1*/
    v26 = 0xFFFFFFFF; /*0x726cf3*/
    *(_DWORD *)(a2 + 0x14) = v8; /*0x726cfb*/
    if ( !v10 ) /*0x726cfe*/
    {
      v24 = 0; /*0x726d00*/
      do /*0x726d1b*/
      {
        sub_726510((char *)(v24 + *(_DWORD *)(a2 + 0x14)), a1); /*0x726d0c*/
        v24 += 0x1C; /*0x726d11*/
        ++v9; /*0x726d16*/
      }
      while ( v9 < *v5 ); /*0x726d1b*/
    }
  }
  v11 = *(_DWORD *)(a1 + 0x21C); /*0x726d1d*/
  v23 = 0; /*0x726d31*/
  v20 = v11; /*0x726d39*/
  v12 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v11 + 4); /*0x726d3a*/
  v24 = 4; /*0x726d3d*/
  v12(v20, &v23, 4, &v24, 1); /*0x726d45*/
  NiTArray_SetSize((unsigned __int16 *)(a2 + 0x1C), v23); /*0x726d54*/
  for ( i = 0; i < v23; ++i ) /*0x726d5f*/
  {
    v14 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4); /*0x726d7d*/
    v21 = *(_DWORD *)(a1 + 0x21C); /*0x726d87*/
    v25 = 1; /*0x726d88*/
    v14(v21, &v22, 1, &v25, 1); /*0x726d90*/
    if ( !v22 ) /*0x726d9a*/
    {
      if ( i < *(unsigned __int16 *)(a2 + 0x26) ) /*0x726e28*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) ) /*0x726e36*/
          --*(_WORD *)(a2 + 0x28); /*0x726e3c*/
      }
      else
      {
        *(_WORD *)(a2 + 0x26) = i + 1; /*0x726e2d*/
      }
      *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) = 0; /*0x726e45*/
      continue; /*0x726e45*/
    }
    v15 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2); /*0x726db0*/
    sub_7266D0(v15, a3, i, *(_DWORD *)(a2 + 0x14), *(_DWORD *)(a2 + 0x10), *(_WORD *)(a2 + 0xC)); /*0x726dc1*/
    if ( i < *(unsigned __int16 *)(a2 + 0x26) ) /*0x726dcc*/
    {
      if ( !v15 ) /*0x726dec*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) ) /*0x726e0a*/
          --*(_WORD *)(a2 + 0x28); /*0x726e10*/
LABEL_18:
        *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) = v15; /*0x726e16*/
        a1 = a3; /*0x726e1c*/
        continue; /*0x726e20*/
      }
      v17 = *(_DWORD *)(a2 + 0x20); /*0x726dee*/
      if ( *(_DWORD *)(v17 + 4 * i) ) /*0x726df1*/
        goto LABEL_18; /*0x726df5*/
      ++*(_WORD *)(a2 + 0x28); /*0x726df7*/
      *(_DWORD *)(v17 + 4 * i) = v15; /*0x726dfe*/
      a1 = a3; /*0x726e01*/
    }
    else
    {
      *(_WORD *)(a2 + 0x26) = i + 1; /*0x726dd3*/
      if ( !v15 ) /*0x726dd7*/
        goto LABEL_18; /*0x726dd7*/
      v16 = *(_DWORD *)(a2 + 0x20); /*0x726dd9*/
      ++*(_WORD *)(a2 + 0x28); /*0x726ddc*/
      *(_DWORD *)(v16 + 4 * i) = v15; /*0x726de1*/
      a1 = a3; /*0x726de4*/
    }
  }
}

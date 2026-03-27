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

  v19 = *(_DWORD *)(a1 + 0x21C);
  v3 = *(void (__cdecl **)(int, int, int, int *, int))(v19 + 4);
  v24 = 2;
  v3(v19, a2 + 0xC, 2, &v24, 1);
  v4 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4);
  v5 = (unsigned int *)(a2 + 0x10);
  v18 = *(_DWORD *)(a1 + 0x21C);
  v24 = 4;
  v4(v18, a2 + 0x10, 4, &v24, 1);
  v6 = *(_DWORD *)(a2 + 0x10);
  if ( v6 )
  {
    v7 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * v6);
    v24 = (int)v7;
    v26 = 0;
    if ( v7 )
    {
      sub_401080(v7, 0x1C, v6, (void *(__thiscall *)(void *))sub_53D910);
      v8 = v24;
    }
    else
    {
      v8 = 0;
    }
    v9 = 0;
    v10 = *v5 == 0;
    v26 = 0xFFFFFFFF;
    *(_DWORD *)(a2 + 0x14) = v8;
    if ( !v10 )
    {
      v24 = 0;
      do
      {
        sub_726510((char *)(v24 + *(_DWORD *)(a2 + 0x14)), a1);
        v24 += 0x1C;
        ++v9;
      }
      while ( v9 < *v5 );
    }
  }
  v11 = *(_DWORD *)(a1 + 0x21C);
  v23 = 0;
  v20 = v11;
  v12 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v11 + 4);
  v24 = 4;
  v12(v20, &v23, 4, &v24, 1);
  NiTArray_SetSize((unsigned __int16 *)(a2 + 0x1C), v23);
  for ( i = 0; i < v23; ++i )
  {
    v14 = *(void (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(a1 + 0x21C) + 4);
    v21 = *(_DWORD *)(a1 + 0x21C);
    v25 = 1;
    v14(v21, &v22, 1, &v25, 1);
    if ( !v22 )
    {
      if ( i < *(unsigned __int16 *)(a2 + 0x26) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) )
          --*(_WORD *)(a2 + 0x28);
      }
      else
      {
        *(_WORD *)(a2 + 0x26) = i + 1;
      }
      *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) = 0;
      continue;
    }
    v15 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2);
    sub_7266D0(v15, a3, i, *(_DWORD *)(a2 + 0x14), *(_DWORD *)(a2 + 0x10), *(_WORD *)(a2 + 0xC));
    if ( i < *(unsigned __int16 *)(a2 + 0x26) )
    {
      if ( !v15 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) )
          --*(_WORD *)(a2 + 0x28);
LABEL_18:
        *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4 * i) = v15;
        a1 = a3;
        continue;
      }
      v17 = *(_DWORD *)(a2 + 0x20);
      if ( *(_DWORD *)(v17 + 4 * i) )
        goto LABEL_18;
      ++*(_WORD *)(a2 + 0x28);
      *(_DWORD *)(v17 + 4 * i) = v15;
      a1 = a3;
    }
    else
    {
      *(_WORD *)(a2 + 0x26) = i + 1;
      if ( !v15 )
        goto LABEL_18;
      v16 = *(_DWORD *)(a2 + 0x20);
      ++*(_WORD *)(a2 + 0x28);
      *(_DWORD *)(v16 + 4 * i) = v15;
      a1 = a3;
    }
  }
}

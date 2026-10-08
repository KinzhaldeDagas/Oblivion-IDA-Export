int __cdecl sub_908DE0(__m128 **a1, int a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  _DWORD *v9; // ebx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  unsigned __int64 v12; // rax
  int v13; // eax
  char *v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // ebx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  int v23; // eax
  char *v25; // [esp+34h] [ebp-49Ch]
  int v26; // [esp+38h] [ebp-498h]
  int v27; // [esp+38h] [ebp-498h]
  char v28; // [esp+3Fh] [ebp-491h] BYREF
  _DWORD v29[4]; // [esp+40h] [ebp-490h] BYREF
  _BYTE v30[32]; // [esp+50h] [ebp-480h] BYREF
  __m128 v31[4]; // [esp+70h] [ebp-460h] BYREF
  char *v32; // [esp+B0h] [ebp-420h] BYREF
  int v33; // [esp+B4h] [ebp-41Ch]
  int v34; // [esp+B8h] [ebp-418h]
  char v35; // [esp+BCh] [ebp-414h] BYREF
  _BYTE v36[524]; // [esp+2C0h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x908df1*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908e07*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x908e17*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908e19*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x908e1b*/
    *v7 = "LtBvTree"; /*0x908e21*/
    v7[3] = "QueryTree"; /*0x908e27*/
    v8 = __rdtsc(); /*0x908e2e*/
    v7[1] = v8; /*0x908e38*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4; /*0x908e3e*/
  }
  sub_8B1FF0(v31, *(__m128 **)(a2 + 8), a1[2]); /*0x908e56*/
  (*(void (__thiscall **)(_DWORD, __m128 *, _DWORD, _BYTE *))((*a1)->m128_i32[0] + 0xC))( /*0x908e70*/
    *a1,
    v31,
    *(_DWORD *)(a3 + 8),
    v30);
  v9 = *(_DWORD **)a2; /*0x908e73*/
  v32 = &v35; /*0x908e7c*/
  v33 = 0; /*0x908e8f*/
  v34 = 0x80000080; /*0x908e9a*/
  (*(void (__thiscall **)(_DWORD *, _BYTE *, char **))(*v9 + 0x24))(v9, v30, &v32); /*0x908eaa*/
  v10 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x908eb3*/
  if ( *(_DWORD *)(v10[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v10[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x908ec9*/
  {
    v26 = v10[MEMORY[0xBA9DE4]]; /*0x908ed3*/
    v11 = *(_DWORD **)(v26 + 0x1A4); /*0x908ed7*/
    *v11 = "StNarrowPhase"; /*0x908edd*/
    v12 = __rdtsc(); /*0x908ee3*/
    v11[1] = v12; /*0x908ef1*/
    *(_DWORD *)(v26 + 0x1A4) = v11 + 3; /*0x908ef7*/
  }
  v13 = (*(int (__thiscall **)(_DWORD))((*a1)->m128_i32[0] + 8))(*a1); /*0x908f01*/
  v14 = v32; /*0x908f04*/
  v15 = v9[3]; /*0x908f0e*/
  v27 = v13; /*0x908f11*/
  v29[3] = a2; /*0x908f21*/
  v25 = &v32[4 * v33]; /*0x908f28*/
  v29[2] = *(_DWORD *)(a2 + 8); /*0x908f2c*/
  if ( v32 != v25 ) /*0x908f30*/
  {
    do /*0x908fae*/
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, __m128 **, int, int, _DWORD))(a3 + 4))( /*0x908f4f*/
                       *(_DWORD *)(a3 + 4),
                       &v28,
                       a3,
                       a1,
                       a2,
                       v15,
                       *(_DWORD *)v14) )
      {
        v16 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v15 + 0x28))(v15, *(_DWORD *)v14, v36); /*0x908f63*/
        v29[1] = *(_DWORD *)v14; /*0x908f68*/
        v29[0] = v16; /*0x908f6c*/
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16); /*0x908f74*/
        (*(void (__cdecl **)(__m128 **, _DWORD *, int, int))(*(_DWORD *)a3 /*0x908f9b*/
                                                           + 0x14
                                                           * *(unsigned __int8 *)(*(_DWORD *)a3
                                                                                + 0x20 * v27
                                                                                + v17
                                                                                + 0x190)
                                                           + 0x998))(
          a1,
          v29,
          a3,
          a4);
      }
      v14 += 4; /*0x908fa9*/
    }
    while ( v14 != v25 ); /*0x908fae*/
    v14 = v32; /*0x908fb0*/
  }
  v18 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x908fb7*/
  v19 = MEMORY[0xBA9DE4]; /*0x908fbe*/
  LODWORD(v20) = v18[MEMORY[0xBA9DE4]]; /*0x908fc4*/
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x908fd3*/
  {
    v21 = v18[MEMORY[0xBA9DE4]]; /*0x908fd5*/
    v22 = *(_DWORD **)(v20 + 0x1A4); /*0x908fd7*/
    *v22 = "lt"; /*0x908fdd*/
    v20 = __rdtsc(); /*0x908fe3*/
    v22[1] = v20; /*0x908fed*/
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3; /*0x908ff3*/
    v14 = v32; /*0x908ff9*/
  }
  if ( v34 >= 0 ) /*0x909009*/
  {
    v23 = *(_DWORD *)(v18[v19] + 0x19C); /*0x90900e*/
    if ( !v23 ) /*0x909016*/
      v23 = unk_BA7D9C; /*0x909018*/
    LODWORD(v20) = sub_8A75D0(v23, v14, 4 * v34, 0x14); /*0x90902c*/
  }
  return v20; /*0x909031*/
}

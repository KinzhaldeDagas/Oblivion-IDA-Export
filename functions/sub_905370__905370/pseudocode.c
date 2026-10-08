int __cdecl sub_905370(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // edx
  _DWORD *i; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+24h] [ebp-228h]
  char v21; // [esp+2Bh] [ebp-221h] BYREF
  _DWORD v22[4]; // [esp+2Ch] [ebp-220h] BYREF
  _BYTE v23[524]; // [esp+3Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x905388*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905396*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x9053a7*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9053a9*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x9053ab*/
    *v8 = "TtShapeCollection"; /*0x9053b1*/
    v9 = __rdtsc(); /*0x9053b7*/
    v8[1] = v9; /*0x9053c1*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x9053c7*/
  }
  v10 = *a1; /*0x9053d6*/
  v22[2] = a1[2]; /*0x9053d8*/
  v11 = *a2; /*0x9053dc*/
  v22[3] = a1; /*0x9053de*/
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x9053eb*/
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x20))(v10); /*0x9053f2*/
  if ( v12 != 0xFFFFFFFF ) /*0x9053f7*/
  {
    do /*0x9054a7*/
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, int))(a3 + 4))( /*0x905417*/
                       *(_DWORD *)(a3 + 4),
                       &v21,
                       a3,
                       a2,
                       a1,
                       v10,
                       v12) )
      {
        v22[0] = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v10 + 0x28))(v10, v12, v23); /*0x90542d*/
        v22[1] = v12; /*0x905431*/
        v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v22[0] + 8))(v22[0]); /*0x905439*/
        if ( v20 == 0x18 ) /*0x905441*/
        {
          v14 = a2; /*0x905443*/
          for ( i = (_DWORD *)a2[3]; i; i = (_DWORD *)i[3] ) /*0x90544b*/
            v14 = i; /*0x905450*/
          if ( (v14[7] & 0x2000) != 0 ) /*0x90545f*/
            v20 = 3; /*0x905461*/
        }
        (*(void (__cdecl **)(_DWORD *, _DWORD *, int, int, int))(*(_DWORD *)a3 /*0x905494*/
                                                               + 0x14
                                                               * (*(unsigned __int8 *)(*(_DWORD *)a3
                                                                                     + 0x20 * v13
                                                                                     + v20
                                                                                     + 0x190)
                                                                + 0x7B)))(
          v22,
          a2,
          a3,
          a4,
          a5);
      }
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x24))(v10, v12); /*0x9054a2*/
    }
    while ( v12 != 0xFFFFFFFF ); /*0x9054a7*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9054ad*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9054ba*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x9054c9*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9054cb*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x9054cd*/
    *v18 = "Et"; /*0x9054d3*/
    v16 = __rdtsc(); /*0x9054d9*/
    v18[1] = v16; /*0x9054e3*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x9054e9*/
  }
  return v16; /*0x9054ef*/
}

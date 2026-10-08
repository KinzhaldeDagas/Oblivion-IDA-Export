int __cdecl sub_9050F0(int *a1, int *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // ecx
  int v17; // [esp+24h] [ebp-228h]
  char v18; // [esp+2Bh] [ebp-221h] BYREF
  _DWORD v19[4]; // [esp+2Ch] [ebp-220h] BYREF
  _BYTE v20[524]; // [esp+3Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x905108*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905116*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x905127*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905129*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x90512b*/
    *v7 = "TtShapeCollection"; /*0x905131*/
    v8 = __rdtsc(); /*0x905137*/
    v7[1] = v8; /*0x905141*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x905147*/
  }
  v9 = *a1; /*0x905156*/
  v19[2] = a1[2]; /*0x905158*/
  v10 = *a2; /*0x90515c*/
  v19[3] = a1; /*0x90515e*/
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x90516b*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x20))(v9); /*0x905172*/
  if ( v11 != 0xFFFFFFFF ) /*0x905177*/
  {
    do /*0x9051f3*/
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, int *, int *, int, int))(a3 + 4))( /*0x905197*/
                       *(_DWORD *)(a3 + 4),
                       &v18,
                       a3,
                       a2,
                       a1,
                       v9,
                       v11) )
      {
        v19[0] = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 0x28))(v9, v11, v20); /*0x9051a9*/
        v19[1] = v11; /*0x9051ad*/
        v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v19[0] + 8))(v19[0]); /*0x9051b5*/
        (*(void (__cdecl **)(_DWORD *, int *, int, int))(*(_DWORD *)a3 /*0x9051dc*/
                                                       + 0x14
                                                       * *(unsigned __int8 *)(*(_DWORD *)a3 + 0x20 * v12 + v17 + 0x190)
                                                       + 0x998))(
          v19,
          a2,
          a3,
          a4);
      }
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, v11); /*0x9051ee*/
    }
    while ( v11 != 0xFFFFFFFF ); /*0x9051f3*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9051f5*/
  }
  LODWORD(v13) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905202*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x905211*/
  {
    v14 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905213*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x905215*/
    *v15 = "Et"; /*0x90521b*/
    v13 = __rdtsc(); /*0x905221*/
    v15[1] = v13; /*0x90522b*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x905231*/
  }
  return v13; /*0x905237*/
}

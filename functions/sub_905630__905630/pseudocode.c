int __cdecl sub_905630(int *a1, int *a2, int a3, int a4)
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x905648*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905656*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x905667*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x905669*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x90566b*/
    *v7 = "TtShapeCollection"; /*0x905671*/
    v8 = __rdtsc(); /*0x905677*/
    v7[1] = v8; /*0x905681*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x905687*/
  }
  v9 = *a1; /*0x905696*/
  v19[2] = a1[2]; /*0x905698*/
  v10 = *a2; /*0x90569c*/
  v19[3] = a1; /*0x90569e*/
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x9056ab*/
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x20))(v9); /*0x9056b2*/
  if ( v11 != 0xFFFFFFFF ) /*0x9056b7*/
  {
    do /*0x90573d*/
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, int *, int *, int, int))(a3 + 4))( /*0x9056d7*/
                       *(_DWORD *)(a3 + 4),
                       &v18,
                       a3,
                       a2,
                       a1,
                       v9,
                       v11) )
      {
        v19[0] = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 0x28))(v9, v11, v20); /*0x9056e9*/
        v19[1] = v11; /*0x9056ed*/
        v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v19[0] + 8))(v19[0]); /*0x9056f5*/
        (*(void (__cdecl **)(_DWORD *, int *, int, int))(*(_DWORD *)a3 /*0x90571c*/
                                                       + 0x14
                                                       * *(unsigned __int8 *)(*(_DWORD *)a3 + 0x20 * v12 + v17 + 0x190)
                                                       + 0x994))(
          v19,
          a2,
          a3,
          a4);
        if ( *(_BYTE *)(a4 + 4) ) /*0x905726*/
          break; /*0x90572e*/
      }
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x24))(v9, v11); /*0x905738*/
    }
    while ( v11 != 0xFFFFFFFF ); /*0x90573d*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90573f*/
  }
  LODWORD(v13) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90574c*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x90575b*/
  {
    v14 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90575d*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x90575f*/
    *v15 = "Et"; /*0x905765*/
    v13 = __rdtsc(); /*0x90576b*/
    v15[1] = v13; /*0x905775*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x90577b*/
  }
  return v13; /*0x905781*/
}

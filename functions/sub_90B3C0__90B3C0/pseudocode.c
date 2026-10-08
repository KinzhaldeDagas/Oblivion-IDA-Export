int __cdecl sub_90B3C0(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // ebx
  _DWORD *v17; // ecx
  _DWORD v19[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b3c4*/
  v5 = MEMORY[0xBA9DE4]; /*0x90b3cc*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b3d2*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90b3e2*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b3e4*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90b3e6*/
    *v8 = "TthkBvAgent"; /*0x90b3ec*/
    v9 = __rdtsc(); /*0x90b3f2*/
    v8[1] = v9; /*0x90b3fc*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x90b402*/
  }
  v10 = a1[2]; /*0x90b40c*/
  v11 = *a1; /*0x90b40f*/
  v19[3] = a1; /*0x90b411*/
  v19[2] = v10; /*0x90b415*/
  v12 = *(_DWORD *)(v11 + 0xC); /*0x90b419*/
  v19[1] = a1[1]; /*0x90b41f*/
  v19[0] = v12; /*0x90b423*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x90b433*/
  v14 = *(unsigned __int8 *)(*a3 + 0x20 * v13 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190); /*0x90b445*/
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int))(*a3 + 0x14 * v14 + 0x994))(v19, a2, a3, a4); /*0x90b45c*/
  LODWORD(v15) = ThreadLocalStoragePointer[v5]; /*0x90b463*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x90b478*/
  {
    v16 = ThreadLocalStoragePointer[v5]; /*0x90b47a*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x90b47c*/
    *v17 = "Et"; /*0x90b482*/
    v15 = __rdtsc(); /*0x90b488*/
    v17[1] = v15; /*0x90b492*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x90b498*/
  }
  return v15; /*0x90b49e*/
}

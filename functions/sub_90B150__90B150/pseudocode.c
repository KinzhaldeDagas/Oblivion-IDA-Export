int __cdecl sub_90B150(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v13; // esi
  void (__cdecl *v14)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)); // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int (__stdcall **v26)(char); // [esp+8h] [ebp-18h] BYREF
  char v27; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h] BYREF
  int v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  _DWORD *v31; // [esp+1Ch] [ebp-4h]
  int v32; // [esp+28h] [ebp+8h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b150*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b15d*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x90b171*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b173*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x90b175*/
    *v7 = "LthkBvAgent"; /*0x90b17b*/
    v7[3] = "checkBvShape"; /*0x90b181*/
    v8 = __rdtsc(); /*0x90b188*/
    v26 = (int (__stdcall **)(char))v8; /*0x90b18a*/
    v7[1] = v8; /*0x90b192*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4; /*0x90b198*/
  }
  v9 = a1[2]; /*0x90b1a2*/
  v10 = *a1; /*0x90b1a6*/
  v31 = a1; /*0x90b1a8*/
  v30 = v9; /*0x90b1ac*/
  v11 = *(_DWORD *)(v10 + 0xC); /*0x90b1b0*/
  v29 = a1[1]; /*0x90b1b6*/
  v28 = v11; /*0x90b1ba*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x90b1cd*/
  v32 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x90b1da*/
  v14 = *(void (__cdecl **)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)))(*a3 /*0x90b1f3*/
                                                                                 + 0x14
                                                                                 * *(unsigned __int8 *)(*a3 + 0x20 * v13 + v32 + 0x190)
                                                                                 + 0x994);
  v26 = &off_A9BB84; /*0x90b201*/
  v27 = 0; /*0x90b209*/
  v14(&v28, a2, a3, &v26); /*0x90b20e*/
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b214*/
  if ( v27 ) /*0x90b220*/
  {
    v16 = v15[MEMORY[0xBA9DE4]]; /*0x90b22c*/
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x90b23b*/
    {
      v17 = v15[MEMORY[0xBA9DE4]]; /*0x90b23d*/
      v18 = *(_DWORD **)(v16 + 0x1A4); /*0x90b23f*/
      *v18 = "Stchild"; /*0x90b245*/
      v19 = __rdtsc(); /*0x90b24b*/
      v18[1] = v19; /*0x90b255*/
      *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x90b25b*/
      v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b261*/
    }
    v20 = *(_DWORD *)(v10 + 0x10); /*0x90b26c*/
    v29 = v31[1]; /*0x90b272*/
    v28 = v20; /*0x90b276*/
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 8))(v20); /*0x90b27c*/
    (*(void (__cdecl **)(int *, _DWORD *, _DWORD *, int))(*a3 /*0x90b2a1*/
                                                        + 0x14 * *(unsigned __int8 *)(*a3 + 0x20 * v21 + v32 + 0x190)
                                                        + 0x998))(
      &v28,
      a2,
      a3,
      a4);
  }
  LODWORD(v22) = v15[MEMORY[0xBA9DE4]]; /*0x90b2b1*/
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x90b2c2*/
  {
    v23 = v15[MEMORY[0xBA9DE4]]; /*0x90b2c4*/
    v24 = *(_DWORD **)(v22 + 0x1A4); /*0x90b2c6*/
    *v24 = "lt"; /*0x90b2cc*/
    v22 = __rdtsc(); /*0x90b2d2*/
    v24[1] = v22; /*0x90b2dc*/
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x90b2e2*/
  }
  return v22; /*0x90b2e8*/
}

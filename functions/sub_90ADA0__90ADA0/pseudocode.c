int __cdecl sub_90ADA0(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  void (__cdecl *v14)(int *, _DWORD *, _DWORD *, _DWORD *, _DWORD *); // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int v26; // [esp+18h] [ebp-48h]
  int v27; // [esp+1Ch] [ebp-44h]
  int v28; // [esp+20h] [ebp-40h] BYREF
  int v29; // [esp+24h] [ebp-3Ch]
  int v30; // [esp+28h] [ebp-38h]
  _DWORD *v31; // [esp+2Ch] [ebp-34h]
  _DWORD v32[2]; // [esp+30h] [ebp-30h] BYREF
  char v33; // [esp+38h] [ebp-28h]
  int v34; // [esp+5Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90ada9*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90adb6*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90adc8*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90adca*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90adcc*/
    *v8 = "LthkBvAgent"; /*0x90add2*/
    v8[3] = "checkBvShape"; /*0x90add8*/
    v9 = __rdtsc(); /*0x90addf*/
    v8[1] = v9; /*0x90ade9*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x90adef*/
  }
  v10 = a1[2]; /*0x90adf8*/
  v11 = *a1; /*0x90adfb*/
  v31 = a1; /*0x90adfd*/
  v30 = v10; /*0x90ae01*/
  v12 = *(_DWORD *)(v11 + 0xC); /*0x90ae05*/
  v29 = a1[1]; /*0x90ae0b*/
  v28 = v12; /*0x90ae0f*/
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12); /*0x90ae1f*/
  v27 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x90ae29*/
  v14 = *(void (__cdecl **)(int *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(*a3 /*0x90ae43*/
                                                                          + 0x14
                                                                          * (*(unsigned __int8 *)(*a3
                                                                                                + 0x20 * v13
                                                                                                + v27
                                                                                                + 0x190)
                                                                           + 0x7B));
  v32[0] = &off_A9BB8C; /*0x90ae55*/
  v33 = 0; /*0x90ae5d*/
  v34 = 0x7F7FFFFF; /*0x90ae62*/
  v32[1] = 0x7F7FFFFF; /*0x90ae6a*/
  v14(&v28, a2, a3, v32, v32); /*0x90ae72*/
  if ( v33 ) /*0x90ae7d*/
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90ae83*/
    if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x90ae9e*/
    {
      v16 = v15[MEMORY[0xBA9DE4]]; /*0x90aea5*/
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x90aea8*/
      v26 = v16; /*0x90aeae*/
      *v17 = "Stchild"; /*0x90aeb2*/
      v18 = __rdtsc(); /*0x90aeb8*/
      v17[1] = v18; /*0x90aec6*/
      *(_DWORD *)(v26 + 0x1A4) = v17 + 3; /*0x90aecc*/
    }
    v19 = *(_DWORD *)(v11 + 0x10); /*0x90aed6*/
    v29 = v31[1]; /*0x90aedc*/
    v28 = v19; /*0x90aee0*/
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19); /*0x90aee6*/
    (*(void (__cdecl **)(int *, _DWORD *, _DWORD *, int, int))(*a3 /*0x90af11*/
                                                             + 0x14
                                                             * (*(unsigned __int8 *)(*a3 + 0x20 * v20 + v27 + 0x190)
                                                              + 0x7B)))(
      &v28,
      a2,
      a3,
      a4,
      a5);
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90af17*/
  LODWORD(v22) = v21[MEMORY[0xBA9DE4]]; /*0x90af24*/
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x90af33*/
  {
    v23 = v21[MEMORY[0xBA9DE4]]; /*0x90af35*/
    v24 = *(_DWORD **)(v22 + 0x1A4); /*0x90af37*/
    *v24 = "lt"; /*0x90af3d*/
    v22 = __rdtsc(); /*0x90af43*/
    v24[1] = v22; /*0x90af4d*/
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x90af53*/
  }
  return v22; /*0x90af59*/
}

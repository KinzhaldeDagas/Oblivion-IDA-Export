int __thiscall sub_90AF60(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int (__stdcall **v30)(char); // [esp+10h] [ebp-18h] BYREF
  int v31; // [esp+14h] [ebp-14h]
  int v32; // [esp+18h] [ebp-10h] BYREF
  int v33; // [esp+1Ch] [ebp-Ch]
  int v34; // [esp+20h] [ebp-8h]
  _DWORD *v35; // [esp+24h] [ebp-4h]
  int v36; // [esp+2Ch] [ebp+4h]
  int v37; // [esp+34h] [ebp+Ch]
  int v38; // [esp+34h] [ebp+Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90af6f*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90af76*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90af85*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90af87*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x90af89*/
    *v9 = "LthkBvAgent"; /*0x90af8f*/
    v9[3] = "checkBvShape"; /*0x90af95*/
    v10 = __rdtsc(); /*0x90af9c*/
    v30 = (int (__stdcall **)(char))v10; /*0x90af9e*/
    v9[1] = v10; /*0x90afa6*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x90afac*/
  }
  v11 = *a2; /*0x90afb9*/
  v34 = a2[2]; /*0x90afc3*/
  v35 = a2; /*0x90afc7*/
  v13 = *(_DWORD *)(v11 + 0xC); /*0x90afce*/
  v33 = a2[1]; /*0x90afd1*/
  v32 = v13; /*0x90afdb*/
  v14 = *(this + 3); /*0x90afdf*/
  v30 = &off_A9BB84; /*0x90afe7*/
  LOBYTE(v31) = 0; /*0x90afef*/
  (*(void (__thiscall **)(int, int *, _DWORD *, int *, int (__stdcall ***)(char)))(*(_DWORD *)v14 + 8))( /*0x90aff7*/
    v14,
    &v32,
    a3,
    a4,
    &v30);
  if ( (_BYTE)v31 ) /*0x90b000*/
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b006*/
    if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x90b021*/
    {
      v16 = v15[MEMORY[0xBA9DE4]]; /*0x90b028*/
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x90b02b*/
      v37 = v16; /*0x90b031*/
      *v17 = "Stchild"; /*0x90b035*/
      v18 = __rdtsc(); /*0x90b03b*/
      v17[1] = v18; /*0x90b049*/
      *(_DWORD *)(v37 + 0x1A4) = v17 + 3; /*0x90b04f*/
    }
    v19 = *(_DWORD *)(v11 + 0x10); /*0x90b05c*/
    v33 = v35[1]; /*0x90b05f*/
    v20 = *(this + 4); /*0x90b063*/
    v32 = v19; /*0x90b068*/
    if ( !v20 ) /*0x90b06c*/
    {
      v38 = *(this + 2); /*0x90b074*/
      v36 = *a4; /*0x90b07a*/
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19); /*0x90b083*/
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x90b087*/
      if ( *((_BYTE *)a4 + 0xC) ) /*0x90b08a*/
        v23 = v36 + 0x590; /*0x90b095*/
      else
        v23 = v36 + 0x190; /*0x90b09d*/
      *(this + 4) = (*(int (__cdecl **)(int *, _DWORD *, int *, int))(v36 /*0x90b0cb*/
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                    + 0x990))(
                      &v32,
                      a3,
                      a4,
                      v38);
    }
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int *, int))(*(_DWORD *)*(this + 4) + 0xC))( /*0x90b0e1*/
      *(this + 4),
      &v32,
      a3,
      a4,
      a5);
  }
  else
  {
    v24 = *(this + 4); /*0x90b0e6*/
    if ( v24 ) /*0x90b0eb*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x18))(v24); /*0x90b0ef*/
      *(this + 4) = 0; /*0x90b0f2*/
    }
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b0f9*/
  LODWORD(v26) = v25[MEMORY[0xBA9DE4]]; /*0x90b106*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x90b115*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x90b117*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x90b119*/
    *v28 = "lt"; /*0x90b11f*/
    v26 = __rdtsc(); /*0x90b125*/
    v28[1] = v26; /*0x90b12f*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x90b135*/
  }
  return v26; /*0x90b13b*/
}

int __thiscall sub_90A9A0(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4, int a5)
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
  int (__stdcall **v30)(char); // [esp+14h] [ebp-18h] BYREF
  int v31; // [esp+18h] [ebp-14h]
  int v32; // [esp+1Ch] [ebp-10h] BYREF
  int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  _DWORD *v35; // [esp+28h] [ebp-4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+38h] [ebp+Ch]
  int v38; // [esp+38h] [ebp+Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90a9af*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90a9b6*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90a9c5*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90a9c7*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x90a9c9*/
    *v9 = "LthkBvAgent"; /*0x90a9cf*/
    v9[3] = "checkBvShape"; /*0x90a9d5*/
    v10 = __rdtsc(); /*0x90a9dc*/
    v9[1] = v10; /*0x90a9e6*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x90a9ec*/
  }
  v11 = *a2; /*0x90a9f9*/
  v34 = a2[2]; /*0x90aa03*/
  v35 = a2; /*0x90aa07*/
  v13 = *(_DWORD *)(v11 + 0xC); /*0x90aa0e*/
  v33 = a2[1]; /*0x90aa11*/
  v32 = v13; /*0x90aa1b*/
  v14 = *(this + 3); /*0x90aa1f*/
  v30 = &off_A9BB84; /*0x90aa27*/
  LOBYTE(v31) = 0; /*0x90aa2f*/
  (*(void (__thiscall **)(int, int *, _DWORD *, int *, int (__stdcall ***)(char)))(*(_DWORD *)v14 + 8))( /*0x90aa37*/
    v14,
    &v32,
    a3,
    a4,
    &v30);
  if ( (_BYTE)v31 ) /*0x90aa40*/
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90aa46*/
    if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x90aa61*/
    {
      v16 = v15[MEMORY[0xBA9DE4]]; /*0x90aa68*/
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x90aa6b*/
      v37 = v16; /*0x90aa71*/
      *v17 = "Stchild"; /*0x90aa75*/
      v18 = __rdtsc(); /*0x90aa7b*/
      v17[1] = v18; /*0x90aa89*/
      *(_DWORD *)(v37 + 0x1A4) = v17 + 3; /*0x90aa8f*/
    }
    v19 = *(_DWORD *)(v11 + 0x10); /*0x90aa9c*/
    v33 = v35[1]; /*0x90aa9f*/
    v20 = *(this + 4); /*0x90aaa3*/
    v32 = v19; /*0x90aaa8*/
    if ( !v20 ) /*0x90aaac*/
    {
      v38 = *(this + 2); /*0x90aab4*/
      v36 = *a4; /*0x90aaba*/
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19); /*0x90aac3*/
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x90aac7*/
      if ( *((_BYTE *)a4 + 0xC) ) /*0x90aaca*/
        v23 = v36 + 0x590; /*0x90aad5*/
      else
        v23 = v36 + 0x190; /*0x90aadd*/
      *(this + 4) = (*(int (__cdecl **)(int *, _DWORD *, int *, int))(v36 /*0x90ab0b*/
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                    + 0x990))(
                      &v32,
                      a3,
                      a4,
                      v38);
    }
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int *, int))(*(_DWORD *)*(this + 4) + 0x14))( /*0x90ab21*/
      *(this + 4),
      &v32,
      a3,
      a4,
      a5);
  }
  else
  {
    v24 = *(this + 4); /*0x90ab26*/
    if ( v24 ) /*0x90ab2b*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x18))(v24); /*0x90ab2f*/
      *(this + 4) = 0; /*0x90ab32*/
    }
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90ab39*/
  LODWORD(v26) = v25[MEMORY[0xBA9DE4]]; /*0x90ab46*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x90ab55*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x90ab57*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x90ab59*/
    *v28 = "lt"; /*0x90ab5f*/
    v26 = __rdtsc(); /*0x90ab65*/
    v28[1] = v26; /*0x90ab6f*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x90ab75*/
  }
  return v26; /*0x90ab7b*/
}

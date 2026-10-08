bool *__thiscall sub_950F60(int *this, bool *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // edi
  int (__stdcall ***v12)(char *, int, _DWORD, _DWORD); // eax
  int v13; // eax
  float v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  float v21; // [esp+24h] [ebp-23Ch]
  unsigned int v22; // [esp+28h] [ebp-238h]
  char v23; // [esp+2Eh] [ebp-232h] BYREF
  char v24; // [esp+2Fh] [ebp-231h] BYREF
  __int128 v25; // [esp+30h] [ebp-230h] BYREF
  int v26; // [esp+40h] [ebp-220h]
  float v27; // [esp+44h] [ebp-21Ch]
  _BYTE v28[524]; // [esp+50h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x950f72*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x950f89*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x950f99*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x950f9b*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x950f9d*/
    *v8 = "TtrcConvxPiece"; /*0x950fa3*/
    v9 = __rdtsc(); /*0x950fa9*/
    v8[1] = v9; /*0x950fb3*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x950fb9*/
  }
  v10 = *(this + 8); /*0x950fbf*/
  v11 = 0; /*0x950fc2*/
  v22 = 0xFFFFFFFF; /*0x950fc6*/
  v27 = 1.0; /*0x950fce*/
  v21 = 3.4028235e38; /*0x950fd6*/
  if ( v10 > 0 ) /*0x950fde*/
  {
    do /*0x95106b*/
    {
      v12 = *(int (__stdcall ****)(char *, int, _DWORD, _DWORD))(a3 + 0x24); /*0x950fe7*/
      if ( !v12 || *(_BYTE *)(**v12)(&v24, a3, *(this + 6), *(_DWORD *)(*(this + 7) + 4 * v11)) ) /*0x951005*/
      {
        v13 = (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)*(this + 6) + 0x28))( /*0x95101b*/
                *(this + 6),
                *(_DWORD *)(*(this + 7) + 4 * v11),
                v28);
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, __int128 *))(*(_DWORD *)v13 + 0x14))( /*0x951030*/
                         v13,
                         &v23,
                         a3,
                         &v25) )
        {
          if ( v27 < (double)v21 ) /*0x951042*/
          {
            v14 = v27; /*0x951047*/
            v15 = v26; /*0x95104b*/
            v22 = v11; /*0x951054*/
            v21 = v27; /*0x951058*/
            *(__int128 *)a4 = v25; /*0x95105c*/
            *(_DWORD *)(a4 + 0x10) = v15; /*0x95105f*/
            *(float *)(a4 + 0x14) = v14; /*0x951062*/
          }
        }
      }
      ++v11; /*0x951068*/
    }
    while ( v11 < *(this + 8) ); /*0x95106b*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x951071*/
  }
  v16 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x95107e*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x95108d*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x95108f*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x951091*/
    *v18 = "Et"; /*0x951097*/
    v19 = __rdtsc(); /*0x95109d*/
    v18[1] = v19; /*0x9510a7*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x9510ad*/
  }
  *a2 = v22 != 0xFFFFFFFF; /*0x9510be*/
  return a2; /*0x9510c0*/
}

int __thiscall sub_908C70(__m128 *this, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // esi
  int v16; // eax
  __int32 v17; // ebx
  int v18; // ecx
  int i; // edi
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  _DWORD v27[4]; // [esp+1Ch] [ebp-220h] BYREF
  _BYTE v28[524]; // [esp+2Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x908c83*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908c99*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x908ca9*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908cab*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x908cad*/
    *v9 = "LtBvTree"; /*0x908cb3*/
    v9[3] = "QueryTree"; /*0x908cb9*/
    v10 = __rdtsc(); /*0x908cc0*/
    v9[1] = v10; /*0x908cca*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x908cd0*/
  }
  sub_9069E0(this, a2, (int)a3, a4); /*0x908ce4*/
  v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908cef*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x908cfe*/
  {
    v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908d00*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x908d02*/
    *v13 = "StNarrowPhase"; /*0x908d08*/
    v14 = __rdtsc(); /*0x908d0e*/
    v13[1] = v14; /*0x908d18*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x908d1e*/
  }
  v15 = this->m128_i32[3]; /*0x908d24*/
  v16 = a3[2]; /*0x908d2d*/
  v17 = v15 + 0xC * *((_DWORD *)this + 4); /*0x908d32*/
  v18 = *a3; /*0x908d37*/
  v27[3] = a3; /*0x908d39*/
  v27[2] = v16; /*0x908d3d*/
  for ( i = *(_DWORD *)(v18 + 0xC); v15 != v17; v15 += 0xC ) /*0x908d44*/
  {
    v20 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)i + 0x28))(i, *(_DWORD *)v15, v28); /*0x908d52*/
    v21 = *(_DWORD *)v15; /*0x908d55*/
    v27[0] = v20; /*0x908d57*/
    v27[1] = v21; /*0x908d67*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(**(_DWORD **)(v15 + 8) + 0xC))( /*0x908d75*/
      *(_DWORD *)(v15 + 8),
      a2,
      v27,
      a4,
      a5);
  }
  v22 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x908d7f*/
  LODWORD(v23) = v22[MEMORY[0xBA9DE4]]; /*0x908d8c*/
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) ) /*0x908d9b*/
  {
    v24 = v22[MEMORY[0xBA9DE4]]; /*0x908d9d*/
    v25 = *(_DWORD **)(v23 + 0x1A4); /*0x908d9f*/
    *v25 = "lt"; /*0x908da5*/
    v23 = __rdtsc(); /*0x908dab*/
    v25[1] = v23; /*0x908db5*/
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3; /*0x908dbb*/
  }
  return v23; /*0x908dc1*/
}

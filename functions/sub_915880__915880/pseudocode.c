int __thiscall sub_915880(void *this, int a2, int a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  __m128 v13; // xmm0
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  __m128 v19[2]; // [esp+30h] [ebp-230h] BYREF
  _BYTE v20[524]; // [esp+50h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91589b*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9158a9*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x9158bb*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9158bd*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x9158bf*/
    *v8 = "TthkShapeCollection::getAabb"; /*0x9158c5*/
    v9 = __rdtsc(); /*0x9158cb*/
    v8[1] = v9; /*0x9158d5*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x9158db*/
  }
  *a4 = 0; /*0x9158e7*/
  a4[1] = 0; /*0x9158ea*/
  v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x9158f5*/
  if ( v10 != 0xFFFFFFFF ) /*0x9158fa*/
  {
    v11 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, v10, v20); /*0x915906*/
    (*(void (__thiscall **)(int, int, int, __m128 *))(*(_DWORD *)v11 + 0xC))(v11, a2, a3, a4); /*0x915916*/
    do /*0x91596c*/
    {
      v12 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, v10, v20); /*0x91592a*/
      (*(void (__thiscall **)(int, int, int, __m128 *))(*(_DWORD *)v12 + 0xC))(v12, a2, a3, v19); /*0x91593e*/
      v13 = v19[1]; /*0x91594c*/
      *a4 = _mm_min_ps(*a4, v19[0]); /*0x915951*/
      a4[1] = _mm_max_ps(a4[1], v13); /*0x91595b*/
      v10 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, v10); /*0x915967*/
    }
    while ( v10 != 0xFFFFFFFF ); /*0x91596c*/
  }
  v14 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91596e*/
  LODWORD(v15) = v14[MEMORY[0xBA9DE4]]; /*0x91597b*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x91598a*/
  {
    v16 = v14[MEMORY[0xBA9DE4]]; /*0x91598c*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x91598e*/
    *v17 = "Et"; /*0x915994*/
    v15 = __rdtsc(); /*0x91599a*/
    v17[1] = v15; /*0x9159a4*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x9159aa*/
  }
  return v15; /*0x9159b0*/
}

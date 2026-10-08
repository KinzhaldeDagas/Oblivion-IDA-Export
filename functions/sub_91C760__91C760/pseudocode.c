int __thiscall sub_91C760(_DWORD *this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v4; // edi
  int v5; // eax
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __m128 v15; // xmm1
  int v16; // eax
  bool v17; // cf
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // eax
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int i; // [esp+30h] [ebp-54h]
  __m128 v31; // [esp+44h] [ebp-40h] BYREF
  __m128 v32; // [esp+54h] [ebp-30h] BYREF
  __m128 v33; // [esp+64h] [ebp-20h] BYREF
  __m128 v34; // [esp+74h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91c76b*/
  v4 = MEMORY[0xBA9DE4]; /*0x91c773*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91c779*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x91c78c*/
  {
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x91c78e*/
    *v7 = "TthkRigidBodyCentreOfMassViewer"; /*0x91c794*/
    v8 = __rdtsc(); /*0x91c79a*/
    HIDWORD(v8) = v8; /*0x91c7a0*/
    LODWORD(v8) = ThreadLocalStoragePointer[v4]; /*0x91c7a4*/
    v7[1] = HIDWORD(v8); /*0x91c7a7*/
    *(_DWORD *)(v8 + 0x1A4) = v7 + 3; /*0x91c7ad*/
  }
  for ( i = 0; i < *(this + 2); ++i ) /*0x91c7c0*/
  {
    if ( *(float *)&SrcStr != sub_89DA90((float *)*(_DWORD *)(*(_DWORD *)(*(this + 1) + 4 * i) + 0x50)) ) /*0x91c7e5*/
    {
      v9 = ThreadLocalStoragePointer[v4]; /*0x91c7eb*/
      if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) ) /*0x91c7fa*/
      {
        v10 = *(_DWORD **)(v9 + 0x1A4); /*0x91c7fc*/
        *v10 = "TtgetMassAndLines"; /*0x91c802*/
        v11 = __rdtsc(); /*0x91c808*/
        HIDWORD(v11) = v11; /*0x91c80e*/
        LODWORD(v11) = ThreadLocalStoragePointer[v4]; /*0x91c812*/
        v10[1] = HIDWORD(v11); /*0x91c815*/
        *(_DWORD *)(v11 + 0x1A4) = v10 + 3; /*0x91c81b*/
      }
      v12 = *(this + 1); /*0x91c825*/
      v13 = *(_DWORD *)(v12 + 4 * i); /*0x91c828*/
      v14 = v12 + 4 * i; /*0x91c82b*/
      v31 = *(__m128 *)(*(_DWORD *)(v13 + 0x50) + 0x60); /*0x91c835*/
      v33 = _mm_add_ps(v31, *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x10)); /*0x91c849*/
      v34 = _mm_add_ps(v31, *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x20)); /*0x91c85d*/
      v15 = *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x30); /*0x91c867*/
      v16 = ThreadLocalStoragePointer[v4]; /*0x91c86b*/
      v17 = *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8); /*0x91c874*/
      v32 = _mm_add_ps(v31, v15); /*0x91c87d*/
      if ( v17 ) /*0x91c882*/
      {
        v18 = *(_DWORD **)(v16 + 0x1A4); /*0x91c884*/
        *v18 = "Et"; /*0x91c88a*/
        v19 = __rdtsc(); /*0x91c890*/
        HIDWORD(v19) = v19; /*0x91c896*/
        LODWORD(v19) = ThreadLocalStoragePointer[v4]; /*0x91c89a*/
        v18[1] = HIDWORD(v19); /*0x91c89d*/
        *(_DWORD *)(v19 + 0x1A4) = v18 + 3; /*0x91c8a3*/
      }
      v20 = ThreadLocalStoragePointer[v4]; /*0x91c8a9*/
      if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x91c8b8*/
      {
        v21 = *(_DWORD **)(v20 + 0x1A4); /*0x91c8ba*/
        *v21 = "Ttdisplay3lines"; /*0x91c8c0*/
        v22 = __rdtsc(); /*0x91c8c6*/
        HIDWORD(v22) = v22; /*0x91c8cc*/
        LODWORD(v22) = ThreadLocalStoragePointer[v4]; /*0x91c8d0*/
        v21[1] = HIDWORD(v22); /*0x91c8d3*/
        *(_DWORD *)(v22 + 0x1A4) = v21 + 3; /*0x91c8d9*/
      }
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))( /*0x91c8fa*/
        *(this + 0xFFFFFFFB),
        &v31,
        &v33,
        0xFFFF0000,
        unk_BA8444);
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))( /*0x91c918*/
        *(this + 0xFFFFFFFB),
        &v31,
        &v34,
        0xFF008000,
        unk_BA8444);
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))( /*0x91c936*/
        *(this + 0xFFFFFFFB),
        &v31,
        &v32,
        0xFF0000FF,
        unk_BA8444);
      v23 = ThreadLocalStoragePointer[v4]; /*0x91c939*/
      if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) ) /*0x91c948*/
      {
        v24 = *(_DWORD **)(v23 + 0x1A4); /*0x91c94a*/
        *v24 = "Et"; /*0x91c950*/
        v25 = __rdtsc(); /*0x91c956*/
        HIDWORD(v25) = v25; /*0x91c95c*/
        LODWORD(v25) = ThreadLocalStoragePointer[v4]; /*0x91c960*/
        v24[1] = HIDWORD(v25); /*0x91c963*/
        *(_DWORD *)(v25 + 0x1A4) = v24 + 3; /*0x91c969*/
      }
    }
  }
  LODWORD(v26) = ThreadLocalStoragePointer[v4]; /*0x91c983*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x91c992*/
  {
    v27 = ThreadLocalStoragePointer[v4]; /*0x91c994*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x91c996*/
    *v28 = "Et"; /*0x91c99c*/
    v26 = __rdtsc(); /*0x91c9a2*/
    v28[1] = v26; /*0x91c9ac*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x91c9b2*/
  }
  return v26; /*0x91c9b8*/
}

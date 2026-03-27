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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = TlsIndex;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkRigidBodyCentreOfMassViewer";
    v8 = __rdtsc();
    HIDWORD(v8) = v8;
    LODWORD(v8) = ThreadLocalStoragePointer[v4];
    v7[1] = HIDWORD(v8);
    *(_DWORD *)(v8 + 0x1A4) = v7 + 3;
  }
  for ( i = 0; i < *(this + 2); ++i )
  {
    if ( *(float *)&SrcStr != sub_89DA90((float *)*(_DWORD *)(*(_DWORD *)(*(this + 1) + 4 * i) + 0x50)) )
    {
      v9 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) )
      {
        v10 = *(_DWORD **)(v9 + 0x1A4);
        *v10 = "TtgetMassAndLines";
        v11 = __rdtsc();
        HIDWORD(v11) = v11;
        LODWORD(v11) = ThreadLocalStoragePointer[v4];
        v10[1] = HIDWORD(v11);
        *(_DWORD *)(v11 + 0x1A4) = v10 + 3;
      }
      v12 = *(this + 1);
      v13 = *(_DWORD *)(v12 + 4 * i);
      v14 = v12 + 4 * i;
      v31 = *(__m128 *)(*(_DWORD *)(v13 + 0x50) + 0x60);
      v33 = _mm_add_ps(v31, *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x10));
      v34 = _mm_add_ps(v31, *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x20));
      v15 = *(__m128 *)(*(_DWORD *)(*(_DWORD *)v14 + 0x50) + 0x30);
      v16 = ThreadLocalStoragePointer[v4];
      v17 = *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8);
      v32 = _mm_add_ps(v31, v15);
      if ( v17 )
      {
        v18 = *(_DWORD **)(v16 + 0x1A4);
        *v18 = "Et";
        v19 = __rdtsc();
        HIDWORD(v19) = v19;
        LODWORD(v19) = ThreadLocalStoragePointer[v4];
        v18[1] = HIDWORD(v19);
        *(_DWORD *)(v19 + 0x1A4) = v18 + 3;
      }
      v20 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
      {
        v21 = *(_DWORD **)(v20 + 0x1A4);
        *v21 = "Ttdisplay3lines";
        v22 = __rdtsc();
        HIDWORD(v22) = v22;
        LODWORD(v22) = ThreadLocalStoragePointer[v4];
        v21[1] = HIDWORD(v22);
        *(_DWORD *)(v22 + 0x1A4) = v21 + 3;
      }
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))(
        *(this + 0xFFFFFFFB),
        &v31,
        &v33,
        0xFFFF0000,
        dword_BA8444);
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))(
        *(this + 0xFFFFFFFB),
        &v31,
        &v34,
        0xFF008000,
        dword_BA8444);
      (*(void (__thiscall **)(_DWORD, __m128 *, __m128 *, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFB) + 0x1C))(
        *(this + 0xFFFFFFFB),
        &v31,
        &v32,
        0xFF0000FF,
        dword_BA8444);
      v23 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
      {
        v24 = *(_DWORD **)(v23 + 0x1A4);
        *v24 = "Et";
        v25 = __rdtsc();
        HIDWORD(v25) = v25;
        LODWORD(v25) = ThreadLocalStoragePointer[v4];
        v24[1] = HIDWORD(v25);
        *(_DWORD *)(v25 + 0x1A4) = v24 + 3;
      }
    }
  }
  LODWORD(v26) = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
  {
    v27 = ThreadLocalStoragePointer[v4];
    v28 = *(_DWORD **)(v26 + 0x1A4);
    *v28 = "Et";
    v26 = __rdtsc();
    v28[1] = v26;
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
  }
  return v26;
}

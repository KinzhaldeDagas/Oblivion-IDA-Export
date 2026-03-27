int __thiscall sub_91A720(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edi
  __m128 *v16; // esi
  int v17; // ecx
  __m128 *v18; // esi
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  int v24; // [esp+0h] [ebp-A4h]
  int v25; // [esp+0h] [ebp-A4h]
  int v26; // [esp+18h] [ebp-8Ch]
  _DWORD *v28; // [esp+20h] [ebp-84h]
  __m128 v29[4]; // [esp+24h] [ebp-80h] BYREF
  __m128 v30[4]; // [esp+64h] [ebp-40h] BYREF

  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkSweptTransformDisplayViewer";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = a2;
  v10 = 0;
  v26 = 0;
  if ( *(int *)(a2 + 0x3C) > 0 )
  {
    do
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v9 + 0x38) + 4 * v10);
      v12 = *(_DWORD *)(v11 + 0x38);
      v13 = (_DWORD *)(v11 + 0x34);
      v14 = 0;
      v28 = v13;
      if ( v12 > 0 )
      {
        while ( 1 )
        {
          v15 = *(_DWORD *)(*v13 + 4 * v14);
          v16 = (__m128 *)(*(_DWORD *)(v15 + 0x50) + 0x50);
          sub_8B1DD0(v29[0].m128_f32, (float *)(*(_DWORD *)(v15 + 0x50) + 0x70));
          v17 = *(this + 0xFFFFFFFB);
          v24 = dword_BA8420;
          v29[3] = _mm_sub_ps(
                     *v16,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v29[0], _mm_shuffle_ps(v16[4], v16[4], 0)),
                         _mm_mul_ps(v29[1], _mm_shuffle_ps(v16[4], v16[4], 0x55))),
                       _mm_mul_ps(v29[2], _mm_shuffle_ps(v16[4], v16[4], 0xAA))));
          (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v17 + 0xC))(v17, v29, v15 + 0x15, v24);
          v18 = (__m128 *)(*(_DWORD *)(v15 + 0x50) + 0x50);
          sub_8B1DD0(v30[0].m128_f32, (float *)(*(_DWORD *)(v15 + 0x50) + 0x80));
          v19 = *(this + 0xFFFFFFFB);
          v25 = dword_BA8420;
          v30[3] = _mm_sub_ps(
                     v18[1],
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v30[0], _mm_shuffle_ps(v18[4], v18[4], 0)),
                         _mm_mul_ps(v30[1], _mm_shuffle_ps(v18[4], v18[4], 0x55))),
                       _mm_mul_ps(v30[2], _mm_shuffle_ps(v18[4], v18[4], 0xAA))));
          (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v19 + 0xC))(v19, v30, v15 + 0x16, v25);
          if ( ++v14 >= v28[1] )
            break;
          v13 = v28;
        }
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v10 = v26;
        v9 = a2;
      }
      v26 = ++v10;
    }
    while ( v10 < *(_DWORD *)(v9 + 0x3C) );
    v3 = TlsIndex;
  }
  LODWORD(v20) = ThreadLocalStoragePointer[v3];
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
  {
    v21 = ThreadLocalStoragePointer[v3];
    v22 = *(_DWORD **)(v20 + 0x1A4);
    *v22 = "Et";
    v20 = __rdtsc();
    v22[1] = v20;
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3;
  }
  return v20;
}

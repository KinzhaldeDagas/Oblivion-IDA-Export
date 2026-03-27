int __cdecl sub_8FA750(__m128 **a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  __m128 *v14; // edi
  __m128 *v15; // ecx
  char *v16; // eax
  int v17; // edx
  __m128 *v18; // ecx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 *v23; // eax
  int v24; // edx
  double v25; // st7
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  int v28; // esi
  _DWORD *v29; // ecx
  __m128 *v31; // [esp+Ch] [ebp-94h]
  __m128 v32; // [esp+10h] [ebp-90h] BYREF
  __m128 v33; // [esp+20h] [ebp-80h] BYREF
  __m128 v34[2]; // [esp+30h] [ebp-70h] BYREF
  __m128 v35[2]; // [esp+50h] [ebp-50h] BYREF
  __m128 v36[2]; // [esp+70h] [ebp-30h] BYREF
  float v37; // [esp+90h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtCapsCaps";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = a1[2];
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v14 = *a2;
  v31 = *a1;
  v15 = *a1 + 1;
  v16 = (char *)((char *)v35 - (char *)v15);
  v17 = 2;
  do
  {
    *(__m128 *)((char *)v15 + (_DWORD)v16) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v10, _mm_shuffle_ps(*v15, *v15, 0)),
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0xAA)), v13));
    ++v15;
    --v17;
  }
  while ( v17 );
  v18 = a2[2];
  v19 = *v18;
  v20 = v18[1];
  v21 = v18[2];
  v22 = v18[3];
  v23 = v14 + 1;
  v24 = 2;
  do
  {
    *(__m128 *)((char *)v23 + (char *)v34 - (char *)&v14[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0)),
                                                                   _mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v23, *v23, 0xAA)),
                                                                   v22));
    ++v23;
    --v24;
  }
  while ( v24 );
  v33 = _mm_sub_ps(v35[1], v35[0]);
  v32 = _mm_sub_ps(v34[1], v34[0]);
  sub_8D1A30(v35, &v33, v34, &v32, v36);
  v25 = v14->m128_f32[3] + v31->m128_f32[3];
  if ( v37 < v25 * v25 )
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v27) = v26[TlsIndex];
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = v26[TlsIndex];
    v29 = *(_DWORD **)(v27 + 0x1A4);
    *v29 = "Et";
    v27 = __rdtsc();
    v29[1] = v27;
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
  }
  return v27;
}

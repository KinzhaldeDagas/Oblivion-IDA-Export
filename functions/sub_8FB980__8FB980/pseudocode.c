int __thiscall sub_8FB980(void *this, _DWORD *a2, __m128 **a3, int a4, int *a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // esi
  int v11; // ebx
  __m128 *v12; // edi
  __m128 *v13; // eax
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  __m128 *v18; // edx
  __m128 *v19; // esi
  int v20; // ecx
  double v21; // st7
  int v22; // edx
  __m128 v23; // xmm0
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // esi
  _DWORD *v27; // ecx
  unsigned int v30; // [esp+18h] [ebp-88h]
  __m128 v31; // [esp+20h] [ebp-80h] BYREF
  __m128 v32; // [esp+30h] [ebp-70h]
  _DWORD *v33; // [esp+40h] [ebp-60h]
  __m128 **v34; // [esp+44h] [ebp-5Ch]
  __m128 v35; // [esp+50h] [ebp-50h] BYREF
  float v36; // [esp+60h] [ebp-40h]
  char v37[48]; // [esp+70h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereTri";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = (__m128 *)a2[2];
  v11 = *a2;
  v12 = *a3;
  v33 = a2;
  v13 = a3[2];
  v34 = a3;
  v14 = *v13;
  v15 = v13[1];
  v16 = v13[2];
  v17 = v13[3];
  v18 = v12 + 1;
  v19 = v10 + 3;
  v20 = 3;
  do
  {
    *(__m128 *)((char *)v18 + v37 - (char *)&v12[1]) = _mm_add_ps(
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0)),
                                                           _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v16, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                           v17));
    ++v18;
    --v20;
  }
  while ( v20 );
  sub_8D20C0(v19, (__m128 *)v37, (int)this + 0x10, &v35);
  v21 = *(float *)(v11 + 0xC) + v12->m128_f32[3];
  if ( v21 + *(float *)(a4 + 8) > v36 )
  {
    v22 = *a5;
    *(float *)&v30 = v12->m128_f32[3] - v36;
    v23 = *v19;
    v32 = v35;
    v32.m128_f32[3] = v36 - v21;
    v31 = _mm_add_ps(v23, _mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), v35));
    (*(void (__thiscall **)(int *, __m128 *))(v22 + 4))(a5, &v31);
  }
  v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v25) = v24[TlsIndex];
  if ( *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8) )
  {
    v26 = v24[TlsIndex];
    v27 = *(_DWORD **)(v25 + 0x1A4);
    *v27 = "Et";
    v25 = __rdtsc();
    v27[1] = v25;
    *(_DWORD *)(v26 + 0x1A4) = v27 + 3;
  }
  return v25;
}

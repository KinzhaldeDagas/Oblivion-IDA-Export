int __thiscall sub_8F9470(float *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  char *v11; // edi
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // esi
  __m128 *v18; // ecx
  int v19; // eax
  int v20; // edx
  __m128 *v21; // ecx
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm4
  __m128 *v26; // eax
  int v27; // edx
  __m128 *v28; // edi
  char *v29; // esi
  __int16 v30; // ax
  __m128 *v31; // eax
  __m128 v32; // xmm0
  int v33; // eax
  _DWORD *v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // esi
  _DWORD *v37; // ecx
  int v39; // [esp+0h] [ebp-C0h] BYREF
  int v40; // [esp+Ch] [ebp-B4h]
  __m128 v41[2]; // [esp+10h] [ebp-B0h] BYREF
  __m128 v42[6]; // [esp+30h] [ebp-90h] BYREF
  __m128 v43[3]; // [esp+90h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtCapsuleTri";
    v10 = __rdtsc();
    v40 = v10;
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = (char *)*a2;
  v12 = a2[2];
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = *a3;
  v18 = *a2 + 1;
  v19 = (char *)&v39 - (char *)*a2;
  v20 = 2;
  do
  {
    *(__m128 *)((char *)v18 + v19) = _mm_add_ps(
                                       _mm_add_ps(
                                         _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                         _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)), v16));
    ++v18;
    --v20;
  }
  while ( v20 );
  v21 = a3[2];
  v22 = *v21;
  v23 = v21[1];
  v24 = v21[2];
  v25 = v21[3];
  v26 = v17 + 1;
  v27 = 3;
  do
  {
    *(__m128 *)((char *)v26 + (char *)v43 - (char *)&v17[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0)),
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v24, _mm_shuffle_ps(*v26, *v26, 0xAA)),
                                                                   v25));
    ++v26;
    --v27;
  }
  while ( v27 );
  sub_8D0CA0(v41, *((float *)v11 + 3), v43, v17->m128_f32[3], this + 5, *(float *)(a4 + 8), 1, v42);
  v28 = v42;
  v29 = (char *)(this + 3);
  v40 = 3;
  do
  {
    if ( v28[1].m128_f32[3] >= (double)*(float *)(a4 + 8) )
    {
      HIWORD(v33) = 0;
      if ( *(_WORD *)v29 != 0xFFFF )
      {
        LOWORD(v33) = *(_WORD *)v29;
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v33);
        *(_WORD *)v29 = 0xFFFF;
      }
    }
    else if ( *(_WORD *)v29 != 0xFFFF
           || (v30 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                       *((_DWORD *)this + 2),
                       a2,
                       a3,
                       a4,
                       v28),
               *(_WORD *)v29 = v30,
               v30 != (__int16)0xFFFF) )
    {
      v31 = *a5;
      v32 = *v28;
      *a5 += 3;
      *v31 = v32;
      v31[1] = v28[1];
      v31[2].m128_i16[0] = *(_WORD *)v29;
    }
    v29 += 2;
    v28 += 2;
    --v40;
  }
  while ( v40 );
  v34 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v35) = v34[TlsIndex];
  if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) )
  {
    v36 = v34[TlsIndex];
    v37 = *(_DWORD **)(v35 + 0x1A4);
    *v37 = "Et";
    v35 = __rdtsc();
    v37[1] = v35;
    *(_DWORD *)(v36 + 0x1A4) = v37 + 3;
  }
  return v35;
}

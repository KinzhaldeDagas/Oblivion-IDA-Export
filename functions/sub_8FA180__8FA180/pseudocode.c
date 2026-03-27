int __thiscall sub_8FA180(char *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // edi
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // esi
  __m128 *v18; // ecx
  int v19; // edx
  __m128 *v20; // ecx
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 *v25; // eax
  int v26; // edx
  __m128 *v27; // edi
  char *v28; // esi
  __int16 v29; // ax
  __m128 *v30; // eax
  __m128 v31; // xmm0
  int v32; // eax
  _DWORD *v33; // ecx
  unsigned __int64 v34; // rax
  int v35; // esi
  _DWORD *v36; // ecx
  int v38; // [esp+Ch] [ebp-A4h]
  __m128 v39; // [esp+10h] [ebp-A0h] BYREF
  float v40; // [esp+2Ch] [ebp-84h]
  float v41; // [esp+4Ch] [ebp-64h]
  float v42; // [esp+6Ch] [ebp-44h]
  __m128 v43[2]; // [esp+70h] [ebp-40h] BYREF
  __m128 v44[2]; // [esp+90h] [ebp-20h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtCapsCaps";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = *a2;
  v40 = *(float *)(a4 + 8);
  v12 = a2[2];
  v41 = v40;
  v42 = v40;
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = *a3;
  v18 = v11 + 1;
  v19 = 2;
  do
  {
    *(__m128 *)((char *)v18 + (char *)v44 - (char *)&v11[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)),
                                                                   v16));
    ++v18;
    --v19;
  }
  while ( v19 );
  v20 = a3[2];
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v24 = v20[3];
  v25 = v17 + 1;
  v26 = 2;
  do
  {
    *(__m128 *)((char *)v25 + (char *)v43 - (char *)&v17[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25;
    --v26;
  }
  while ( v26 );
  sub_8D0290(v44, v11->m128_f32[3], v43, v17->m128_f32[3], &v39);
  v27 = &v39;
  v28 = this + 0xC;
  v38 = 3;
  do
  {
    if ( v27[1].m128_f32[3] >= (double)*(float *)(a4 + 8) )
    {
      HIWORD(v32) = 0;
      if ( *(_WORD *)v28 != 0xFFFF )
      {
        LOWORD(v32) = *(_WORD *)v28;
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v32);
        *(_WORD *)v28 = 0xFFFF;
      }
    }
    else if ( *(_WORD *)v28 != 0xFFFF
           || (v29 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                       *((_DWORD *)this + 2),
                       a2,
                       a3,
                       a4,
                       v27),
               *(_WORD *)v28 = v29,
               v29 != (__int16)0xFFFF) )
    {
      v30 = *a5;
      v31 = *v27;
      *a5 += 3;
      *v30 = v31;
      v30[1] = v27[1];
      v30[2].m128_i16[0] = *(_WORD *)v28;
    }
    v28 += 2;
    v27 += 2;
    --v38;
  }
  while ( v38 );
  v33 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v34) = v33[TlsIndex];
  if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) )
  {
    v35 = v33[TlsIndex];
    v36 = *(_DWORD **)(v34 + 0x1A4);
    *v36 = "Et";
    v34 = __rdtsc();
    v36[1] = v34;
    *(_DWORD *)(v35 + 0x1A4) = v36 + 3;
  }
  return v34;
}

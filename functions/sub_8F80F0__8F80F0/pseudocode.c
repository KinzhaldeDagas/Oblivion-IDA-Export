int __thiscall sub_8F80F0(char *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // edx
  __m128 *v16; // ecx
  char *v17; // eax
  int v18; // esi
  __m128 *v19; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  int v24; // edi
  __m128 *v25; // esi
  int v26; // edx
  __m128 *v27; // ecx
  int v28; // eax
  __m128 *v29; // ebx
  float *v30; // esi
  char *v31; // edi
  __m128 **v32; // eax
  __m128 *v33; // esi
  __int16 v34; // ax
  int v35; // eax
  bool v36; // zf
  _DWORD *v37; // ecx
  unsigned __int64 v38; // rax
  int v39; // esi
  _DWORD *v40; // ecx
  int v42; // [esp+18h] [ebp-E8h]
  unsigned int v44; // [esp+20h] [ebp-E0h]
  float v45; // [esp+24h] [ebp-DCh]
  __m128 *v46; // [esp+28h] [ebp-D8h]
  float *v47; // [esp+2Ch] [ebp-D4h]
  __m128 v48; // [esp+30h] [ebp-D0h] BYREF
  float v49; // [esp+40h] [ebp-C0h]
  char v50[48]; // [esp+50h] [ebp-B0h] BYREF
  char v51[128]; // [esp+80h] [ebp-80h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtMultiSphereTri";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = a3[2];
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v15 = *a2;
  v46 = *a3;
  v16 = *a3 + 1;
  v17 = (char *)(v50 - (char *)v16);
  v18 = 3;
  do
  {
    *(__m128 *)((char *)v16 + (_DWORD)v17) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16;
    --v18;
  }
  while ( v18 );
  v19 = a2[2];
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = v19[3];
  v24 = v15->m128_i32[3];
  v25 = v15 + 1;
  v26 = v24;
  v27 = v25;
  do
  {
    *(__m128 *)((char *)v27 + v51 - (char *)v25) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v20, _mm_shuffle_ps(*v27, *v27, 0)),
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v27, *v27, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v22, _mm_shuffle_ps(*v27, *v27, 0xAA)), v23));
    ++v27;
    --v26;
  }
  while ( v26 > 0 );
  v28 = v24 - 1;
  v29 = (__m128 *)v51;
  if ( v24 - 1 >= 0 )
  {
    v30 = &v25->m128_f32[3];
    v31 = this + 2 * v28 + 0x1C;
    v47 = v30;
    v42 = v28 + 1;
    do
    {
      v45 = v46->m128_f32[3] + *v30;
      sub_8D20C0(v29, (__m128 *)v50, (int)(this + 0xC), &v48);
      if ( v45 + *(float *)(a4 + 8) <= v49 )
      {
        HIWORD(v35) = 0;
        if ( *(_WORD *)v31 != 0xFFFF )
        {
          LOWORD(v35) = *(_WORD *)v31;
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v35);
          *(_WORD *)v31 = 0xFFFF;
        }
        goto LABEL_16;
      }
      v32 = a5;
      v33 = *a5;
      *(float *)&v44 = v46->m128_f32[3] - v49;
      *v33 = _mm_add_ps(*v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v44, (__m128)v44, 0), v48));
      v33[1] = v48;
      v33[1].m128_f32[3] = v49 - v45;
      if ( *(_WORD *)v31 != 0xFFFF )
        goto LABEL_13;
      v34 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
              *((_DWORD *)this + 2),
              a2,
              a3,
              a4,
              v33);
      *(_WORD *)v31 = v34;
      if ( v34 != (__int16)0xFFFF )
      {
        v32 = a5;
LABEL_13:
        *v32 += 3;
        v33[2].m128_i16[0] = *(_WORD *)v31;
      }
LABEL_16:
      v30 = v47 + 4;
      ++v29;
      v31 += 0xFFFFFFFE;
      v36 = v42 == 1;
      v47 += 4;
      --v42;
    }
    while ( !v36 );
  }
  v37 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v38) = v37[TlsIndex];
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
  {
    v39 = v37[TlsIndex];
    v40 = *(_DWORD **)(v38 + 0x1A4);
    *v40 = "Et";
    v38 = __rdtsc();
    v40[1] = v38;
    *(_DWORD *)(v39 + 0x1A4) = v40 + 3;
  }
  return v38;
}

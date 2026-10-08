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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f8107*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f810e*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f811f*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f8121*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f8123*/
    *v8 = "TtMultiSphereTri"; /*0x8f8129*/
    v9 = __rdtsc(); /*0x8f812f*/
    v8[1] = v9; /*0x8f8139*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8f813f*/
  }
  v10 = a3[2]; /*0x8f814a*/
  v11 = *v10; /*0x8f814d*/
  v12 = v10[1]; /*0x8f8150*/
  v13 = v10[2]; /*0x8f8154*/
  v14 = v10[3]; /*0x8f8158*/
  v15 = *a2; /*0x8f815f*/
  v46 = *a3; /*0x8f8161*/
  v16 = *a3 + 1; /*0x8f8165*/
  v17 = (char *)(v50 - (char *)v16); /*0x8f816c*/
  v18 = 3; /*0x8f816e*/
  do /*0x8f81ae*/
  {
    *(__m128 *)((char *)v16 + (_DWORD)v17) = _mm_add_ps( /*0x8f81a6*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v16, *v16, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0xAA)), v14));
    ++v16; /*0x8f81aa*/
    --v18; /*0x8f81ad*/
  }
  while ( v18 ); /*0x8f81ae*/
  v19 = a2[2]; /*0x8f81b0*/
  v20 = *v19; /*0x8f81b3*/
  v21 = v19[1]; /*0x8f81b6*/
  v22 = v19[2]; /*0x8f81ba*/
  v23 = v19[3]; /*0x8f81be*/
  v24 = v15->m128_i32[3]; /*0x8f81c2*/
  v25 = v15 + 1; /*0x8f81c5*/
  v26 = v24; /*0x8f81cf*/
  v27 = v25; /*0x8f81d1*/
  do /*0x8f8212*/
  {
    *(__m128 *)((char *)v27 + v51 - (char *)v25) = _mm_add_ps( /*0x8f8208*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v20, _mm_shuffle_ps(*v27, *v27, 0)),
                                                       _mm_mul_ps(v21, _mm_shuffle_ps(*v27, *v27, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v22, _mm_shuffle_ps(*v27, *v27, 0xAA)), v23));
    ++v27; /*0x8f820c*/
    --v26; /*0x8f820f*/
  }
  while ( v26 > 0 ); /*0x8f8212*/
  v28 = v24 - 1; /*0x8f8214*/
  v29 = (__m128 *)v51; /*0x8f8219*/
  if ( v24 - 1 >= 0 ) /*0x8f8220*/
  {
    v30 = &v25->m128_f32[3]; /*0x8f822a*/
    v31 = this + 2 * v28 + 0x1C; /*0x8f822d*/
    v47 = v30; /*0x8f8232*/
    v42 = v28 + 1; /*0x8f8236*/
    do /*0x8f8256*/
    {
      v45 = v46->m128_f32[3] + *v30; /*0x8f8256*/
      sub_8D20C0(v29, (__m128 *)v50, (int)(this + 0xC), &v48); /*0x8f8260*/
      if ( v45 + *(float *)(a4 + 8) <= v49 ) /*0x8f827b*/
      {
        HIWORD(v35) = 0; /*0x8f82f8*/
        if ( *(_WORD *)v31 != 0xFFFF ) /*0x8f8301*/
        {
          LOWORD(v35) = *(_WORD *)v31; /*0x8f82fa*/
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v35); /*0x8f830d*/
          *(_WORD *)v31 = 0xFFFF; /*0x8f8310*/
        }
        goto LABEL_16; /*0x8f8310*/
      }
      v32 = a5; /*0x8f828d*/
      v33 = *a5; /*0x8f8290*/
      *(float *)&v44 = v46->m128_f32[3] - v49; /*0x8f8292*/
      *v33 = _mm_add_ps(*v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v44, (__m128)v44, 0), v48)); /*0x8f82ac*/
      v33[1] = v48; /*0x8f82b4*/
      v33[1].m128_f32[3] = v49 - v45; /*0x8f82c0*/
      if ( *(_WORD *)v31 != 0xFFFF ) /*0x8f82c8*/
        goto LABEL_13; /*0x8f82c8*/
      v34 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))( /*0x8f82dd*/
              *((_DWORD *)this + 2),
              a2,
              a3,
              a4,
              v33);
      *(_WORD *)v31 = v34; /*0x8f82e4*/
      if ( v34 != (__int16)0xFFFF ) /*0x8f82e7*/
      {
        v32 = a5; /*0x8f82e9*/
LABEL_13:
        *v32 += 3; /*0x8f82ec*/
        v33[2].m128_i16[0] = *(_WORD *)v31; /*0x8f82f2*/
      }
LABEL_16:
      v30 = v47 + 4; /*0x8f8315*/
      ++v29; /*0x8f8320*/
      v31 += 0xFFFFFFFE; /*0x8f8323*/
      v36 = v42 == 1; /*0x8f8326*/
      v47 += 4; /*0x8f8327*/
      --v42; /*0x8f832b*/
    }
    while ( !v36 ); /*0x8f8256*/
  }
  v37 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f8335*/
  LODWORD(v38) = v37[MEMORY[0xBA9DE4]]; /*0x8f8342*/
  if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x8f8351*/
  {
    v39 = v37[MEMORY[0xBA9DE4]]; /*0x8f8353*/
    v40 = *(_DWORD **)(v38 + 0x1A4); /*0x8f8355*/
    *v40 = "Et"; /*0x8f835b*/
    v38 = __rdtsc(); /*0x8f8361*/
    v40[1] = v38; /*0x8f836b*/
    *(_DWORD *)(v39 + 0x1A4) = v40 + 3; /*0x8f8371*/
  }
  return v38; /*0x8f8377*/
}

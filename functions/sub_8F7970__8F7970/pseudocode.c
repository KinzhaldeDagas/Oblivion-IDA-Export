int __thiscall sub_8F7970(_DWORD *this, int *a2, int a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int *v11; // edx
  int v12; // eax
  int v13; // ebx
  __m128 *v14; // esi
  int v15; // edx
  int v16; // eax
  __m128 *v17; // esi
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // esi
  _DWORD *v23; // ecx
  __m128 *v25; // [esp+0h] [ebp-D8h]
  __m128 *v26; // [esp+0h] [ebp-D8h]
  __m128 *v27; // [esp+4h] [ebp-D4h]
  __m128 *i; // [esp+1Ch] [ebp-BCh]
  int v29; // [esp+20h] [ebp-B8h]
  _WORD *v30; // [esp+24h] [ebp-B4h]
  _BYTE v31[4]; // [esp+28h] [ebp-B0h] BYREF
  float v32; // [esp+2Ch] [ebp-ACh]
  int v33; // [esp+30h] [ebp-A8h]
  int *v34; // [esp+34h] [ebp-A4h]
  __m128 v35; // [esp+38h] [ebp-A0h] BYREF
  __m128 v36; // [esp+48h] [ebp-90h]
  int v37; // [esp+58h] [ebp-80h]
  int v38; // [esp+5Ch] [ebp-7Ch]
  __m128 v39; // [esp+68h] [ebp-70h] BYREF
  float v40; // [esp+7Ch] [ebp-5Ch]
  __m128 v41; // [esp+88h] [ebp-50h] BYREF
  __m128 v42; // [esp+98h] [ebp-40h]
  __m128 v43; // [esp+A8h] [ebp-30h]
  __m128 v44; // [esp+B8h] [ebp-20h]
  __m128 v45; // [esp+C8h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f7987*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f798e*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8f799d*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f799f*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8f79a1*/
    *v9 = "TtmultiRay-cvx"; /*0x8f79a7*/
    v10 = __rdtsc(); /*0x8f79ad*/
    v9[1] = v10; /*0x8f79b7*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8f79bd*/
  }
  v11 = *(int **)a3; /*0x8f79cb*/
  v27 = (__m128 *)a2[2]; /*0x8f79d3*/
  v25 = *(__m128 **)(a3 + 8); /*0x8f79d4*/
  v33 = *a2; /*0x8f79dc*/
  v34 = v11; /*0x8f79e0*/
  sub_8B1FF0(&v41, v25, v27); /*0x8f79e4*/
  v12 = *(_DWORD *)(v33 + 0x10); /*0x8f79e9*/
  v13 = 0; /*0x8f79ec*/
  v37 = 0; /*0x8f79f0*/
  v38 = 0; /*0x8f79f4*/
  v14 = *(__m128 **)(v33 + 0xC); /*0x8f79f8*/
  v29 = v12; /*0x8f79fb*/
  for ( i = v14; v13 < v29; i += 2 ) /*0x8f7a03*/
  {
    v35 = _mm_add_ps( /*0x8f7a73*/
            _mm_add_ps(
              _mm_mul_ps(v41, _mm_shuffle_ps(*v14, *v14, 0)),
              _mm_mul_ps(v42, _mm_shuffle_ps(*v14, *v14, 0x55))),
            _mm_add_ps(_mm_mul_ps(v43, _mm_shuffle_ps(*v14, *v14, 0xAA)), v44));
    v36 = _mm_add_ps( /*0x8f7ab1*/
            _mm_add_ps(
              _mm_mul_ps(v41, _mm_shuffle_ps(v14[1], v14[1], 0)),
              _mm_mul_ps(v42, _mm_shuffle_ps(v14[1], v14[1], 0x55))),
            _mm_add_ps(_mm_mul_ps(v43, _mm_shuffle_ps(v14[1], v14[1], 0xAA)), v44));
    v15 = *v34; /*0x8f7ab6*/
    v40 = 1.0; /*0x8f7ab9*/
    (*(void (__thiscall **)(int *, _BYTE *, __m128 *, __m128 *))(v15 + 0x14))(v34, v31, &v35, &v39); /*0x8f7ac4*/
    if ( v31[0] ) /*0x8f7acd*/
    {
      v17 = *a5; /*0x8f7b00*/
      v18 = (__m128)xmmword_A6DFE0; /*0x8f7b0a*/
      v32 = v40; /*0x8f7b11*/
      v19 = _mm_shuffle_ps((__m128)LODWORD(v40), (__m128)LODWORD(v40), 0); /*0x8f7b1e*/
      v26 = *(__m128 **)(a3 + 8); /*0x8f7b3e*/
      v45 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v18, v19), v35), _mm_mul_ps(v19, v36)); /*0x8f7b41*/
      hkTransform_TransformPosition(v17, v26, &v45); /*0x8f7b49*/
      hkBasis_TransformVector(v17 + 1, *(__m128 **)(a3 + 8), &v39); /*0x8f7b5d*/
      v17[1].m128_f32[3] = (v40 - fConstant_1) * i->m128_f32[3] + *(float *)(v33 + 0x18); /*0x8f7b7a*/
      v30 = (_WORD *)(*(this + 3) + 2 * v13); /*0x8f7b89*/
      if ( *v30 == 0xFFFF ) /*0x8f7b8d*/
        *v30 = (*(int (__thiscall **)(_DWORD, int *, int, int, __m128 *))(*(_DWORD *)*(this + 2) + 8))( /*0x8f7ba8*/
                 *(this + 2),
                 a2,
                 a3,
                 a4,
                 v17);
      if ( *(_WORD *)(*(this + 3) + 2 * v13) != 0xFFFF ) /*0x8f7bb4*/
      {
        *a5 += 3; /*0x8f7bb9*/
        v17[2].m128_i16[0] = *(_WORD *)(*(this + 3) + 2 * v13); /*0x8f7bc3*/
      }
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(this + 3) + 2 * v13); /*0x8f7ad4*/
      if ( (_WORD)v16 != 0xFFFF ) /*0x8f7adc*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 0x10))(*(this + 2), v16); /*0x8f7ae8*/
        *(_WORD *)(*(this + 3) + 2 * v13) = 0xFFFF; /*0x8f7aee*/
      }
    }
    v14 = i + 2; /*0x8f7bcf*/
    ++v13; /*0x8f7bd2*/
  }
  v20 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f7bdf*/
  LODWORD(v21) = v20[MEMORY[0xBA9DE4]]; /*0x8f7bec*/
  if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x8f7bfb*/
  {
    v22 = v20[MEMORY[0xBA9DE4]]; /*0x8f7bfd*/
    v23 = *(_DWORD **)(v21 + 0x1A4); /*0x8f7bff*/
    *v23 = "Et"; /*0x8f7c05*/
    v21 = __rdtsc(); /*0x8f7c0b*/
    v23[1] = v21; /*0x8f7c15*/
    *(_DWORD *)(v22 + 0x1A4) = v23 + 3; /*0x8f7c1b*/
  }
  return v21; /*0x8f7c21*/
}

_BYTE *__thiscall sub_916F60(_DWORD *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // edx
  __m128 v11; // xmm5
  __m128 *v12; // ebx
  __m128 v13; // xmm0
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  __m128 v17; // xmm0
  char v19; // c0
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // esi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  float v31; // [esp+10h] [ebp-20h]
  float v32; // [esp+14h] [ebp-1Ch]
  _DWORD *v33; // [esp+18h] [ebp-18h]
  float v34; // [esp+18h] [ebp-18h]
  float v35; // [esp+1Ch] [ebp-14h]
  __m128 v36; // [esp+20h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x916f6b*/
  v5 = MEMORY[0xBA9DE4]; /*0x916f73*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x916f79*/
  v33 = this; /*0x916f88*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x916f8c*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x916f8e*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x916f90*/
    *v8 = "TtrcConvexVert"; /*0x916f96*/
    v9 = __rdtsc(); /*0x916f9c*/
    v8[1] = v9; /*0x916fa6*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x916fac*/
    this = v33; /*0x916fb2*/
  }
  v10 = *(this + 0x11) - 1; /*0x916fbf*/
  v32 = -1.0; /*0x916fc0*/
  v35 = a4[1].m128_f32[1]; /*0x916fc8*/
  if ( v10 < 0 ) /*0x916fcc*/
  {
LABEL_15:
    v22 = ThreadLocalStoragePointer[v5]; /*0x9170ea*/
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x9170f9*/
      goto LABEL_16; /*0x9170f9*/
    goto LABEL_17; /*0x9170f9*/
  }
  v11 = v36; /*0x916fdf*/
  v12 = (__m128 *)(*(this + 0x10) + 0x10 * v10); /*0x916fe9*/
  while ( 1 ) /*0x916ff6*/
  {
    v13 = _mm_mul_ps(*v12, *a3); /*0x916ff6*/
    v14 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]; /*0x917003*/
    v15 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]; /*0x917007*/
    v16 = _mm_shuffle_ps(*v12, *v12, 0xFF).m128_f32[0]; /*0x91700e*/
    v17 = _mm_mul_ps(*v12, a3[1]); /*0x91701c*/
    v31 = v15 + (float)(v14 + v16); /*0x917026*/
    v34 = (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]) /*0x91704e*/
        + (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] + v16);
    if ( !v19 ) /*0x917063*/
      break; /*0x917063*/
    if ( v34 >= (double)*(float *)&SrcStr ) /*0x917093*/
    {
      v21 = v31 / (v31 - v34); /*0x91709d*/
      if ( v35 >= v21 ) /*0x9170ac*/
        v35 = v21; /*0x9170ae*/
      goto LABEL_12; /*0x9170ae*/
    }
LABEL_13:
    --v10; /*0x9170c9*/
    v12 += 0xFFFFFFFF; /*0x9170ca*/
    if ( v10 < 0 ) /*0x9170cf*/
    {
      if ( v32 < (double)*(float *)&SrcStr ) /*0x9170e4*/
        goto LABEL_15; /*0x9170e4*/
      *a4 = v11; /*0x917183*/
      a4[1].m128_f32[1] = v32; /*0x917186*/
      a4[1].m128_i32[0] = 0xFFFFFFFF; /*0x917189*/
      v27 = ThreadLocalStoragePointer[v5]; /*0x917190*/
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x91719f*/
      {
        v28 = ThreadLocalStoragePointer[v5]; /*0x9171a1*/
        v29 = *(_DWORD **)(v27 + 0x1A4); /*0x9171a3*/
        *v29 = "Et"; /*0x9171a9*/
        v30 = __rdtsc(); /*0x9171af*/
        v29[1] = v30; /*0x9171b9*/
        *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x9171bf*/
      }
      *a2 = 1; /*0x9171ca*/
      return a2; /*0x9171c5*/
    }
  }
  if ( v34 >= (double)*(float *)&SrcStr ) /*0x917068*/
  {
    v22 = ThreadLocalStoragePointer[v5]; /*0x91712e*/
    if ( *(_DWORD *)(v22 + 0x1A4) >= *(_DWORD *)(v22 + 0x1A8) ) /*0x91713d*/
      goto LABEL_17; /*0x91713d*/
    goto LABEL_16; /*0x91713d*/
  }
  v20 = v31 / (v31 - v34); /*0x917076*/
  if ( v32 <= v20 ) /*0x917085*/
  {
    v32 = v20; /*0x917087*/
    v11 = *v12; /*0x91708b*/
  }
LABEL_12:
  if ( v35 >= (double)v32 ) /*0x9170c3*/
    goto LABEL_13; /*0x9170c3*/
  v22 = ThreadLocalStoragePointer[v5]; /*0x917155*/
  if ( *(_DWORD *)(v22 + 0x1A4) >= *(_DWORD *)(v22 + 0x1A8) ) /*0x917164*/
    goto LABEL_17; /*0x917164*/
LABEL_16:
  v23 = ThreadLocalStoragePointer[v5]; /*0x9170fb*/
  v24 = *(_DWORD **)(v22 + 0x1A4); /*0x9170fd*/
  *v24 = "Et"; /*0x917103*/
  v25 = __rdtsc(); /*0x917109*/
  v24[1] = v25; /*0x917113*/
  *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x917119*/
LABEL_17:
  *a2 = 0; /*0x91711f*/
  return a2; /*0x917125*/
}

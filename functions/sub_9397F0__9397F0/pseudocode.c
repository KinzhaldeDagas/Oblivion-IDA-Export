int __thiscall sub_9397F0(__m128 *this, int *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 *v11; // edx
  double v12; // st7
  double v13; // st6
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  int v16; // eax
  _DWORD *v17; // edi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ebx
  _DWORD *v21; // ecx
  unsigned int v23; // [esp+Ch] [ebp-14h]
  unsigned int v24; // [esp+Ch] [ebp-14h]
  __m128 v25; // [esp+10h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9397fa*/
  v6 = MEMORY[0xBA9DE4]; /*0x939803*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x939809*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x939818*/
  {
    v8 = *(_DWORD **)(v7 + 0x1A4); /*0x93981a*/
    *v8 = "LtGskAgent"; /*0x939820*/
    v8[3] = &off_A9BC80; /*0x939826*/
    v9 = __rdtsc(); /*0x93982d*/
    v8[1] = v9; /*0x939837*/
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 4; /*0x939840*/
  }
  if ( *((float *)this + 6) == *(float *)(a4 + 0x10) ) /*0x939856*/
    goto LABEL_6; /*0x939856*/
  v10 = (__m128 *)a3[2]; /*0x939862*/
  v11 = (__m128 *)a2[2]; /*0x93986a*/
  v12 = *(float *)(a4 + 0x18) * v11[5].m128_f32[3]; /*0x939878*/
  v13 = *(float *)(a4 + 0x18) * v10[5].m128_f32[3]; /*0x93987a*/
  *(float *)&v23 = v12; /*0x939882*/
  v14 = (__m128)v23; /*0x939886*/
  *(float *)&v24 = v13; /*0x93988c*/
  v25 = _mm_add_ps( /*0x9398d4*/
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), _mm_sub_ps(v11[4], v11[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v24, (__m128)v24, 0), _mm_sub_ps(v10[5], v10[4])));
  v25.m128_f32[3] = v11[0xA].m128_f32[0] * v11[9].m128_f32[3] * v12 + v10[0xA].m128_f32[0] * v10[9].m128_f32[3] * v13; /*0x9398db*/
  if ( *((float *)this + 0xB) <= (double)*(float *)(a4 + 8) /*0x93993c*/
    || (v15 = _mm_mul_ps(v25, *(this + 2)),
        *((float *)this + 0xB) = *((float *)this + 0xB)
                               - (float)((float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0])
                                       + (float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                                               + _mm_shuffle_ps(v25, v25, 0xFF).m128_f32[0])),
        *((float *)this + 0xB) <= (double)*(float *)(a4 + 8)) )
  {
LABEL_6:
    v16 = ThreadLocalStoragePointer[v6]; /*0x93993e*/
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x93994d*/
    {
      v17 = *(_DWORD **)(v16 + 0x1A4); /*0x939951*/
      *v17 = "StGsk"; /*0x939957*/
      v18 = __rdtsc(); /*0x93995d*/
      HIDWORD(v18) = MEMORY[0xBA9DE4]; /*0x939967*/
      v17[1] = v18; /*0x93996d*/
      *(_DWORD *)(ThreadLocalStoragePointer[HIDWORD(v18)] + 0x1A4) = v17 + 3; /*0x939976*/
      v6 = HIDWORD(v18); /*0x93997c*/
    }
    *((_DWORD *)this + 6) = *(_DWORD *)(a4 + 0x14); /*0x939988*/
    sub_939450(this, a2, a3, a4, a5); /*0x939991*/
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v6]; /*0x939996*/
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x9399a5*/
  {
    v20 = ThreadLocalStoragePointer[v6]; /*0x9399a7*/
    v21 = *(_DWORD **)(v19 + 0x1A4); /*0x9399a9*/
    *v21 = "lt"; /*0x9399af*/
    v19 = __rdtsc(); /*0x9399b5*/
    v21[1] = v19; /*0x9399bf*/
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3; /*0x9399c5*/
  }
  return v19; /*0x9399cb*/
}

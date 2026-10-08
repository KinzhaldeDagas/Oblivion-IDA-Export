int __stdcall sub_8FD160(_DWORD *a1, _DWORD *a2, int a3, int *a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // edx
  __m128 *v12; // eax
  __m128 *v13; // ecx
  __m128 v14; // xmm0
  __m128 *v15; // ecx
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  double v18; // st7
  long double v19; // st7
  long double v20; // st7
  __m128 v21; // xmm0
  double v22; // st6
  __m128 v23; // xmm2
  __m128 v24; // xmm0
  int v25; // eax
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  float v30; // [esp+18h] [ebp-38h]
  unsigned int v31; // [esp+1Ch] [ebp-34h]
  __m128 v32; // [esp+20h] [ebp-30h] BYREF
  __int128 v33; // [esp+30h] [ebp-20h]
  _DWORD *v34; // [esp+40h] [ebp-10h]
  _DWORD *v35; // [esp+44h] [ebp-Ch]

  v4 = MEMORY[0xBA9DE4]; /*0x8fd16a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fd172*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd179*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fd188*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd18a*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fd18c*/
    *v8 = "TtSphereSphere"; /*0x8fd192*/
    v9 = __rdtsc(); /*0x8fd198*/
    v8[1] = v9; /*0x8fd1a2*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fd1a8*/
  }
  v10 = *a1; /*0x8fd1b4*/
  v11 = *a2; /*0x8fd1b6*/
  v34 = a1; /*0x8fd1b8*/
  v12 = (__m128 *)a1[2]; /*0x8fd1bc*/
  v35 = a2; /*0x8fd1bf*/
  v13 = (__m128 *)a2[2]; /*0x8fd1c3*/
  v14 = v13[3]; /*0x8fd1ca*/
  v15 = v13 + 3; /*0x8fd1ce*/
  v16 = _mm_sub_ps(v12[3], v14); /*0x8fd1d1*/
  v17 = _mm_mul_ps(v16, v16); /*0x8fd1d7*/
  v30 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8fd1f4*/
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v18 = *(float *)(a3 + 8) + *(float *)(v11 + 0xC) + *(float *)(v10 + 0xC); /*0x8fd201*/
  if ( v30 < v18 * v18 ) /*0x8fd215*/
  {
    if ( v30 <= (double)*(float *)&SrcStr ) /*0x8fd22a*/
    {
      v20 = *(float *)&SrcStr; /*0x8fd25a*/
      v22 = *((float *)&v33 + 3); /*0x8fd267*/
      v33 = xmmword_B2F090[0]; /*0x8fd26b*/
      *((float *)&v33 + 3) = v22; /*0x8fd270*/
      v21 = (__m128)v33; /*0x8fd274*/
    }
    else
    {
      v19 = fConstant_1 / sqrt(v30); /*0x8fd232*/
      *(float *)&v31 = v19; /*0x8fd238*/
      v20 = v19 * v30; /*0x8fd23c*/
      v21 = _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), v16); /*0x8fd250*/
      v33 = (__int128)v21; /*0x8fd253*/
    }
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)(v11 + 0xC), (__m128)*(unsigned int *)(v11 + 0xC), 0), v21); /*0x8fd297*/
    v24 = *v15; /*0x8fd29a*/
    *((float *)&v33 + 3) = v20 - (*(float *)(v11 + 0xC) + *(float *)(v10 + 0xC)); /*0x8fd2a0*/
    v25 = *a4; /*0x8fd2a4*/
    v32 = _mm_add_ps(v24, v23); /*0x8fd2b2*/
    (*(void (__thiscall **)(int *, __m128 *))(v25 + 4))(a4, &v32); /*0x8fd2b7*/
  }
  LODWORD(v26) = ThreadLocalStoragePointer[v4]; /*0x8fd2ba*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8fd2c9*/
  {
    v27 = ThreadLocalStoragePointer[v4]; /*0x8fd2cb*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8fd2cd*/
    *v28 = "Et"; /*0x8fd2d3*/
    v26 = __rdtsc(); /*0x8fd2d9*/
    v28[1] = v26; /*0x8fd2e3*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8fd2e9*/
  }
  return v26; /*0x8fd2ef*/
}

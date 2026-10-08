int __stdcall sub_8FAD60(_DWORD *a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ebx
  float *v10; // ecx
  int v11; // edi
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  double v18; // st7
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 *v21; // edx
  double v22; // st7
  double v23; // st7
  int v24; // eax
  double v25; // st7
  double v26; // st6
  int v27; // eax
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // esi
  _DWORD *v33; // ecx
  __m128 *v35; // [esp-8h] [ebp-78h]
  float v36; // [esp+18h] [ebp-58h]
  float v37; // [esp+1Ch] [ebp-54h]
  unsigned int v38; // [esp+1Ch] [ebp-54h]
  float v39; // [esp+20h] [ebp-50h]
  __m128 v40; // [esp+30h] [ebp-40h] BYREF
  __m128 v41; // [esp+40h] [ebp-30h] BYREF
  __m128 v42; // [esp+50h] [ebp-20h]
  _DWORD *v43; // [esp+60h] [ebp-10h]
  __m128 **v44; // [esp+64h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fad69*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fad76*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fad88*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fad8a*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fad8c*/
    *v7 = "TtSphereBox"; /*0x8fad92*/
    v8 = __rdtsc(); /*0x8fad98*/
    v7[1] = v8; /*0x8fada2*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fada8*/
  }
  v9 = (__m128 *)(a1[2] + 0x30); /*0x8fadba*/
  v35 = a2[2]; /*0x8fadbe*/
  v43 = a1; /*0x8fadc3*/
  v44 = a2; /*0x8fadc7*/
  sub_88FD10(&v40, v35, v9); /*0x8fadcb*/
  v10 = (float *)*a2; /*0x8faddc*/
  v11 = *a1; /*0x8fadde*/
  v12 = _mm_and_ps(v40, (__m128)xmmword_A372D0); /*0x8fade3*/
  v13 = _mm_sub_ps(_mm_min_ps(v12, (*a2)[1]), v12); /*0x8fadf0*/
  if ( (_mm_movemask_ps(v13) & 7) == 0 ) /*0x8fadfe*/
  {
    v21 = a2[2]; /*0x8faef7*/
    v36 = v12.m128_f32[0] - v10[4]; /*0x8faefd*/
    v37 = v12.m128_f32[1] - v10[5]; /*0x8faf08*/
    v22 = v12.m128_f32[2] - v10[6]; /*0x8faf10*/
    if ( v36 <= (double)v37 ) /*0x8faf20*/
    {
      if ( v37 > v22 ) /*0x8faf54*/
      {
        v25 = v42.m128_f32[3]; /*0x8faf5c*/
        v42 = v21[1]; /*0x8faf60*/
        v42.m128_f32[3] = v25; /*0x8faf65*/
        v24 = 1; /*0x8faf69*/
        v22 = v37; /*0x8faf6e*/
        goto LABEL_12; /*0x8faf72*/
      }
    }
    else if ( v36 > v22 ) /*0x8faf2d*/
    {
      v23 = v42.m128_f32[3]; /*0x8faf34*/
      v42 = *v21; /*0x8faf38*/
      v42.m128_f32[3] = v23; /*0x8faf3d*/
      v24 = 0; /*0x8faf41*/
      v22 = v36; /*0x8faf43*/
LABEL_12:
      v20 = v42; /*0x8faf8a*/
      if ( v40.m128_f32[v24] < (double)*(float *)&SrcStr ) /*0x8faf9e*/
      {
        v20 = _mm_xor_ps(v42, (__m128)xmmword_A965C0); /*0x8fafa7*/
        v42 = v20; /*0x8fafaa*/
      }
      v18 = v22 - v10[3] - *(float *)(v11 + 0xC); /*0x8fafb2*/
      goto LABEL_15; /*0x8fafb2*/
    }
    v26 = v42.m128_f32[3]; /*0x8faf78*/
    v42 = v21[2]; /*0x8faf7c*/
    v42.m128_f32[3] = v26; /*0x8faf81*/
    v24 = 2; /*0x8faf85*/
    goto LABEL_12; /*0x8faf85*/
  }
  v14 = _mm_mul_ps(v13, v13); /*0x8fae10*/
  v14.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x8fae28*/
                  + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  v39 = 1.0 / fsqrt(v14.m128_f32[0]); /*0x8fae35*/
  v15 = (__m128)0x3F000000u; /*0x8fae65*/
  v15.m128_f32[0] = 0.5 * v39; /*0x8fae6b*/
  v16 = v15; /*0x8fae6f*/
  v16.m128_f32[0] = (float)(0.5 * v39) * (float)(3.0 - (float)((float)(v14.m128_f32[0] * v39) * v39)); /*0x8fae72*/
  v17 = _mm_shuffle_ps(v16, v16, 0); /*0x8fae7a*/
  v18 = (float)(v14.m128_f32[0] * v17.m128_f32[0]) - (v10[3] + *(float *)(v11 + 0xC)); /*0x8fae86*/
  if ( v18 > *(float *)(a3 + 8) ) /*0x8fae94*/
    goto LABEL_16; /*0x8fae94*/
  v19 = _mm_xor_ps(_mm_xor_ps(_mm_mul_ps(v17, v13), _mm_and_ps(v40, (__m128)xmmword_A965C0)), (__m128)xmmword_A965C0); /*0x8faebf*/
  v20 = _mm_add_ps( /*0x8faee6*/
          _mm_add_ps(
            _mm_mul_ps(*a2[2], _mm_shuffle_ps(v19, v19, 0)),
            _mm_mul_ps(a2[2][1], _mm_shuffle_ps(v19, v19, 0x55))),
          _mm_mul_ps(a2[2][2], _mm_shuffle_ps(v19, v19, 0xAA)));
  v42 = v20; /*0x8faee9*/
LABEL_15:
  v27 = *a4; /*0x8fafb5*/
  *(float *)&v38 = -v18 - *(float *)(v11 + 0xC); /*0x8fafc6*/
  v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)v38, (__m128)v38, 0), v20); /*0x8fafd7*/
  v29 = *v9; /*0x8fafda*/
  v42.m128_f32[3] = v18; /*0x8fafdd*/
  v41 = _mm_add_ps(v29, v28); /*0x8fafe4*/
  (*(void (__thiscall **)(int *, __m128 *))(v27 + 4))(a4, &v41); /*0x8fafe9*/
LABEL_16:
  v30 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8faff0*/
  LODWORD(v31) = v30[MEMORY[0xBA9DE4]]; /*0x8faffd*/
  if ( *(_DWORD *)(v31 + 0x1A4) < *(_DWORD *)(v31 + 0x1A8) ) /*0x8fb00c*/
  {
    v32 = v30[MEMORY[0xBA9DE4]]; /*0x8fb00e*/
    v33 = *(_DWORD **)(v31 + 0x1A4); /*0x8fb010*/
    *v33 = "Et"; /*0x8fb016*/
    v31 = __rdtsc(); /*0x8fb01c*/
    v33[1] = v31; /*0x8fb026*/
    *(_DWORD *)(v32 + 0x1A4) = v33 + 3; /*0x8fb02c*/
  }
  return v31; /*0x8fb032*/
}

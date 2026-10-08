char __cdecl sub_8E6D10(int a1, int a2, int a3)
{
  char result; // al
  __m128 *v4; // ebx
  int v5; // edx
  __m128 *v6; // ecx
  double v7; // st7
  double v8; // st6
  __m128 v9; // xmm0
  double v10; // st7
  _DWORD *ThreadLocalStoragePointer; // eax
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // edx
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  __m128 v19; // xmm0
  float v20; // xmm1_4
  int v21; // eax
  int v22; // edx
  __m128 *v23; // eax
  __m128 *v24; // ecx
  double v25; // st7
  double v26; // st6
  __m128 v27; // xmm0
  int v28; // [esp+14h] [ebp-16Ch]
  int v29; // [esp+14h] [ebp-16Ch]
  unsigned int v30; // [esp+14h] [ebp-16Ch]
  unsigned int v31; // [esp+14h] [ebp-16Ch]
  unsigned int v32; // [esp+18h] [ebp-168h]
  unsigned int v33; // [esp+18h] [ebp-168h]
  int v34; // [esp+18h] [ebp-168h]
  __m128 *v35; // [esp+1Ch] [ebp-164h]
  int *v36; // [esp+20h] [ebp-160h] BYREF
  _DWORD *v37; // [esp+24h] [ebp-15Ch]
  int v38; // [esp+28h] [ebp-158h]
  int v39; // [esp+2Ch] [ebp-154h]
  __m128 v40[4]; // [esp+30h] [ebp-150h] BYREF
  float v41; // [esp+70h] [ebp-110h]
  __m128 v42; // [esp+80h] [ebp-100h]
  _DWORD v43[4]; // [esp+90h] [ebp-F0h] BYREF
  __m128 v44[4]; // [esp+A0h] [ebp-E0h] BYREF
  _DWORD v45[4]; // [esp+E0h] [ebp-A0h] BYREF
  _DWORD v46[4]; // [esp+F0h] [ebp-90h] BYREF
  __m128 v47[4]; // [esp+100h] [ebp-80h] BYREF
  __m128 v48[4]; // [esp+140h] [ebp-40h] BYREF

  if ( *(_BYTE *)a1 == 2 ) /*0x8e6d28*/
  {
    v21 = *(_DWORD *)(a1 + 0x14); /*0x8e70a6*/
    v22 = *(_DWORD *)(a1 + 0x10); /*0x8e70ac*/
    v37 = *(_DWORD **)(a1 + 0x18); /*0x8e70b2*/
    v36 = (int *)v21; /*0x8e70b6*/
    v39 = v22; /*0x8e70ba*/
    v38 = a2; /*0x8e70be*/
    v23 = *(__m128 **)(v21 + 8); /*0x8e70c5*/
    v24 = (__m128 *)v37[2]; /*0x8e70cd*/
    v25 = *(float *)(a2 + 0x18) * v23[5].m128_f32[3]; /*0x8e70d4*/
    v26 = *(float *)(a2 + 0x18) * v24[5].m128_f32[3]; /*0x8e70d6*/
    *(float *)&v30 = v25; /*0x8e70e2*/
    v27 = (__m128)v30; /*0x8e70e6*/
    *(float *)&v31 = v26; /*0x8e70ed*/
    v42 = _mm_add_ps( /*0x8e7119*/
            _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), _mm_sub_ps(v23[4], v23[5])),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), _mm_sub_ps(v24[5], v24[4])));
    v42.m128_f32[3] = v24[0xA].m128_f32[0] * v24[9].m128_f32[3] * v26 + v23[0xA].m128_f32[0] * v23[9].m128_f32[3] * v25; /*0x8e7144*/
    sub_8B1FF0(v40, v23, v24); /*0x8e714f*/
    return (*(char (__cdecl **)(int **, int, int, _DWORD, int))(0x34 * *(unsigned __int8 *)(a1 + 1) /*0x8e716d*/
                                                              + *(_DWORD *)a2
                                                              + 0x16BC))(
             &v36,
             a1,
             a1 + 0x20,
             0,
             a3);
  }
  if ( *(_BYTE *)a1 != 4 ) /*0x8e6d31*/
  {
    result = *(_BYTE *)a1 - 6; /*0x8e6d33*/
    if ( *(_BYTE *)a1 == 6 ) /*0x8e6d36*/
      return (*(char (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 4) + 0x14))( /*0x8e6d51*/
               *(_DWORD *)(a1 + 4),
               *(_DWORD *)(a1 + 0x14),
               *(_DWORD *)(a1 + 0x18),
               a2,
               a3);
    return result; /*0x8e6d5a*/
  }
  v4 = *(__m128 **)(*(_DWORD *)(a1 + 0x14) + 8); /*0x8e6d5e*/
  v5 = *(_DWORD *)(a1 + 0x18); /*0x8e6d61*/
  v6 = *(__m128 **)(v5 + 8); /*0x8e6d64*/
  v36 = *(int **)(a1 + 0x14); /*0x8e6d6a*/
  v39 = *(_DWORD *)(a1 + 0x10); /*0x8e6d71*/
  v37 = (_DWORD *)v5; /*0x8e6d75*/
  v38 = a2; /*0x8e6d79*/
  v7 = *(float *)(a2 + 0x18) * v4[5].m128_f32[3]; /*0x8e6d8d*/
  v8 = *(float *)(a2 + 0x18) * v6[5].m128_f32[3]; /*0x8e6d92*/
  v35 = v6; /*0x8e6d95*/
  *(float *)&v32 = v7; /*0x8e6d9b*/
  v9 = (__m128)v32; /*0x8e6d9f*/
  *(float *)&v33 = v8; /*0x8e6da5*/
  v42 = _mm_add_ps( /*0x8e6dd1*/
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), _mm_sub_ps(v4[4], v4[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), _mm_sub_ps(v6[5], v6[4])));
  v42.m128_f32[3] = v6[0xA].m128_f32[0] * v6[9].m128_f32[3] * v8 + v4[0xA].m128_f32[0] * v4[9].m128_f32[3] * v7; /*0x8e6df7*/
  if ( *(float *)(a1 + 0x1C) != *(float *)(a2 + 0x10) ) /*0x8e6e0f*/
  {
    if ( !*(_BYTE *)(*(_DWORD *)(a2 + 0x28) + 0x10) ) /*0x8e6e18*/
    {
      v10 = flt_A3B888; /*0x8e6e22*/
      *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x14); /*0x8e6e2b*/
      *(_OWORD *)(a1 + 0x20) = 0; /*0x8e6e2e*/
      *(_DWORD *)(a1 + 0x2C) = 0xFF7FFFFF; /*0x8e6e32*/
LABEL_8:
      v41 = v10; /*0x8e6e39*/
      sub_8B1FF0(v40, v4, v6); /*0x8e6e43*/
      return (*(char (__cdecl **)(int **, int, int, int, int))(0x34 * *(unsigned __int8 *)(a1 + 1) /*0x8e6e73*/
                                                             + *(_DWORD *)a2
                                                             + 0x16BC))(
               &v36,
               a1,
               a1 + 0x30,
               a1 + 0x20,
               a3);
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e6e74*/
    if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x8e6e8f*/
                                                                                      + 0x1A8) )
    {
      v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e6e97*/
      v13 = *(_DWORD **)(v12 + 0x1A4); /*0x8e6e9a*/
      v28 = v12; /*0x8e6ea0*/
      *v13 = "TtrecalcT0"; /*0x8e6ea4*/
      v14 = __rdtsc(); /*0x8e6eaa*/
      v13[1] = v14; /*0x8e6eb8*/
      *(_DWORD *)(v28 + 0x1A4) = v13 + 3; /*0x8e6ebe*/
    }
    sub_8DD150((__m128 *)(v36[2] + 0x40), *(float *)(v38 + 0x10), v47); /*0x8e6edf*/
    sub_8DD150((__m128 *)(v37[2] + 0x40), *(float *)(v38 + 0x10), v48); /*0x8e6eff*/
    v43[3] = v39; /*0x8e6f08*/
    v43[0] = v45; /*0x8e6f16*/
    v43[2] = v38; /*0x8e6f21*/
    v43[1] = v46; /*0x8e6f2f*/
    v15 = *v36; /*0x8e6f3d*/
    v45[1] = v36[1]; /*0x8e6f3f*/
    v45[0] = v15; /*0x8e6f4a*/
    v29 = v37[1]; /*0x8e6f54*/
    v46[0] = *v37; /*0x8e6f5a*/
    v46[3] = v37; /*0x8e6f65*/
    v46[1] = v29; /*0x8e6f76*/
    v45[3] = v36; /*0x8e6f7f*/
    v46[2] = v48; /*0x8e6f8e*/
    v45[2] = v47; /*0x8e6f9d*/
    sub_8B1FF0(v44, v47, v48); /*0x8e6fa4*/
    (*(void (__cdecl **)(_DWORD *, int, int))(0x34 * *(unsigned __int8 *)(a1 + 1) + *(_DWORD *)a2 + 0x16B8))( /*0x8e6fc2*/
      v43,
      a1 + 0x30,
      a1 + 0x20);
    v16 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e6fcf*/
    if ( *(_DWORD *)(v16[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v16[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8e6fe8*/
    {
      v34 = v16[MEMORY[0xBA9DE4]]; /*0x8e6ff2*/
      v17 = *(_DWORD **)(v34 + 0x1A4); /*0x8e6ff6*/
      *v17 = "Et"; /*0x8e6ffc*/
      v18 = __rdtsc(); /*0x8e7002*/
      v17[1] = v18; /*0x8e7010*/
      *(_DWORD *)(v34 + 0x1A4) = v17 + 3; /*0x8e7016*/
    }
    v6 = v35; /*0x8e701c*/
  }
  v19 = _mm_mul_ps(v42, *(__m128 *)(a1 + 0x20)); /*0x8e7032*/
  v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] + _mm_shuffle_ps(v42, v42, 0xFF).m128_f32[0]; /*0x8e7043*/
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x14); /*0x8e704e*/
  v10 = *(float *)(a1 + 0x2C) - (float)((float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]) + v20); /*0x8e7063*/
  if ( v10 < *(float *)(a2 + 8) ) /*0x8e706f*/
    goto LABEL_8; /*0x8e706f*/
  *(float *)(a1 + 0x2C) = v10; /*0x8e7075*/
  result = *(_BYTE *)(a1 + 2); /*0x8e7078*/
  if ( result ) /*0x8e707d*/
    return (*(char (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a1 + 1) + *(_DWORD *)a2 + 0x169C))( /*0x8e7095*/
             a1,
             a1 + 0x30,
             *(_DWORD *)(a1 + 0x10));
  return result; /*0x8e6d54*/
}

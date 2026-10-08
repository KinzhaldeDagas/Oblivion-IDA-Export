__m128 *__thiscall sub_8F0C90(int this, unsigned int a2, int a3)
{
  float v4; // ebx
  double v5; // st7
  __m128 *v6; // esi
  __int32 v7; // eax
  __m128 v8; // xmm1
  int *v9; // ecx
  int v10; // edx
  int *v11; // ecx
  __m128 v12; // xmm1
  int v13; // eax
  int v14; // ebx
  __m128 v15; // xmm1
  int *v16; // ecx
  int v17; // edx
  int *v18; // edi
  __m128 v19; // xmm1
  int v20; // edx
  __m128 *result; // eax
  __int128 v22; // [esp+18h] [ebp-64h] BYREF
  signed int v23; // [esp+28h] [ebp-54h]
  float v24; // [esp+2Ch] [ebp-50h]
  float v25; // [esp+30h] [ebp-4Ch]
  int v26; // [esp+34h] [ebp-48h]
  unsigned int v27; // [esp+38h] [ebp-44h]
  __m128 v28; // [esp+3Ch] [ebp-40h]
  __m128 v29; // [esp+4Ch] [ebp-30h]
  __m128 v30; // [esp+5Ch] [ebp-20h]
  __m128 v31; // [esp+6Ch] [ebp-10h]

  LODWORD(v4) = (unsigned __int16)a2 >> 1; /*0x8f0ca8*/
  v25 = v4; /*0x8f0cb5*/
  v23 = HIWORD(a2); /*0x8f0cb9*/
  if ( a3 ) /*0x8f0cbd*/
  {
    v5 = *(float *)(this + 0x14); /*0x8f0cbf*/
    *(_WORD *)(a3 + 6) = 1; /*0x8f0cc2*/
    *(float *)(a3 + 0xC) = v5; /*0x8f0cc8*/
    *(_DWORD *)(a3 + 8) = 0; /*0x8f0ccb*/
    *(_DWORD *)a3 = &hkTriangleShape::`vftable'; /*0x8f0cce*/
    HIDWORD(v22) = a3; /*0x8f0cd4*/
  }
  else
  {
    HIDWORD(v22) = 0; /*0x8f0cda*/
  }
  v6 = *(__m128 **)(this + 0x10); /*0x8f0ce2*/
  v7 = v6->m128_i32[0]; /*0x8f0ce5*/
  v24 = (float)SLODWORD(v25); /*0x8f0ce8*/
  v28.m128_f32[0] = v24; /*0x8f0cef*/
  v28.m128_f32[1] = ((double (__thiscall *)(__m128 *, _DWORD, unsigned int))*(_DWORD *)(v7 + 0x24))( /*0x8f0cf6*/
                      v6,
                      LODWORD(v4),
                      HIWORD(a2));
  v8 = v6[2]; /*0x8f0d06*/
  v25 = (float)v23; /*0x8f0d0b*/
  v28.m128_f32[2] = v25; /*0x8f0d0f*/
  v31.m128_f32[0] = v24; /*0x8f0d13*/
  v9 = *(int **)(this + 0x10); /*0x8f0d17*/
  v10 = *v9; /*0x8f0d1a*/
  v28.m128_i32[3] = 0; /*0x8f0d1c*/
  v28 = _mm_mul_ps(v28, v8); /*0x8f0d2e*/
  v26 = v23 + 1; /*0x8f0d33*/
  v31.m128_f32[1] = ((double (__thiscall *)(int *, _DWORD, int))*(_DWORD *)(v10 + 0x24))(v9, LODWORD(v4), v23 + 1); /*0x8f0d3a*/
  v11 = *(int **)(this + 0x10); /*0x8f0d4c*/
  v12 = v6[2]; /*0x8f0d4f*/
  v13 = *v11; /*0x8f0d53*/
  *(float *)&v27 = v25 + fConstant_1; /*0x8f0d55*/
  v31.m128_i32[3] = 0; /*0x8f0d59*/
  v31.m128_f32[2] = *(float *)&v27; /*0x8f0d61*/
  v14 = LODWORD(v4) + 1; /*0x8f0d75*/
  v24 = v24 + fConstant_1; /*0x8f0d7a*/
  v31 = _mm_mul_ps(v31, v12); /*0x8f0d7e*/
  v30.m128_f32[0] = v24; /*0x8f0d83*/
  v30.m128_f32[1] = ((double (__thiscall *)(int *, int, signed int))*(_DWORD *)(v13 + 0x24))(v11, v14, v23); /*0x8f0d8e*/
  v15 = v6[2]; /*0x8f0d96*/
  v30.m128_u64[1] = LODWORD(v25); /*0x8f0d9e*/
  v29.m128_f32[0] = v24; /*0x8f0da2*/
  v16 = *(int **)(this + 0x10); /*0x8f0da6*/
  v17 = *v16; /*0x8f0da9*/
  v30 = _mm_mul_ps(v30, v15); /*0x8f0dbd*/
  v29.m128_f32[1] = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(v17 + 0x24))(v16, v14, v23 + 1); /*0x8f0dc5*/
  v18 = *(int **)(this + 0x10); /*0x8f0dcd*/
  v19 = v6[2]; /*0x8f0dd0*/
  v20 = *v18; /*0x8f0dd4*/
  v29.m128_u64[1] = v27; /*0x8f0dd6*/
  v29 = _mm_mul_ps(v29, v19); /*0x8f0df1*/
  if ( *(_BYTE *)(*(int (__thiscall **)(int *, char *))(v20 + 0x28))(v18, (char *)&v22 + 0xB) ) /*0x8f0df9*/
  {
    result = (__m128 *)HIDWORD(v22); /*0x8f0e09*/
    *(__m128 *)(HIDWORD(v22) + 0x10) = v28; /*0x8f0e0d*/
    if ( (a2 & 1) != 0 ) /*0x8f0e11*/
    {
      result[2] = v29; /*0x8f0e33*/
      result[3] = v30; /*0x8f0e3c*/
    }
    else
    {
      result[2] = v31; /*0x8f0e18*/
      result[3] = v29; /*0x8f0e21*/
    }
  }
  else
  {
    result = (__m128 *)HIDWORD(v22); /*0x8f0e4b*/
    if ( (a2 & 1) != 0 ) /*0x8f0e4f*/
    {
      *(__m128 *)(HIDWORD(v22) + 0x10) = v29; /*0x8f0e7a*/
      result[2] = v30; /*0x8f0e84*/
      result[3] = v31; /*0x8f0e8e*/
    }
    else
    {
      *(__m128 *)(HIDWORD(v22) + 0x10) = v28; /*0x8f0e56*/
      result[2] = v31; /*0x8f0e5f*/
      result[3] = v30; /*0x8f0e68*/
    }
  }
  return result; /*0x8f0e25*/
}

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

  LODWORD(v4) = (unsigned __int16)a2 >> 1;
  v25 = v4;
  v23 = HIWORD(a2);
  if ( a3 )
  {
    v5 = *(float *)(this + 0x14);
    *(_WORD *)(a3 + 6) = 1;
    *(float *)(a3 + 0xC) = v5;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = &hkTriangleShape::`vftable';
    HIDWORD(v22) = a3;
  }
  else
  {
    HIDWORD(v22) = 0;
  }
  v6 = *(__m128 **)(this + 0x10);
  v7 = v6->m128_i32[0];
  v24 = (float)SLODWORD(v25);
  v28.m128_f32[0] = v24;
  v28.m128_f32[1] = ((double (__thiscall *)(__m128 *, _DWORD, unsigned int))*(_DWORD *)(v7 + 0x24))(
                      v6,
                      LODWORD(v4),
                      HIWORD(a2));
  v8 = v6[2];
  v25 = (float)v23;
  v28.m128_f32[2] = v25;
  v31.m128_f32[0] = v24;
  v9 = *(int **)(this + 0x10);
  v10 = *v9;
  v28.m128_i32[3] = 0;
  v28 = _mm_mul_ps(v28, v8);
  v26 = v23 + 1;
  v31.m128_f32[1] = ((double (__thiscall *)(int *, _DWORD, int))*(_DWORD *)(v10 + 0x24))(v9, LODWORD(v4), v23 + 1);
  v11 = *(int **)(this + 0x10);
  v12 = v6[2];
  v13 = *v11;
  *(float *)&v27 = v25 + fConstant_1;
  v31.m128_i32[3] = 0;
  v31.m128_f32[2] = *(float *)&v27;
  v14 = LODWORD(v4) + 1;
  v24 = v24 + fConstant_1;
  v31 = _mm_mul_ps(v31, v12);
  v30.m128_f32[0] = v24;
  v30.m128_f32[1] = ((double (__thiscall *)(int *, int, signed int))*(_DWORD *)(v13 + 0x24))(v11, v14, v23);
  v15 = v6[2];
  v30.m128_u64[1] = LODWORD(v25);
  v29.m128_f32[0] = v24;
  v16 = *(int **)(this + 0x10);
  v17 = *v16;
  v30 = _mm_mul_ps(v30, v15);
  v29.m128_f32[1] = ((double (__thiscall *)(int *, int, int))*(_DWORD *)(v17 + 0x24))(v16, v14, v23 + 1);
  v18 = *(int **)(this + 0x10);
  v19 = v6[2];
  v20 = *v18;
  v29.m128_u64[1] = v27;
  v29 = _mm_mul_ps(v29, v19);
  if ( *(_BYTE *)(*(int (__thiscall **)(int *, char *))(v20 + 0x28))(v18, (char *)&v22 + 0xB) )
  {
    result = (__m128 *)HIDWORD(v22);
    *(__m128 *)(HIDWORD(v22) + 0x10) = v28;
    if ( (a2 & 1) != 0 )
    {
      result[2] = v29;
      result[3] = v30;
    }
    else
    {
      result[2] = v31;
      result[3] = v29;
    }
  }
  else
  {
    result = (__m128 *)HIDWORD(v22);
    if ( (a2 & 1) != 0 )
    {
      *(__m128 *)(HIDWORD(v22) + 0x10) = v29;
      result[2] = v30;
      result[3] = v31;
    }
    else
    {
      *(__m128 *)(HIDWORD(v22) + 0x10) = v28;
      result[2] = v31;
      result[3] = v30;
    }
  }
  return result;
}

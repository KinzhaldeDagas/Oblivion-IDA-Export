char *__thiscall sub_8F8810(char *this, __m128 **a2, __m128 **a3, int a4, int a5)
{
  __m128 *v5; // eax
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 *v10; // esi
  __m128 *v11; // edx
  char *v12; // eax
  int v13; // ecx
  __m128 *v14; // eax
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __m128 v18; // xmm4
  int v19; // ebx
  __m128 *v20; // ecx
  int v21; // esi
  __m128 *v22; // edx
  char *result; // eax
  __m128 *v24; // edi
  float *i; // esi
  char *v27; // [esp+4h] [ebp-E0h]
  int v28; // [esp+8h] [ebp-DCh]
  float v29; // [esp+Ch] [ebp-D8h]
  __m128 *v30; // [esp+10h] [ebp-D4h]
  __m128 v31; // [esp+14h] [ebp-D0h] BYREF
  float v32; // [esp+24h] [ebp-C0h]
  char v33[48]; // [esp+34h] [ebp-B0h] BYREF
  char v34[128]; // [esp+64h] [ebp-80h] BYREF

  v5 = a3[2];
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  v10 = *a2;
  v30 = *a3;
  v11 = *a3 + 1;
  v12 = (char *)(v33 - (char *)v11);
  v13 = 3;
  do
  {
    *(__m128 *)((char *)v11 + (_DWORD)v12) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v6, _mm_shuffle_ps(*v11, *v11, 0)),
                                                 _mm_mul_ps(v7, _mm_shuffle_ps(*v11, *v11, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v11, *v11, 0xAA)), v9));
    ++v11;
    --v13;
  }
  while ( v13 );
  v14 = a2[2];
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  v19 = v10->m128_i32[3];
  v20 = v10 + 1;
  v21 = v19;
  v22 = v20;
  result = (char *)(v34 - (char *)v20);
  do
  {
    *(__m128 *)((char *)v22 + (_DWORD)result) = _mm_add_ps(
                                                  _mm_add_ps(
                                                    _mm_mul_ps(v15, _mm_shuffle_ps(*v22, *v22, 0)),
                                                    _mm_mul_ps(v16, _mm_shuffle_ps(*v22, *v22, 0x55))),
                                                  _mm_add_ps(_mm_mul_ps(v17, _mm_shuffle_ps(*v22, *v22, 0xAA)), v18));
    ++v22;
    --v21;
  }
  while ( v21 > 0 );
  v28 = 0;
  if ( v19 > 0 )
  {
    v27 = this + 0xC;
    v24 = (__m128 *)v34;
    for ( i = &v20->m128_f32[3]; ; i += 4 )
    {
      v29 = *i + v30->m128_f32[3];
      sub_8D20C0(v24, (__m128 *)v33, (int)v27, &v31);
      if ( v32 < (double)v29 )
        break;
      result = (char *)(v28 + 1);
      ++v24;
      if ( ++v28 >= v19 )
        return result;
    }
    return (char *)(*(int (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a5 + 4))(a5, a2, a3);
  }
  return result;
}

signed int __cdecl sub_93D4A0(int a1, char *a2, __m128 *a3, __m128 *a4)
{
  int v4; // ecx
  int v5; // ebx
  __int32 v6; // eax
  __int32 v7; // eax
  __m128 v8; // xmm0
  double v9; // st7
  signed int result; // eax
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  unsigned int v15; // [esp+18h] [ebp-194h]
  unsigned int v16; // [esp+18h] [ebp-194h]
  __m128 v17; // [esp+1Ch] [ebp-190h] BYREF
  __m128 v18; // [esp+2Ch] [ebp-180h] BYREF
  char v19; // [esp+3Ch] [ebp-170h]
  int v20; // [esp+40h] [ebp-16Ch]
  __m128 v21[8]; // [esp+4Ch] [ebp-160h] BYREF
  __m128 v22; // [esp+CCh] [ebp-E0h]
  _BYTE v23[80]; // [esp+10Ch] [ebp-A0h] BYREF
  __m128 v24; // [esp+15Ch] [ebp-50h]

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 0xC);
  v6 = a2[8];
  v18.m128_i32[1] = a2[9];
  v18.m128_i32[3] = a2[0xB];
  v18.m128_i32[0] = v6;
  v7 = a2[0xA];
  v19 = 0;
  v18.m128_i32[2] = v7;
  v20 = 0;
  (*(void (__thiscall **)(int, char *, __int32, __m128 *))(*(_DWORD *)v4 + 0x28))(v4, a2, v18.m128_i32[0], v21);
  (*(void (__thiscall **)(int, char *, __int32, _BYTE *))(*(_DWORD *)v5 + 0x28))(
    v5,
    &a2[2 * v18.m128_i32[0]],
    v18.m128_i32[1],
    v23);
  sub_93C690(&v18, *(int **)(a1 + 8), *(int **)(a1 + 0xC), *(__m128 **)a1, &v17);
  if ( v20 )
    sub_93B660(&v18, (int)a2);
  v8 = v17;
  v9 = v17.m128_f32[3] - *(float *)(*(_DWORD *)(a1 + 8) + 0xC) - *(float *)(*(_DWORD *)(a1 + 0xC) + 0xC);
  *a3 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*(__m128 *)*(_DWORD *)(a1 + 4), _mm_shuffle_ps(v17, v17, 0)),
            _mm_mul_ps(*(__m128 *)(*(_DWORD *)(a1 + 4) + 0x10), _mm_shuffle_ps(v17, v17, 0x55))),
          _mm_mul_ps(*(__m128 *)(*(_DWORD *)(a1 + 4) + 0x20), _mm_shuffle_ps(v17, v17, 0xAA)));
  a3->m128_f32[3] = v9;
  result = 1;
  if ( v9 < *(float *)(a1 + 0x10) )
  {
    if ( v18.m128_i32[0] == 1 )
    {
      *(float *)&v15 = *(float *)(*(_DWORD *)(a1 + 0xC) + 0xC) - v17.m128_f32[3];
      v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v15, (__m128)v15, 0), v8);
      v12 = v21[0];
    }
    else if ( v18.m128_i32[1] == 1 )
    {
      v13 = (__m128)*(unsigned int *)(*(_DWORD *)(a1 + 0xC) + 0xC);
      v11 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v8);
      v12 = v22;
    }
    else
    {
      *(float *)&v16 = *(float *)(*(_DWORD *)(a1 + 0xC) + 0xC) - v17.m128_f32[3];
      v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v16, (__m128)v16, 0), v8);
      v12 = v24;
    }
    v14 = _mm_add_ps(v12, v11);
    *a4 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*(__m128 *)*(_DWORD *)(a1 + 4), _mm_shuffle_ps(v14, v14, 0)),
              _mm_mul_ps(*(__m128 *)(*(_DWORD *)(a1 + 4) + 0x10), _mm_shuffle_ps(v14, v14, 0x55))),
            _mm_add_ps(
              _mm_mul_ps(*(__m128 *)(*(_DWORD *)(a1 + 4) + 0x20), _mm_shuffle_ps(v14, v14, 0xAA)),
              *(__m128 *)(*(_DWORD *)(a1 + 4) + 0x30)));
    return 0;
  }
  return result;
}

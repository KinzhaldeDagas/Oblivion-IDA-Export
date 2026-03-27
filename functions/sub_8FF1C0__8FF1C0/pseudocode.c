__m128 *__cdecl sub_8FF1C0(__m128 *a1, char *a2, __m128 *a3)
{
  int v3; // ebx
  __int32 v4; // eax
  __int32 v5; // edx
  int v6; // edi
  double v7; // st7
  __m128 *v8; // eax
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v13; // [esp+28h] [ebp-190h] BYREF
  __m128 v14; // [esp+38h] [ebp-180h] BYREF
  char v15; // [esp+48h] [ebp-170h]
  int v16; // [esp+4Ch] [ebp-16Ch]
  _BYTE v17[192]; // [esp+58h] [ebp-160h] BYREF
  _BYTE v18[160]; // [esp+118h] [ebp-A0h] BYREF

  v3 = *(_DWORD *)a1->m128_i32[1];
  v4 = a2[8];
  v5 = a2[0xA];
  v6 = *(_DWORD *)a1->m128_i32[0];
  v14.m128_i32[1] = a2[9];
  v14.m128_i32[3] = a2[0xB];
  v15 = 0;
  v14.m128_i32[0] = v4;
  v14.m128_i32[2] = v5;
  v16 = 0;
  (*(void (__thiscall **)(int, char *, __int32, _BYTE *))(*(_DWORD *)v6 + 0x28))(v6, a2, v4, v17);
  (*(void (__thiscall **)(int, char *, __int32, _BYTE *))(*(_DWORD *)v3 + 0x28))(
    v3,
    &a2[2 * v14.m128_i32[0]],
    v14.m128_i32[1],
    v18);
  sub_93C690(&v14, (int *)v6, (int *)v3, a1 + 1, &v13);
  if ( v16 )
    sub_93B660(&v14, (int)a2);
  v7 = v13.m128_f32[3];
  v8 = *(__m128 **)(a1->m128_i32[0] + 8);
  v9 = _mm_mul_ps(v8[2], _mm_shuffle_ps(v13, v13, 0xAA));
  v10 = _mm_mul_ps(v8[1], _mm_shuffle_ps(v13, v13, 0x55));
  v11 = *v8;
  *a3 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v11, _mm_shuffle_ps(v13, v13, 0)), v10), v9);
  a3->m128_f32[3] = v7 - *(float *)(v6 + 0xC) - *(float *)(v3 + 0xC);
  return a3;
}

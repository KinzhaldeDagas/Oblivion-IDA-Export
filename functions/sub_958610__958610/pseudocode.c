int __thiscall sub_958610(int **this, __m128 *a2, __m128 *a3, unsigned int a4, int a5, int a6)
{
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  int *v9; // ecx
  int v10; // edx
  __m128 v11; // xmm0
  int *v12; // ecx
  __m128 v13; // xmm0
  int *v14; // ecx
  unsigned int v16; // [esp+1Ch] [ebp-64h]
  __m128 v17; // [esp+20h] [ebp-60h] BYREF
  __m128 v18; // [esp+30h] [ebp-50h] BYREF
  __m128 v19; // [esp+40h] [ebp-40h]
  __m128 v20; // [esp+50h] [ebp-30h]
  __m128 v21; // [esp+60h] [ebp-20h]
  __m128 v22; // [esp+70h] [ebp-10h]

  v7 = *a3;
  v21 = a3[1];
  *(float *)&v16 = -*(float *)&a4;
  v22 = a3[2];
  v8 = *a2;
  v19 = (__m128)a4;
  v18 = _mm_sub_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)a4, (__m128)a4, 0), v7));
  v9 = *this;
  v17 = _mm_sub_ps(v8, _mm_mul_ps(_mm_shuffle_ps((__m128)v16, (__m128)v16, 0), v7));
  v10 = *v9;
  v20 = (__m128)v16;
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v10 + 0x1C))(v9, &v18, &v17, a5, a6);
  v11 = *a2;
  v12 = *this;
  v18 = _mm_sub_ps(*a2, _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v21));
  v17 = _mm_sub_ps(v11, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v21));
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*v12 + 0x1C))(v12, &v18, &v17, a5, a6);
  v13 = *a2;
  v18 = _mm_sub_ps(*a2, _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v22));
  v14 = *this;
  v17 = _mm_sub_ps(v13, _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v22));
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*v14 + 0x1C))(v14, &v18, &v17, a5, a6);
}

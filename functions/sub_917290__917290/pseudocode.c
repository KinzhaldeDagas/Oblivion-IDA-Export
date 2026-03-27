__m128 *__thiscall sub_917290(__m128 *this, char *a2, int a3, signed int a4)
{
  int v4; // edi
  __m128 *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  char *v13; // eax
  int v14; // edx
  int v15; // ebx
  char *v16; // eax
  unsigned int v17; // edx
  int v18; // ebx
  char *v19; // eax
  unsigned int v20; // edx
  int v21; // edx
  char *v22; // eax
  int v23; // edx
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  unsigned int v27; // [esp+14h] [ebp-2Ch]
  signed int v28; // [esp+18h] [ebp-28h]
  __m128 v30; // [esp+20h] [ebp-20h] BYREF
  __m128 v31; // [esp+30h] [ebp-10h]

  v4 = a4;
  v28 = (a4 + 3) & 0xFFFFFFFC;
  v5 = this + 3;
  *((_DWORD *)this + 0xF) = a4;
  v6 = v28 / 4;
  v7 = *((_DWORD *)this + 0xE) & 0x3FFFFFFF;
  if ( v7 < v28 / 4 )
  {
    v8 = 2 * v7;
    if ( v6 >= v8 )
      v8 = v28 / 4;
    sub_8A6E40((const void **)this + 0xC, v8, 0x30);
  }
  v9 = a2;
  v10 = 0;
  v5->m128_i32[1] = v6;
  if ( a4 >= 4 )
  {
    v27 = 1;
    do
    {
      v11 = (v10 & 3) + 0xC * ((unsigned int)v10 >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11) = *(_DWORD *)v9;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11 + 0x10) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11 + 0x20) = *((_DWORD *)v9 + 2);
      v12 = *(_DWORD *)&v9[a3];
      v13 = &v9[a3];
      v14 = (v27 & 3) + 0xC * (v27 >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14) = v12;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14 + 0x10) = *((_DWORD *)v13 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14 + 0x20) = *((_DWORD *)v13 + 2);
      v15 = *(_DWORD *)&v13[a3];
      v16 = &v13[a3];
      v17 = (((_BYTE)v27 + 1) & 3) + 0xC * ((v27 + 1) >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17) = v15;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17 + 0x10) = *((_DWORD *)v16 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17 + 0x20) = *((_DWORD *)v16 + 2);
      v18 = *(_DWORD *)&v16[a3];
      v19 = &v16[a3];
      v20 = (((_BYTE)v27 - 2) & 3) + 0xC * ((v27 + 2) >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20) = v18;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20 + 0x10) = *((_DWORD *)v19 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20 + 0x20) = *((_DWORD *)v19 + 2);
      v4 = a4;
      v27 += 4;
      v10 += 4;
      v9 = &v19[a3];
    }
    while ( v10 < a4 - 3 );
  }
  if ( v10 < v4 )
  {
    do
    {
      v21 = (v10 & 3) + 0xC * ((unsigned int)v10 >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21) = *(_DWORD *)v9;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21 + 0x10) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21 + 0x20) = *((_DWORD *)v9 + 2);
      v4 = a4;
      v9 += a3;
      ++v10;
    }
    while ( v10 < a4 );
  }
  v22 = &v9[-a3];
  if ( v10 < v28 )
  {
    do
    {
      v23 = (v10 & 3) + 0xC * (v10 >> 2);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23) = *(_DWORD *)v22;
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23 + 0x10) = *((_DWORD *)v22 + 1);
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23 + 0x20) = *((_DWORD *)v22 + 2);
      ++v10;
    }
    while ( v10 < v28 );
    v4 = a4;
  }
  sub_8B8800(a2, v4, a3, (int)&v30);
  v25 = v30;
  v26 = v31;
  *(this + 2) = _mm_add_ps(v30, v31);
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *(this + 2));
  *(this + 1) = _mm_sub_ps(v26, v25);
  *(this + 1) = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *(this + 1));
  return this;
}

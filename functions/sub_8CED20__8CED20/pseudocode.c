char __thiscall sub_8CED20(_DWORD *this, __int128 *a2)
{
  int v2; // eax
  int v4; // ecx
  int v5; // ecx
  const void **v6; // esi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int k; // eax
  bool v16; // zf
  const void *v17; // ecx
  __int128 v18; // xmm0
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  __int128 v22; // xmm0
  _DWORD *v23; // ecx
  _DWORD *v24; // eax
  int v25; // edx
  char result; // al
  const void *v27; // eax
  int v28; // esi
  int v29; // eax
  int m; // ecx
  int v31; // eax
  int n; // ecx
  long double v33; // st7
  int v34; // eax
  bool v35; // bl
  float v36; // xmm4_4
  __m128 **v37; // ecx
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm1
  __m128 v41; // xmm0
  float v42; // xmm2_4
  float v43; // xmm3_4
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __m128 v46; // xmm2
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  int v49; // [esp+14h] [ebp-5Ch]
  float v50; // [esp+14h] [ebp-5Ch]
  const void **i; // [esp+18h] [ebp-58h]
  int j; // [esp+1Ch] [ebp-54h]
  __m128 v53; // [esp+20h] [ebp-50h] BYREF
  __int128 v54; // [esp+30h] [ebp-40h]
  __int128 v55; // [esp+40h] [ebp-30h]
  int v56; // [esp+54h] [ebp-1Ch]
  int v57; // [esp+5Ch] [ebp-14h]

  v2 = *((_DWORD *)a2 + 9);
  v4 = *(_DWORD *)(v2 + 0xC);
  for ( i = (const void **)this; v4; v4 = *(_DWORD *)(v4 + 0xC) )
    v2 = v4;
  v5 = *(this + 0x6A);
  v6 = (const void **)(this + 0x69);
  v7 = v2 + *(_DWORD *)(v2 + 0x10);
  v8 = 0;
  v49 = v7;
  if ( v5 <= 0 )
    goto LABEL_9;
  v9 = *v6;
  while ( *v9 != v7 )
  {
    ++v8;
    ++v9;
    if ( v8 >= v5 )
      goto LABEL_9;
  }
  if ( v8 == 0xFFFFFFFF )
  {
LABEL_9:
    sub_8BC720((_WORD *)v7);
    if ( v6[1] == (const void *)((unsigned int)v6[2] & 0x3FFFFFFF) )
      sub_8A6EE0(v6, 4);
    *((_DWORD *)*v6 + (_DWORD)v6[1]) = v7;
    v6[1] = (char *)v6[1] + 1;
    v10 = *((_DWORD *)a2 + 8);
    v11 = *(_DWORD *)(v10 + 0xC);
    v54 = *a2;
    v55 = a2[1];
    for ( j = v10; v11; v11 = *(_DWORD *)(v11 + 0xC) )
      j = v11;
    v12 = *(_DWORD *)(v10 + 4);
    v13 = *((_DWORD *)a2 + 9);
    v14 = v13;
    v56 = v12;
    for ( k = *(_DWORD *)(v13 + 0xC); k; k = *(_DWORD *)(k + 0xC) )
      v14 = k;
    v16 = i[0x70] == (const void *)((unsigned int)i[0x71] & 0x3FFFFFFF);
    v57 = *(_DWORD *)(v13 + 4);
    if ( v16 )
      sub_8A6EE0(i + 0x6F, 0x30);
    v17 = i[0x70];
    v18 = v54;
    v19 = v56;
    i[0x70] = (char *)v17 + 1;
    v20 = (int)i[0x6F] + 0x30 * (_DWORD)v17;
    *(_DWORD *)(v20 + 0x20) = j;
    v21 = v57;
    *(_OWORD *)v20 = v18;
    v22 = v55;
    *(_DWORD *)(v20 + 0x24) = v19;
    *(_OWORD *)(v20 + 0x10) = v22;
    *(_DWORD *)(v20 + 0x28) = v14;
    *(_DWORD *)(v20 + 0x2C) = v21;
    if ( i[0x6D] == (const void *)((unsigned int)i[0x6E] & 0x3FFFFFFF) )
      sub_8A6EE0(i + 0x6C, 4);
    v7 = v49;
    *((_DWORD *)i[0x6C] + (_DWORD)i[0x6D]) = 0;
    i[0x6D] = (char *)i[0x6D] + 1;
  }
  else
  {
    v23 = i[0x6C];
    v16 = v23[v8] == 1;
    v24 = &v23[v8];
    if ( v16 )
      *v24 = 2;
  }
  if ( *(_BYTE *)(v7 + 0x2C) == 1 || (v25 = *(_DWORD *)(v7 + 0x30) & 0x3F, (result = (_BYTE)v25 == 0x14) != 0) )
  {
    if ( i[5] == (const void *)((unsigned int)i[6] & 0x3FFFFFFF) )
      sub_8A6EE0(i + 4, 0x30);
    v27 = i[5];
    v28 = (int)i[4] + 0x30 * (_DWORD)v27;
    i[5] = (char *)v27 + 1;
    *(_OWORD *)v28 = *a2;
    *(_OWORD *)(v28 + 0x10) = a2[1];
    v29 = *((_DWORD *)a2 + 8);
    for ( m = *(_DWORD *)(v29 + 0xC); m; m = *(_DWORD *)(m + 0xC) )
      v29 = m;
    *(_DWORD *)(v28 + 0x20) = v29;
    v31 = *((_DWORD *)a2 + 9);
    for ( n = *(_DWORD *)(v31 + 0xC); n; n = *(_DWORD *)(n + 0xC) )
      v31 = n;
    v33 = dbl_A99DE8;
    *(_DWORD *)(v28 + 0x28) = v31;
    *(_DWORD *)(v28 + 0x24) = 0;
    *(_DWORD *)(v28 + 0x2C) = *(_DWORD *)(*((_DWORD *)a2 + 9) + 4);
    v50 = cos(v33);
    v34 = (*(int (__thiscall **)(_DWORD))(***((_DWORD ***)a2 + 9) + 8))(**((_DWORD **)a2 + 9));
    v35 = v34 == 6;
    if ( v34 == 6 )
    {
      v36 = *(float *)&dword_A46C30;
      *(_DWORD *)(v28 + 0x24) = 2;
      v37 = *((__m128 ***)a2 + 9);
      v38 = _mm_sub_ps((*v37)[2], (*v37)[1]);
      v39 = _mm_sub_ps((*v37)[3], (*v37)[2]);
      v40 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xD2), _mm_shuffle_ps(v38, v38, 0xC9)),
              _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xC9), _mm_shuffle_ps(v38, v38, 0xD2)));
      v41 = _mm_mul_ps(v40, v40);
      v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
      v42 = 1.0 / fsqrt(v41.m128_f32[0]);
      v43 = v36 - (float)((float)(v41.m128_f32[0] * v42) * v42);
      v44 = 0;
      v44.m128_f32[0] = (float)(flt_A3D65C * v42) * v43;
      v53 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v40);
      sub_88FE00(&v53, v37[2], &v53);
      v45 = *(__m128 *)(v28 + 0x10);
      v46 = v53;
      v47 = _mm_mul_ps(v45, v53);
      v53.m128_f32[0] = _mm_shuffle_ps(v47, v47, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v47, v47, 0x55).m128_f32[0] + v47.m128_f32[0]);
      if ( v53.m128_f32[0] < 0.0 )
        v46 = _mm_xor_ps(v46, (__m128)xmmword_A965C0);
      v48 = _mm_mul_ps(v45, v46);
      v53.m128_f32[0] = _mm_shuffle_ps(v48, v48, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0]);
      if ( v50 < (double)v53.m128_f32[0] )
        *(_DWORD *)(v28 + 0x24) = 1;
    }
    result = (*(int (__thiscall **)(_DWORD))(***((_DWORD ***)a2 + 8) + 8))(**((_DWORD **)a2 + 8));
    if ( v35 )
      return sub_8CE770(i);
  }
  return result;
}

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

  v2 = *((_DWORD *)a2 + 9); /*0x8ced3a*/
  v4 = *(_DWORD *)(v2 + 0xC); /*0x8ced3f*/
  for ( i = (const void **)this; v4; v4 = *(_DWORD *)(v4 + 0xC) ) /*0x8ced48*/
    v2 = v4; /*0x8ced50*/
  v5 = *(this + 0x6A); /*0x8ced5c*/
  v6 = (const void **)(this + 0x69); /*0x8ced62*/
  v7 = v2 + *(_DWORD *)(v2 + 0x10); /*0x8ced68*/
  v8 = 0; /*0x8ced6a*/
  v49 = v7; /*0x8ced6e*/
  if ( v5 <= 0 ) /*0x8ced72*/
    goto LABEL_9; /*0x8ced72*/
  v9 = *v6; /*0x8ced74*/
  while ( *v9 != v7 ) /*0x8ced78*/
  {
    ++v8; /*0x8ced7a*/
    ++v9; /*0x8ced7d*/
    if ( v8 >= v5 ) /*0x8ced82*/
      goto LABEL_9; /*0x8ced82*/
  }
  if ( v8 == 0xFFFFFFFF ) /*0x8ced89*/
  {
LABEL_9:
    sub_8BC720((_WORD *)v7); /*0x8ced8f*/
    if ( v6[1] == (const void *)((unsigned int)v6[2] & 0x3FFFFFFF) ) /*0x8ceda1*/
      sub_8A6EE0(v6, 4); /*0x8ceda6*/
    *((_DWORD *)*v6 + (_DWORD)v6[1]) = v7; /*0x8cedb3*/
    v6[1] = (char *)v6[1] + 1; /*0x8cedb6*/
    v10 = *((_DWORD *)a2 + 8); /*0x8cedba*/
    v11 = *(_DWORD *)(v10 + 0xC); /*0x8cedc2*/
    v54 = *a2; /*0x8cedc7*/
    v55 = a2[1]; /*0x8cedd0*/
    for ( j = v10; v11; v11 = *(_DWORD *)(v11 + 0xC) ) /*0x8cedd9*/
      j = v11; /*0x8cede0*/
    v12 = *(_DWORD *)(v10 + 4); /*0x8cedeb*/
    v13 = *((_DWORD *)a2 + 9); /*0x8cedee*/
    v14 = v13; /*0x8cedf1*/
    v56 = v12; /*0x8cedf3*/
    for ( k = *(_DWORD *)(v13 + 0xC); k; k = *(_DWORD *)(k + 0xC) ) /*0x8cedfc*/
      v14 = k; /*0x8cee00*/
    v16 = i[0x70] == (const void *)((unsigned int)i[0x71] & 0x3FFFFFFF); /*0x8cee22*/
    v57 = *(_DWORD *)(v13 + 4); /*0x8cee25*/
    if ( v16 ) /*0x8cee29*/
      sub_8A6EE0(i + 0x6F, 0x30); /*0x8cee2e*/
    v17 = i[0x70]; /*0x8cee36*/
    v18 = v54; /*0x8cee39*/
    v19 = v56; /*0x8cee3e*/
    i[0x70] = (char *)v17 + 1; /*0x8cee48*/
    v20 = (int)i[0x6F] + 0x30 * (_DWORD)v17; /*0x8cee52*/
    *(_DWORD *)(v20 + 0x20) = j; /*0x8cee58*/
    v21 = v57; /*0x8cee5b*/
    *(_OWORD *)v20 = v18; /*0x8cee5f*/
    v22 = v55; /*0x8cee62*/
    *(_DWORD *)(v20 + 0x24) = v19; /*0x8cee67*/
    *(_OWORD *)(v20 + 0x10) = v22; /*0x8cee70*/
    *(_DWORD *)(v20 + 0x28) = v14; /*0x8cee74*/
    *(_DWORD *)(v20 + 0x2C) = v21; /*0x8cee77*/
    if ( i[0x6D] == (const void *)((unsigned int)i[0x6E] & 0x3FFFFFFF) ) /*0x8cee86*/
      sub_8A6EE0(i + 0x6C, 4); /*0x8cee8b*/
    v7 = v49; /*0x8cee98*/
    *((_DWORD *)i[0x6C] + (_DWORD)i[0x6D]) = 0; /*0x8cee9c*/
    i[0x6D] = (char *)i[0x6D] + 1; /*0x8ceea3*/
  }
  else
  {
    v23 = i[0x6C]; /*0x8ceead*/
    v16 = v23[v8] == 1; /*0x8ceeb3*/
    v24 = &v23[v8]; /*0x8ceeb7*/
    if ( v16 ) /*0x8ceeba*/
      *v24 = 2; /*0x8ceebc*/
  }
  if ( *(_BYTE *)(v7 + 0x2C) == 1 || (v25 = *(_DWORD *)(v7 + 0x30) & 0x3F, (result = (_BYTE)v25 == 0x14) != 0) ) /*0x8ceedb*/
  {
    if ( i[5] == (const void *)((unsigned int)i[6] & 0x3FFFFFFF) ) /*0x8ceef3*/
      sub_8A6EE0(i + 4, 0x30); /*0x8ceef8*/
    v27 = i[5]; /*0x8cef00*/
    v28 = (int)i[4] + 0x30 * (_DWORD)v27; /*0x8cef09*/
    i[5] = (char *)v27 + 1; /*0x8cef0e*/
    *(_OWORD *)v28 = *a2; /*0x8cef14*/
    *(_OWORD *)(v28 + 0x10) = a2[1]; /*0x8cef1b*/
    v29 = *((_DWORD *)a2 + 8); /*0x8cef1f*/
    for ( m = *(_DWORD *)(v29 + 0xC); m; m = *(_DWORD *)(m + 0xC) ) /*0x8cef27*/
      v29 = m; /*0x8cef30*/
    *(_DWORD *)(v28 + 0x20) = v29; /*0x8cef39*/
    v31 = *((_DWORD *)a2 + 9); /*0x8cef3c*/
    for ( n = *(_DWORD *)(v31 + 0xC); n; n = *(_DWORD *)(n + 0xC) ) /*0x8cef44*/
      v31 = n; /*0x8cef46*/
    v33 = dbl_A99DE8; /*0x8cef4f*/
    *(_DWORD *)(v28 + 0x28) = v31; /*0x8cef55*/
    *(_DWORD *)(v28 + 0x24) = 0; /*0x8cef58*/
    *(_DWORD *)(v28 + 0x2C) = *(_DWORD *)(*((_DWORD *)a2 + 9) + 4); /*0x8cef65*/
    v50 = cos(v33); /*0x8cef6d*/
    v34 = (*(int (__thiscall **)(_DWORD))(***((_DWORD ***)a2 + 9) + 8))(**((_DWORD **)a2 + 9)); /*0x8cef83*/
    v35 = v34 == 6; /*0x8cef88*/
    if ( v34 == 6 ) /*0x8cef8d*/
    {
      v36 = *(float *)&dword_A46C30; /*0x8cef93*/
      *(_DWORD *)(v28 + 0x24) = 2; /*0x8cef9b*/
      v37 = *((__m128 ***)a2 + 9); /*0x8cefa2*/
      v38 = _mm_sub_ps((*v37)[2], (*v37)[1]); /*0x8cefb3*/
      v39 = _mm_sub_ps((*v37)[3], (*v37)[2]); /*0x8cefba*/
      v40 = _mm_sub_ps( /*0x8cefd9*/
              _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xD2), _mm_shuffle_ps(v38, v38, 0xC9)),
              _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0xC9), _mm_shuffle_ps(v38, v38, 0xD2)));
      v41 = _mm_mul_ps(v40, v40); /*0x8cefdf*/
      v41.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0] /*0x8ceff1*/
                      + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
      v42 = 1.0 / fsqrt(v41.m128_f32[0]); /*0x8ceff8*/
      v43 = v36 - (float)((float)(v41.m128_f32[0] * v42) * v42); /*0x8cf013*/
      v44 = 0; /*0x8cf017*/
      v44.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v42) * v43; /*0x8cf022*/
      v53 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v40); /*0x8cf034*/
      hkBasis_TransformVector(&v53, v37[2], &v53); /*0x8cf040*/
      v45 = *(__m128 *)(v28 + 0x10); /*0x8cf047*/
      v46 = v53; /*0x8cf04b*/
      v47 = _mm_mul_ps(v45, v53); /*0x8cf053*/
      v53.m128_f32[0] = _mm_shuffle_ps(v47, v47, 0xAA).m128_f32[0] /*0x8cf06c*/
                      + (float)(_mm_shuffle_ps(v47, v47, 0x55).m128_f32[0] + v47.m128_f32[0]);
      if ( v53.m128_f32[0] < 0.0 ) /*0x8cf07b*/
        v46 = _mm_xor_ps(v46, (__m128)xmmword_A965C0); /*0x8cf084*/
      v48 = _mm_mul_ps(v45, v46); /*0x8cf087*/
      v53.m128_f32[0] = _mm_shuffle_ps(v48, v48, 0xAA).m128_f32[0] /*0x8cf0a0*/
                      + (float)(_mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0]);
      if ( v50 < (double)v53.m128_f32[0] ) /*0x8cf0b5*/
        *(_DWORD *)(v28 + 0x24) = 1; /*0x8cf0b7*/
    }
    result = (*(int (__thiscall **)(_DWORD))(***((_DWORD ***)a2 + 8) + 8))(**((_DWORD **)a2 + 8)); /*0x8cf0c8*/
    if ( v35 ) /*0x8cf0cc*/
      return sub_8CE770(i); /*0x8cf0d2*/
  }
  return result; /*0x8cf0d7*/
}

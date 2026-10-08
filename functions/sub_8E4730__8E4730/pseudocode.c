char *__thiscall sub_8E4730(char *this, __m128 *a2, __m128 *a3, signed int a4)
{
  char *v5; // edi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  __m128 v9; // xmm1
  int v10; // ecx
  double v11; // st7
  double v12; // st7
  __m128 v13; // xmm0
  _WORD *v14; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  __int16 v23; // dx
  int v24; // eax
  int v25; // eax
  int v26; // ebx
  bool v27; // cc
  float v29; // [esp+Ch] [ebp-34h]
  int v30; // [esp+Ch] [ebp-34h]
  float v31; // [esp+10h] [ebp-30h]
  int v32; // [esp+10h] [ebp-30h]
  unsigned int v33; // [esp+14h] [ebp-2Ch]
  int v34; // [esp+14h] [ebp-2Ch]
  unsigned int v35; // [esp+18h] [ebp-28h]
  int v36; // [esp+18h] [ebp-28h]
  _WORD *v37; // [esp+1Ch] [ebp-24h]
  __m128 v38; // [esp+20h] [ebp-20h]
  __m128 v39; // [esp+30h] [ebp-10h]

  *((_WORD *)this + 3) = 1; /*0x8e473f*/
  *(_DWORD *)this = &off_A9A710; /*0x8e4745*/
  *((_DWORD *)this + 0x10) = 0; /*0x8e474b*/
  *((_DWORD *)this + 0x11) = 0; /*0x8e474e*/
  *((_DWORD *)this + 0x12) = 0x80000000; /*0x8e4756*/
  v5 = this + 0x4C; /*0x8e475a*/
  *((_DWORD *)this + 0x13) = 0; /*0x8e475f*/
  *((_DWORD *)this + 0x14) = 0; /*0x8e4761*/
  *((_DWORD *)this + 0x15) = 0x80000000; /*0x8e4764*/
  *((_DWORD *)this + 0x16) = 0; /*0x8e476d*/
  *((_DWORD *)this + 0x17) = 0; /*0x8e4770*/
  *((_DWORD *)this + 0x18) = 0x80000000; /*0x8e4773*/
  *((_DWORD *)this + 0x19) = 0; /*0x8e4776*/
  *((_DWORD *)this + 0x1A) = 0; /*0x8e4778*/
  *((_DWORD *)this + 0x1B) = 0x80000000; /*0x8e477b*/
  v6 = a4; /*0x8e477e*/
  if ( !a4 ) /*0x8e4783*/
    v6 = 1; /*0x8e4785*/
  v7 = 0xFFFFFFFF; /*0x8e478a*/
  v33 = 0xFFFFFFFF; /*0x8e478f*/
  if ( v6 > 0 ) /*0x8e4793*/
  {
    do /*0x8e479a*/
    {
      v6 >>= 1; /*0x8e4795*/
      ++v7; /*0x8e4797*/
    }
    while ( v6 > 0 ); /*0x8e479a*/
    v33 = v7; /*0x8e479c*/
  }
  if ( (*((_DWORD *)this + 0x12) & 0x3FFFFFFFu) < 0xFF ) /*0x8e47b0*/
  {
    v8 = 2 * (*((_DWORD *)this + 0x12) & 0x3FFFFFFF); /*0x8e47b2*/
    if ( v8 <= 0xFF ) /*0x8e47b9*/
      v8 = 0xFF; /*0x8e47bb*/
    sub_8A6E40((const void **)this + 0x10, v8, 0x10); /*0x8e47c4*/
  }
  *((_OWORD *)this + 1) = 0; /*0x8e47dd*/
  *((_OWORD *)this + 2) = 0; /*0x8e47e1*/
  v9 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0); /*0x8e47e5*/
  *((__m128 *)this + 3) = v9; /*0x8e47e9*/
  v31 = 10.0; /*0x8e4802*/
  v29 = 11.0; /*0x8e480a*/
  v10 = 0x17; /*0x8e4812*/
  do /*0x8e4875*/
  {
    v11 = (v29 + v31) * kHeadBodyNormalMatchRadius; /*0x8e4828*/
    *(float *)&v35 = fConstant_1 + v11; /*0x8e4836*/
    if ( ((unsigned __int16)(COERCE_UNSIGNED_INT( /*0x8e4868*/
                               fmax(
                                 fmin(
                                   (float)(_mm_shuffle_ps((__m128)v35, (__m128)v35, 0).m128_f32[0] + 0.0)
                                 * v9.m128_f32[0],
                                   *(float *)&xmmword_B2FC70),
                                 *(float *)&xmmword_A9A660)
                             + *(float *)&xmmword_A9A650) >> 7)
        | 1u) >= 0xC )
      v29 = v11; /*0x8e4870*/
    else
      v31 = v11; /*0x8e486a*/
    --v10; /*0x8e4874*/
  }
  while ( v10 ); /*0x8e4875*/
  v38.m128_i32[3] = 0; /*0x8e488d*/
  *((float *)this + 0x1F) = (v29 + v31) * kHeadBodyNormalMatchRadius - flt_A6BC94; /*0x8e48a1*/
  v12 = fConstant_1; /*0x8e48aa*/
  v39 = _mm_sub_ps(*a3, *a2); /*0x8e48b3*/
  *((__m128 *)this + 3) = _mm_shuffle_ps((__m128)0x477FFC00u, (__m128)0x477FFC00u, 0); /*0x8e48c6*/
  v38.m128_f32[0] = v12 / v39.m128_f32[0]; /*0x8e48d6*/
  v38.m128_f32[1] = fConstant_1 / v39.m128_f32[1]; /*0x8e48e4*/
  v38.m128_f32[2] = fConstant_1 / v39.m128_f32[2]; /*0x8e48f2*/
  *((__m128 *)this + 3) = _mm_mul_ps(*((__m128 *)this + 3), v38); /*0x8e48fe*/
  v13 = _mm_xor_ps(*a2, (__m128)xmmword_A965C0); /*0x8e490c*/
  *((__m128 *)this + 1) = v13; /*0x8e4915*/
  *((__m128 *)this + 2) = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps((__m128)0x37800200u, (__m128)0x37800200u, 0), v39)); /*0x8e4926*/
  *((_DWORD *)this + 0xF) = 0; /*0x8e492a*/
  *((_DWORD *)this + 7) = 0; /*0x8e492d*/
  *((_DWORD *)this + 0xB) = 0; /*0x8e4930*/
  if ( *((_DWORD *)this + 0x11) == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) ) /*0x8e4944*/
    sub_8A6EE0((const void **)this + 0x10, 0x10); /*0x8e4949*/
  v14 = (_WORD *)(*((_DWORD *)this + 0x10) + 0x10 * (*((_DWORD *)this + 0x11))++); /*0x8e495c*/
  v14[1] = 0; /*0x8e4968*/
  *v14 = 0; /*0x8e496c*/
  v14[4] = 0; /*0x8e496f*/
  v37 = v14; /*0x8e497a*/
  v15 = 2 * (1 << v33) + 0x1FE; /*0x8e497e*/
  v36 = 1 << v33; /*0x8e4985*/
  v16 = *((_DWORD *)this + 0x15) & 0x3FFFFFFF; /*0x8e498c*/
  if ( v16 < v15 ) /*0x8e4993*/
  {
    v17 = 2 * v16; /*0x8e4995*/
    if ( v15 >= v17 ) /*0x8e4999*/
      v17 = 2 * (1 << v33) + 0x1FE; /*0x8e499b*/
    sub_8A6E40((const void **)this + 0x13, v17, 4); /*0x8e49a1*/
  }
  if ( (*((_DWORD *)this + 0x18) & 0x3FFFFFFFu) < 0x200 ) /*0x8e49b9*/
  {
    v18 = 2 * (*((_DWORD *)this + 0x18) & 0x3FFFFFFF); /*0x8e49bb*/
    if ( v18 <= 0x200 ) /*0x8e49c2*/
      v18 = 0x200; /*0x8e49c4*/
    sub_8A6E40((const void **)this + 0x16, v18, 4); /*0x8e49cd*/
  }
  if ( (*((_DWORD *)this + 0x1B) & 0x3FFFFFFFu) < 0x200 ) /*0x8e49e5*/
  {
    v19 = 2 * (*((_DWORD *)this + 0x1B) & 0x3FFFFFFF); /*0x8e49e7*/
    if ( v19 <= 0x200 ) /*0x8e49ee*/
      v19 = 0x200; /*0x8e49f0*/
    sub_8A6E40((const void **)this + 0x19, v19, 4); /*0x8e49f9*/
  }
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*((_DWORD *)this + 0x14))++) = 0; /*0x8e4a16*/
  *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * (*((_DWORD *)this + 0x17))++) = 0; /*0x8e4a22*/
  *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * (*((_DWORD *)this + 0x1A))++) = 0; /*0x8e4a2e*/
  *((_DWORD *)this + 0x1D) = v33; /*0x8e4a3c*/
  *((_DWORD *)this + 0x1C) = v36 - 1; /*0x8e4a48*/
  *((_DWORD *)this + 0x1E) = 0; /*0x8e4a4b*/
  if ( v36 != 1 ) /*0x8e4a4e*/
    *((_DWORD *)this + 0x1E) = (**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, 0x10 * (v36 - 1), 0x1E); /*0x8e4a60*/
  v20 = 0; /*0x8e4a68*/
  v34 = 0; /*0x8e4a6c*/
  if ( *((int *)this + 0x1C) > 0 ) /*0x8e4a70*/
  {
    v21 = 0; /*0x8e4a76*/
    v32 = 0; /*0x8e4a78*/
    do /*0x8e4b58*/
    {
      v22 = v21 + *((_DWORD *)this + 0x1E); /*0x8e4a83*/
      if ( v22 ) /*0x8e4a85*/
      {
        *(_DWORD *)(v22 + 4) = 0; /*0x8e4a87*/
        *(_DWORD *)(v22 + 8) = 0; /*0x8e4a8a*/
        *(_DWORD *)(v22 + 0xC) = 0x80000000; /*0x8e4a8d*/
      }
      else
      {
        v22 = 0; /*0x8e4a96*/
      }
      v23 = *((_WORD *)this + 0x22); /*0x8e4a98*/
      v24 = (v20 + 1) << (0x10 - *(this + 0x74)); /*0x8e4aa5*/
      *(_WORD *)v22 = v23; /*0x8e4aa7*/
      HIWORD(v30) = v23; /*0x8e4aaa*/
      *(_WORD *)(v22 + 2) = v24; /*0x8e4aaf*/
      LOWORD(v30) = v24; /*0x8e4ab9*/
      if ( *((_DWORD *)this + 0x11) == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) ) /*0x8e4ac8*/
        sub_8A6EE0((const void **)this + 0x10, 0x10); /*0x8e4acd*/
      v25 = *((_DWORD *)this + 0x10) + 0x10 * (*((_DWORD *)this + 0x11))++; /*0x8e4adf*/
      v26 = v30; /*0x8e4ae9*/
      LOBYTE(v30) = v30 | 1; /*0x8e4aed*/
      *(_WORD *)(v25 + 8) = *((_WORD *)this + 0x28); /*0x8e4af2*/
      *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * (*((_DWORD *)this + 0x14))++) = v26; /*0x8e4afb*/
      *(_WORD *)(v25 + 0xA) = *((_WORD *)this + 0x28); /*0x8e4b0d*/
      *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * (*((_DWORD *)this + 0x14))++) = v30; /*0x8e4b16*/
      *(_DWORD *)(v25 + 0xC) = v32 | 1; /*0x8e4b2d*/
      *(_WORD *)(v25 + 2) = 0; /*0x8e4b30*/
      *(_WORD *)v25 = 0; /*0x8e4b36*/
      *(_WORD *)(v25 + 6) = 1; /*0x8e4b3b*/
      *(_WORD *)(v25 + 4) = 1; /*0x8e4b3f*/
      v20 = v34 + 1; /*0x8e4b4a*/
      v21 = v32 + 0x10; /*0x8e4b4b*/
      v27 = ++v34 < *((_DWORD *)this + 0x1C); /*0x8e4b4e*/
      v32 += 0x10; /*0x8e4b54*/
    }
    while ( v27 ); /*0x8e4b58*/
    v14 = v37; /*0x8e4b5e*/
  }
  v14[5] = *((_WORD *)this + 0x28); /*0x8e4b68*/
  v14[2] = *((_WORD *)this + 0x2E); /*0x8e4b70*/
  v14[3] = *((_WORD *)this + 0x34); /*0x8e4b78*/
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*((_DWORD *)this + 0x14))++) = 0xFFFD; /*0x8e4b91*/
  *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * (*((_DWORD *)this + 0x17))++) = 0xFFFD; /*0x8e4b9d*/
  *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * (*((_DWORD *)this + 0x1A))++) = 0xFFFD; /*0x8e4ba9*/
  return this; /*0x8e4baf*/
}

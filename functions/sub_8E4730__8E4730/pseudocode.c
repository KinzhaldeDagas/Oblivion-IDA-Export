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

  *((_WORD *)this + 3) = 1;
  *(_DWORD *)this = &off_A9A710;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0x80000000;
  v5 = this + 0x4C;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0x80000000;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0x80000000;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 0;
  *((_DWORD *)this + 0x1B) = 0x80000000;
  v6 = a4;
  if ( !a4 )
    v6 = 1;
  v7 = 0xFFFFFFFF;
  v33 = 0xFFFFFFFF;
  if ( v6 > 0 )
  {
    do
    {
      v6 >>= 1;
      ++v7;
    }
    while ( v6 > 0 );
    v33 = v7;
  }
  if ( (*((_DWORD *)this + 0x12) & 0x3FFFFFFFu) < 0xFF )
  {
    v8 = 2 * (*((_DWORD *)this + 0x12) & 0x3FFFFFFF);
    if ( v8 <= 0xFF )
      v8 = 0xFF;
    sub_8A6E40((const void **)this + 0x10, v8, 0x10);
  }
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  v9 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
  *((__m128 *)this + 3) = v9;
  v31 = 10.0;
  v29 = 11.0;
  v10 = 0x17;
  do
  {
    v11 = (v29 + v31) * flt_A3D65C;
    *(float *)&v35 = fConstant_1 + v11;
    if ( ((unsigned __int16)(COERCE_UNSIGNED_INT(
                               fmax(
                                 fmin(
                                   (float)(_mm_shuffle_ps((__m128)v35, (__m128)v35, 0).m128_f32[0] + 0.0)
                                 * v9.m128_f32[0],
                                   *(float *)&xmmword_B2FC70),
                                 *(float *)&xmmword_A9A660)
                             + *(float *)&xmmword_A9A650) >> 7)
        | 1u) >= 0xC )
      v29 = v11;
    else
      v31 = v11;
    --v10;
  }
  while ( v10 );
  v38.m128_i32[3] = 0;
  *((float *)this + 0x1F) = (v29 + v31) * flt_A3D65C - flt_A6BC94;
  v12 = fConstant_1;
  v39 = _mm_sub_ps(*a3, *a2);
  *((__m128 *)this + 3) = _mm_shuffle_ps((__m128)0x477FFC00u, (__m128)0x477FFC00u, 0);
  v38.m128_f32[0] = v12 / v39.m128_f32[0];
  v38.m128_f32[1] = fConstant_1 / v39.m128_f32[1];
  v38.m128_f32[2] = fConstant_1 / v39.m128_f32[2];
  *((__m128 *)this + 3) = _mm_mul_ps(*((__m128 *)this + 3), v38);
  v13 = _mm_xor_ps(*a2, (__m128)xmmword_A965C0);
  *((__m128 *)this + 1) = v13;
  *((__m128 *)this + 2) = _mm_add_ps(v13, _mm_mul_ps(_mm_shuffle_ps((__m128)0x37800200u, (__m128)0x37800200u, 0), v39));
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 0xB) = 0;
  if ( *((_DWORD *)this + 0x11) == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this + 0x10, 0x10);
  v14 = (_WORD *)(*((_DWORD *)this + 0x10) + 0x10 * (*((_DWORD *)this + 0x11))++);
  v14[1] = 0;
  *v14 = 0;
  v14[4] = 0;
  v37 = v14;
  v15 = 2 * (1 << v33) + 0x1FE;
  v36 = 1 << v33;
  v16 = *((_DWORD *)this + 0x15) & 0x3FFFFFFF;
  if ( v16 < v15 )
  {
    v17 = 2 * v16;
    if ( v15 >= v17 )
      v17 = 2 * (1 << v33) + 0x1FE;
    sub_8A6E40((const void **)this + 0x13, v17, 4);
  }
  if ( (*((_DWORD *)this + 0x18) & 0x3FFFFFFFu) < 0x200 )
  {
    v18 = 2 * (*((_DWORD *)this + 0x18) & 0x3FFFFFFF);
    if ( v18 <= 0x200 )
      v18 = 0x200;
    sub_8A6E40((const void **)this + 0x16, v18, 4);
  }
  if ( (*((_DWORD *)this + 0x1B) & 0x3FFFFFFFu) < 0x200 )
  {
    v19 = 2 * (*((_DWORD *)this + 0x1B) & 0x3FFFFFFF);
    if ( v19 <= 0x200 )
      v19 = 0x200;
    sub_8A6E40((const void **)this + 0x19, v19, 4);
  }
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*((_DWORD *)this + 0x14))++) = 0;
  *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * (*((_DWORD *)this + 0x17))++) = 0;
  *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * (*((_DWORD *)this + 0x1A))++) = 0;
  *((_DWORD *)this + 0x1D) = v33;
  *((_DWORD *)this + 0x1C) = v36 - 1;
  *((_DWORD *)this + 0x1E) = 0;
  if ( v36 != 1 )
    *((_DWORD *)this + 0x1E) = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(
                                 dword_BA7D98,
                                 0x10 * (v36 - 1),
                                 0x1E);
  v20 = 0;
  v34 = 0;
  if ( *((int *)this + 0x1C) > 0 )
  {
    v21 = 0;
    v32 = 0;
    do
    {
      v22 = v21 + *((_DWORD *)this + 0x1E);
      if ( v22 )
      {
        *(_DWORD *)(v22 + 4) = 0;
        *(_DWORD *)(v22 + 8) = 0;
        *(_DWORD *)(v22 + 0xC) = 0x80000000;
      }
      else
      {
        v22 = 0;
      }
      v23 = *((_WORD *)this + 0x22);
      v24 = (v20 + 1) << (0x10 - *(this + 0x74));
      *(_WORD *)v22 = v23;
      HIWORD(v30) = v23;
      *(_WORD *)(v22 + 2) = v24;
      LOWORD(v30) = v24;
      if ( *((_DWORD *)this + 0x11) == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)this + 0x10, 0x10);
      v25 = *((_DWORD *)this + 0x10) + 0x10 * (*((_DWORD *)this + 0x11))++;
      v26 = v30;
      LOBYTE(v30) = v30 | 1;
      *(_WORD *)(v25 + 8) = *((_WORD *)this + 0x28);
      *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * (*((_DWORD *)this + 0x14))++) = v26;
      *(_WORD *)(v25 + 0xA) = *((_WORD *)this + 0x28);
      *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * (*((_DWORD *)this + 0x14))++) = v30;
      *(_DWORD *)(v25 + 0xC) = v32 | 1;
      *(_WORD *)(v25 + 2) = 0;
      *(_WORD *)v25 = 0;
      *(_WORD *)(v25 + 6) = 1;
      *(_WORD *)(v25 + 4) = 1;
      v20 = v34 + 1;
      v21 = v32 + 0x10;
      v27 = ++v34 < *((_DWORD *)this + 0x1C);
      v32 += 0x10;
    }
    while ( v27 );
    v14 = v37;
  }
  v14[5] = *((_WORD *)this + 0x28);
  v14[2] = *((_WORD *)this + 0x2E);
  v14[3] = *((_WORD *)this + 0x34);
  *(_DWORD *)(*(_DWORD *)v5 + 4 * (*((_DWORD *)this + 0x14))++) = 0xFFFD;
  *(_DWORD *)(*((_DWORD *)this + 0x16) + 4 * (*((_DWORD *)this + 0x17))++) = 0xFFFD;
  *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * (*((_DWORD *)this + 0x1A))++) = 0xFFFD;
  return this;
}

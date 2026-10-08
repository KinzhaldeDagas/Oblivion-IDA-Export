int __thiscall sub_926EC0(__m128 *this, int a2)
{
  int v2; // ebx
  __m128 v3; // xmm0
  __m128 *v4; // edi
  double v5; // st7
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm1
  __m128 v9; // xmm2
  __m128 v10; // xmm4
  double v11; // st7
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __m128 v14; // xmm5
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  double v22; // st7
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm1
  int v26; // eax
  double v27; // st6
  int v28; // eax
  __m128 v29; // xmm0
  unsigned int v31; // [esp+8h] [ebp-34h]
  float v32; // [esp+8h] [ebp-34h]
  unsigned int v33; // [esp+8h] [ebp-34h]
  unsigned int v34; // [esp+8h] [ebp-34h]
  unsigned int v35; // [esp+8h] [ebp-34h]
  float v36; // [esp+8h] [ebp-34h]
  unsigned int v37; // [esp+8h] [ebp-34h]
  unsigned int v38; // [esp+8h] [ebp-34h]
  unsigned int v39; // [esp+8h] [ebp-34h]
  float v40; // [esp+8h] [ebp-34h]
  unsigned int v41; // [esp+8h] [ebp-34h]
  unsigned int v42; // [esp+8h] [ebp-34h]
  unsigned int v43; // [esp+8h] [ebp-34h]
  __m128 v44; // [esp+Ch] [ebp-30h]
  __m128 v45; // [esp+Ch] [ebp-30h]
  __m128 v46; // [esp+Ch] [ebp-30h]
  __m128 v47; // [esp+Ch] [ebp-30h]
  __m128 v48; // [esp+Ch] [ebp-30h]
  __m128 v49; // [esp+1Ch] [ebp-20h]
  __m128 v50; // [esp+2Ch] [ebp-10h] BYREF

  v2 = *((_DWORD *)this + 6); /*0x926ecd*/
  v3 = *(this + 3); /*0x926ed0*/
  v4 = *(__m128 **)(v2 + 0x50); /*0x926ed5*/
  v5 = v4[8].m128_f32[3]; /*0x926ed8*/
  v44 = v4[8]; /*0x926ee7*/
  v44.m128_i32[3] = 0; /*0x926eee*/
  v6 = _mm_mul_ps(v44, v3); /*0x926f00*/
  *(float *)&v31 = v5 * v5 + v5 * v5 - fConstant_1; /*0x926f1b*/
  v7 = (__m128)v31; /*0x926f1f*/
  v32 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x926f2d*/
  *(float *)&v33 = v32 + v32; /*0x926f41*/
  v8 = (__m128)v33; /*0x926f45*/
  *(float *)&v34 = v5 + v5; /*0x926f5b*/
  v9 = *(this + 2); /*0x926f83*/
  v10 = _mm_add_ps( /*0x926f9a*/
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v3), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v44)),
          _mm_mul_ps(
            _mm_shuffle_ps((__m128)v34, (__m128)v34, 0),
            _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0xC9), _mm_shuffle_ps(v3, v3, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0xD2), _mm_shuffle_ps(v3, v3, 0xC9)))));
  v50 = v10; /*0x926f9d*/
  v11 = v4[8].m128_f32[3]; /*0x926fa2*/
  v45 = v4[8]; /*0x926fb3*/
  v45.m128_i32[3] = 0; /*0x926fb8*/
  v12 = v45; /*0x926fc0*/
  v13 = _mm_mul_ps(v45, v9); /*0x926fca*/
  *(float *)&v35 = v11 * v11 + v11 * v11 - fConstant_1; /*0x926fe1*/
  v14 = (__m128)v35; /*0x926fe5*/
  v36 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x926ff7*/
      + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  *(float *)&v37 = v36 + v36; /*0x92700f*/
  v46 = (__m128)v37; /*0x927019*/
  *(float *)&v38 = v11 + v11; /*0x927024*/
  v15 = _mm_add_ps( /*0x92707b*/
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v9), _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v12)),
          _mm_mul_ps(
            _mm_shuffle_ps((__m128)v38, (__m128)v38, 0),
            _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9)))));
  v16 = _mm_mul_ps(v3, v15); /*0x92707e*/
  v49 = v15; /*0x9270a1*/
  *(float *)&v39 = -(float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x9270a6*/
                          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]));
  v17 = _mm_add_ps(v3, _mm_mul_ps(_mm_shuffle_ps((__m128)v39, (__m128)v39, 0), v15)); /*0x9270ba*/
  v18 = _mm_mul_ps(v17, v17); /*0x9270c0*/
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x9270d8*/
                  + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v12.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0]); /*0x9270eb*/
  v14.m128_f32[0] = 3.0 - (float)((float)(v18.m128_f32[0] * v12.m128_f32[0]) * v12.m128_f32[0]); /*0x927106*/
  v19 = (__m128)0x3F000000u; /*0x927112*/
  v19.m128_f32[0] = (float)(0.5 * v12.m128_f32[0]) * v14.m128_f32[0]; /*0x92711c*/
  v20 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v17); /*0x92712a*/
  v21 = _mm_mul_ps(v10, v20); /*0x927135*/
  v40 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x927152*/
      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
  if ( fabs(v40) < fConstant_1 ) /*0x927167*/
  {
    v22 = acos(v40); /*0x92718e*/
    v15 = v49; /*0x927193*/
    v10 = v50; /*0x92719d*/
  }
  else if ( v40 <= (double)*(float *)&SrcStr ) /*0x927178*/
  {
    v22 = flt_AA1854; /*0x927182*/
  }
  else
  {
    v22 = *(float *)&SrcStr; /*0x92717a*/
  }
  v23 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v20, v20, 0xC9)); /*0x9271b0*/
  v24 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v20, v20, 0xD2)); /*0x9271c4*/
  v25 = (__m128)xmmword_A372D0; /*0x9271c7*/
  v50 = _mm_sub_ps(v24, v23); /*0x9271d1*/
  v47 = _mm_and_ps(v50, v25); /*0x9271d9*/
  if ( v47.m128_f32[0] >= (double)v47.m128_f32[1] ) /*0x9271eb*/
  {
    if ( v47.m128_f32[0] >= (double)v47.m128_f32[2] ) /*0x927217*/
      v26 = 0; /*0x927220*/
    else
      v26 = 2; /*0x927219*/
  }
  else if ( v47.m128_f32[1] >= (double)v47.m128_f32[2] ) /*0x9271fa*/
  {
    v26 = 1; /*0x927203*/
  }
  else
  {
    v26 = 2; /*0x9271fc*/
  }
  v27 = v50.m128_f32[v26]; /*0x927222*/
  v48 = _mm_and_ps(v15, v25); /*0x92722c*/
  if ( v48.m128_f32[0] >= (double)v48.m128_f32[1] ) /*0x92723e*/
  {
    if ( v48.m128_f32[0] >= (double)v48.m128_f32[2] ) /*0x92726a*/
      v28 = 0; /*0x927273*/
    else
      v28 = 2; /*0x92726c*/
  }
  else if ( v48.m128_f32[1] >= (double)v48.m128_f32[2] ) /*0x92724d*/
  {
    v28 = 1; /*0x927256*/
  }
  else
  {
    v28 = 2; /*0x92724f*/
  }
  *(float *)&v41 = v27; /*0x927286*/
  if ( (((unsigned __int8)_mm_movemask_ps((__m128)v41) /*0x927298*/
       ^ (unsigned __int8)_mm_movemask_ps((__m128)COERCE_UNSIGNED_INT(v49.m128_f32[v28])))
      & 1) != 0 )
    v22 = -v22; /*0x92729a*/
  *(float *)&v42 = *((float *)this + 0x11) * *(float *)(a2 + 0xC); /*0x9272ae*/
  v29 = _mm_mul_ps(_mm_shuffle_ps((__m128)v42, (__m128)v42, 0), v4[0xE]); /*0x9272c8*/
  *(float *)&v43 = *((float *)this + 0x10) * *(float *)(a2 + 0xC) * v22; /*0x9272cd*/
  v50 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v43, (__m128)v43, 0), v15), v29); /*0x9272e6*/
  sub_8A6410(v2); /*0x9272eb*/
  return (*(int (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v2 + 0x50) + 0x64))(*(_DWORD *)(v2 + 0x50), &v50); /*0x9272fe*/
}

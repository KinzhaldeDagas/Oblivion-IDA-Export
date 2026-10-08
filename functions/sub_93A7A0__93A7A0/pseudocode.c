signed int __thiscall sub_93A7A0(__m128 *this)
{
  double v1; // st7
  __m128 v2; // xmm1
  int v3; // esi
  int v4; // edi
  int v5; // edx
  __m128 *v6; // ebx
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  double v9; // st6
  int v10; // edi
  __m128 *v11; // ebx
  double v12; // st7
  int v13; // edx
  __m128 *v14; // esi
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm2
  double v18; // st7
  __m128 v19; // xmm0
  int v20; // esi
  __m128 v21; // xmm1
  int v22; // edx
  __m128 *v23; // edi
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  double v27; // st7
  int v28; // ebx
  __m128 *v29; // esi
  int v30; // edx
  __m128 *v31; // edi
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  double v34; // st7
  int v35; // edx
  double v36; // st6
  double v37; // st5
  double v38; // st6
  double v39; // st5
  double v40; // st6
  double v41; // st6
  signed int result; // eax
  float v43; // [esp+0h] [ebp-24h]
  float v44; // [esp+0h] [ebp-24h]
  float v45; // [esp+0h] [ebp-24h]
  float v46; // [esp+0h] [ebp-24h]
  float v47; // [esp+0h] [ebp-24h]
  float v48; // [esp+0h] [ebp-24h]
  float v49; // [esp+0h] [ebp-24h]
  float v50; // [esp+4h] [ebp-20h]
  float v51; // [esp+4h] [ebp-20h]
  float v52; // [esp+8h] [ebp-1Ch]
  _BYTE v53[4]; // [esp+Ch] [ebp-18h]
  char v54; // [esp+10h] [ebp-14h]
  float v55; // [esp+14h] [ebp-10h]
  float v56; // [esp+18h] [ebp-Ch]
  float v57; // [esp+1Ch] [ebp-8h]
  float v58; // [esp+20h] [ebp-4h]

  v1 = *(float *)&SrcStr; /*0x93a7a9*/
  v2 = *(this + 0xC); /*0x93a7af*/
  v3 = 0; /*0x93a7b9*/
  v4 = 0; /*0x93a7bb*/
  v53[0] = 0; /*0x93a7bd*/
  v53[1] = 0; /*0x93a7c2*/
  v53[2] = 0; /*0x93a7c7*/
  v53[3] = 0; /*0x93a7cc*/
  v54 = 0; /*0x93a7d1*/
  v52 = 3.4028235e38; /*0x93a7d6*/
  v5 = 0; /*0x93a7de*/
  v6 = this; /*0x93a7e0*/
  do /*0x93a849*/
  {
    v7 = _mm_sub_ps(v2, *v6); /*0x93a7e8*/
    v8 = _mm_mul_ps(v7, v7); /*0x93a7eb*/
    v43 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]); /*0x93a808*/
    *(&v55 + v5) = v43; /*0x93a810*/
    if ( v43 > v1 ) /*0x93a81f*/
    {
      v3 = v5; /*0x93a823*/
      v1 = v43; /*0x93a825*/
    }
    if ( v43 < (double)v52 ) /*0x93a836*/
    {
      v52 = v43; /*0x93a83c*/
      v4 = v5; /*0x93a840*/
    }
    ++v5; /*0x93a842*/
    v6 += 3; /*0x93a843*/
  }
  while ( v5 < 4 ); /*0x93a849*/
  v9 = *((float *)this + 0x37) - *((float *)this + 0xC * v4 + 7); /*0x93a857*/
  v53[v3] = 1; /*0x93a861*/
  v50 = v9; /*0x93a866*/
  v10 = 4; /*0x93a86a*/
  v11 = this + 3 * v3; /*0x93a86f*/
  v12 = v1 * flt_AA1DB8; /*0x93a872*/
  v13 = 0; /*0x93a878*/
  v14 = this; /*0x93a87a*/
  do /*0x93a8ce*/
  {
    if ( !v53[v13] ) /*0x93a880*/
    {
      v15 = _mm_sub_ps(*v11, *v14); /*0x93a88e*/
      v16 = _mm_mul_ps(v15, v15); /*0x93a891*/
      v44 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x93a8ae*/
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      if ( v44 > v12 ) /*0x93a8bd*/
      {
        v10 = v13; /*0x93a8c1*/
        v12 = v44; /*0x93a8c3*/
      }
    }
    ++v13; /*0x93a8c7*/
    v14 += 3; /*0x93a8c8*/
  }
  while ( v13 < 5 ); /*0x93a8ce*/
  v17 = *v11; /*0x93a8d0*/
  v18 = *(float *)&SrcStr; /*0x93a8d5*/
  v19 = *(this + 3 * v10); /*0x93a8e1*/
  v53[v10] = 1; /*0x93a8e5*/
  v20 = 0; /*0x93a8ea*/
  v21 = _mm_sub_ps(v17, v19); /*0x93a8ef*/
  v22 = 0; /*0x93a8f2*/
  v23 = this; /*0x93a8f4*/
  do /*0x93a969*/
  {
    if ( !v53[v22] ) /*0x93a8f6*/
    {
      v24 = _mm_sub_ps(*v23, v17); /*0x93a901*/
      v25 = _mm_sub_ps( /*0x93a929*/
              _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0xC9), _mm_shuffle_ps(v21, v21, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0xD2), _mm_shuffle_ps(v21, v21, 0xC9)));
      v26 = _mm_mul_ps(v25, v25); /*0x93a92c*/
      v45 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x93a949*/
          + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      if ( v45 > v18 ) /*0x93a958*/
      {
        v20 = v22; /*0x93a95c*/
        v18 = v45; /*0x93a95e*/
      }
    }
    ++v22; /*0x93a962*/
    v23 += 3; /*0x93a963*/
  }
  while ( v22 < 5 ); /*0x93a969*/
  v53[v20] = 1; /*0x93a96b*/
  v27 = *(float *)&SrcStr; /*0x93a972*/
  v28 = 0; /*0x93a97e*/
  v29 = this + 3 * v20; /*0x93a980*/
  v30 = 0; /*0x93a982*/
  v31 = this; /*0x93a984*/
  do /*0x93a9d4*/
  {
    if ( !v53[v30] ) /*0x93a986*/
    {
      v32 = _mm_sub_ps(*v29, *v31); /*0x93a994*/
      v33 = _mm_mul_ps(v32, v32); /*0x93a997*/
      v46 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x93a9b4*/
          + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
      if ( v46 > v27 ) /*0x93a9c3*/
      {
        v28 = v30; /*0x93a9c7*/
        v27 = v46; /*0x93a9c9*/
      }
    }
    ++v30; /*0x93a9cd*/
    v31 += 3; /*0x93a9ce*/
  }
  while ( v30 < 5 ); /*0x93a9d4*/
  v53[v28] = 1; /*0x93a9d6*/
  if ( v54 || v50 >= (double)*(float *)&SrcStr || v50 * v50 * flt_AA1DB4 <= v52 ) /*0x93aa15*/
  {
    result = 0; /*0x93ab17*/
    while ( v53[result] ) /*0x93ab26*/
    {
      if ( ++result >= 5 ) /*0x93ab2c*/
        return 0; /*0x93ab2e*/
    }
  }
  else
  {
    v34 = flt_AA1DB0; /*0x93aa21*/
    v51 = *((float *)this + 0x37); /*0x93aa2a*/
    v35 = 4; /*0x93aa32*/
    v36 = (*((float *)this + 7) - v51) * (*((float *)this + 7) - v51) + flt_AA1DAC; /*0x93aa3b*/
    if ( v36 > v55 * v34 ) /*0x93aa58*/
    {
      v35 = 0; /*0x93aa5c*/
      v47 = v36; /*0x93aa41*/
      v34 = v47 / (v55 + flt_AA1DAC); /*0x93aa68*/
    }
    v37 = *((float *)this + 0x13) - v51; /*0x93aa73*/
    v38 = v37 * v37 + flt_AA1DAC; /*0x93aa77*/
    if ( v38 > v56 * v34 ) /*0x93aa90*/
    {
      v35 = 1; /*0x93aa94*/
      v48 = v38; /*0x93aa7d*/
      v34 = v48 / (v56 + flt_AA1DAC); /*0x93aaa3*/
    }
    v39 = *((float *)this + 0x1F) - v51; /*0x93aaae*/
    v40 = v39 * v39 + flt_AA1DAC; /*0x93aab2*/
    if ( v40 > v57 * v34 ) /*0x93aacb*/
    {
      v35 = 2; /*0x93aacf*/
      v49 = v40; /*0x93aab8*/
      v34 = v49 / (v57 + flt_AA1DAC); /*0x93aade*/
    }
    v41 = *((float *)this + 0x2B) - v51; /*0x93aae8*/
    if ( v58 * v34 < v41 * v41 + flt_AA1DAC ) /*0x93ab07*/
      return 3; /*0x93ab09*/
    return v35; /*0x93ab0e*/
  }
  return result; /*0x93ab13*/
}

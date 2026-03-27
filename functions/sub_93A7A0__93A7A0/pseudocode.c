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

  v1 = *(float *)&SrcStr;
  v2 = *(this + 0xC);
  v3 = 0;
  v4 = 0;
  v53[0] = 0;
  v53[1] = 0;
  v53[2] = 0;
  v53[3] = 0;
  v54 = 0;
  v52 = 3.4028235e38;
  v5 = 0;
  v6 = this;
  do
  {
    v7 = _mm_sub_ps(v2, *v6);
    v8 = _mm_mul_ps(v7, v7);
    v43 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
    *(&v55 + v5) = v43;
    if ( v43 > v1 )
    {
      v3 = v5;
      v1 = v43;
    }
    if ( v43 < (double)v52 )
    {
      v52 = v43;
      v4 = v5;
    }
    ++v5;
    v6 += 3;
  }
  while ( v5 < 4 );
  v9 = *((float *)this + 0x37) - *((float *)this + 0xC * v4 + 7);
  v53[v3] = 1;
  v50 = v9;
  v10 = 4;
  v11 = this + 3 * v3;
  v12 = v1 * flt_AA1DB8;
  v13 = 0;
  v14 = this;
  do
  {
    if ( !v53[v13] )
    {
      v15 = _mm_sub_ps(*v11, *v14);
      v16 = _mm_mul_ps(v15, v15);
      v44 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      if ( v44 > v12 )
      {
        v10 = v13;
        v12 = v44;
      }
    }
    ++v13;
    v14 += 3;
  }
  while ( v13 < 5 );
  v17 = *v11;
  v18 = *(float *)&SrcStr;
  v19 = *(this + 3 * v10);
  v53[v10] = 1;
  v20 = 0;
  v21 = _mm_sub_ps(v17, v19);
  v22 = 0;
  v23 = this;
  do
  {
    if ( !v53[v22] )
    {
      v24 = _mm_sub_ps(*v23, v17);
      v25 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0xC9), _mm_shuffle_ps(v21, v21, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0xD2), _mm_shuffle_ps(v21, v21, 0xC9)));
      v26 = _mm_mul_ps(v25, v25);
      v45 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
      if ( v45 > v18 )
      {
        v20 = v22;
        v18 = v45;
      }
    }
    ++v22;
    v23 += 3;
  }
  while ( v22 < 5 );
  v53[v20] = 1;
  v27 = *(float *)&SrcStr;
  v28 = 0;
  v29 = this + 3 * v20;
  v30 = 0;
  v31 = this;
  do
  {
    if ( !v53[v30] )
    {
      v32 = _mm_sub_ps(*v29, *v31);
      v33 = _mm_mul_ps(v32, v32);
      v46 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
      if ( v46 > v27 )
      {
        v28 = v30;
        v27 = v46;
      }
    }
    ++v30;
    v31 += 3;
  }
  while ( v30 < 5 );
  v53[v28] = 1;
  if ( v54 || v50 >= (double)*(float *)&SrcStr || v50 * v50 * flt_AA1DB4 <= v52 )
  {
    result = 0;
    while ( v53[result] )
    {
      if ( ++result >= 5 )
        return 0;
    }
  }
  else
  {
    v34 = flt_AA1DB0;
    v51 = *((float *)this + 0x37);
    v35 = 4;
    v36 = (*((float *)this + 7) - v51) * (*((float *)this + 7) - v51) + flt_AA1DAC;
    if ( v36 > v55 * v34 )
    {
      v35 = 0;
      v47 = v36;
      v34 = v47 / (v55 + flt_AA1DAC);
    }
    v37 = *((float *)this + 0x13) - v51;
    v38 = v37 * v37 + flt_AA1DAC;
    if ( v38 > v56 * v34 )
    {
      v35 = 1;
      v48 = v38;
      v34 = v48 / (v56 + flt_AA1DAC);
    }
    v39 = *((float *)this + 0x1F) - v51;
    v40 = v39 * v39 + flt_AA1DAC;
    if ( v40 > v57 * v34 )
    {
      v35 = 2;
      v49 = v40;
      v34 = v49 / (v57 + flt_AA1DAC);
    }
    v41 = *((float *)this + 0x2B) - v51;
    if ( v58 * v34 < v41 * v41 + flt_AA1DAC )
      return 3;
    return v35;
  }
  return result;
}

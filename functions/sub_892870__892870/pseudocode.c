void __thiscall sub_892870(_DWORD *this, int a2, int a3, __m128 *a4)
{
  __m128 *v5; // esi
  double v6; // st7
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  __m128 v12; // xmm0
  _DWORD *v13; // edi
  char *v14; // ecx
  __m128 *v15; // eax
  __m128 v16; // xmm0
  float v17; // xmm3_4
  __m128 v18; // xmm0
  unsigned __int8 v19; // dl
  _DWORD *v20; // ecx
  __m128 v21; // xmm0
  hkVector4 *v22; // eax
  double v23; // st7
  float v24; // xmm4_4
  __m128 v25; // xmm3
  __m128 v26; // xmm7
  __m128 v27; // xmm0
  float v28; // xmm1_4
  float v29; // xmm5_4
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  __m128 v33; // xmm2
  __m128 v34; // xmm2
  __m128 v35; // xmm0
  float v36; // xmm5_4
  double v37; // st5
  __m128 v38; // xmm0
  float v39; // xmm6_4
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  char *v42; // ecx
  __m128 *v43; // eax
  __m128 v44; // xmm0
  float v45; // xmm5_4
  __m128 v46; // xmm0
  double v47; // st6
  double v48; // rtt
  double v49; // st6
  double v50; // st7
  float v51; // [esp+4h] [ebp-84h]
  float v52; // [esp+20h] [ebp-68h]
  float v53; // [esp+20h] [ebp-68h]
  float v54; // [esp+20h] [ebp-68h]
  float v55; // [esp+20h] [ebp-68h]
  float v56; // [esp+20h] [ebp-68h]
  int v57; // [esp+24h] [ebp-64h]
  float v58; // [esp+24h] [ebp-64h]
  __m128 v59; // [esp+38h] [ebp-50h]
  __m128 v60; // [esp+38h] [ebp-50h]
  __m128 v61; // [esp+38h] [ebp-50h]
  __m128 v62; // [esp+48h] [ebp-40h] BYREF
  __m128 v63; // [esp+58h] [ebp-30h] BYREF
  __m128 v64; // [esp+68h] [ebp-20h]

  v5 = *(__m128 **)(a3 + 0xB0);
  if ( v5 )
  {
    v57 = *(this + 0x6F);
    if ( v5[0x3B].m128_i32[0] <= *(this + 0x70) && (v5[0x1F].m128_i32[1] & 0x4000) == 0 )
    {
      sub_8AC0A0((char *)a3);
      v6 = 0.0;
      v62 = a4[1];
      v62.m128_f32[2] = 0.0;
      v7 = v62;
      v8 = _mm_mul_ps(v62, v62);
      if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) > 0.0 )
      {
        v9 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
        v10 = 1.0 / fsqrt(v9);
        v11 = *(float *)&dword_A46C30 - (float)((float)(v9 * v10) * v10);
        v12 = (__m128)LODWORD(flt_A3D65C);
        v12.m128_f32[0] = (float)(v12.m128_f32[0] * v10) * v11;
        v7 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v62);
        v62 = v7;
      }
      v13 = this + 0xFFFFFF84;
      if ( v13 && (v14 = (char *)v13[2]) != 0 )
      {
        v15 = (__m128 *)sub_8AC0A0(v14);
        v7 = v62;
        v6 = 0.0;
      }
      else
      {
        v15 = (__m128 *)&stru_BA7A40;
      }
      v59 = *v15;
      v59.m128_f32[2] = v6;
      v16 = _mm_mul_ps(v59, v59);
      v17 = fsqrt(
              _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]));
      v52 = v17;
      if ( v57 == 2 )
        v52 = v17 + dbl_A46E48;
      v18 = 0;
      v53 = v52 * dbl_A967E0;
      v18.m128_f32[0] = v53;
      v62 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v7);
      sub_43F3E0(v63.m128_f32, &v62);
      v51 = flt_A34BA0;
      v5[0x35] = _mm_add_ps(v5[0x35], v62);
      ++v5[0x36].m128_i32[0];
      sub_8907A0(v5, v63.m128_f32, v51);
      if ( (v19 & v5[0x1F].m128_i8[4]) != 0 )
      {
        v20 = (_DWORD *)v5->m128_i32[2];
        v21 = *a4;
        v62 = *a4;
        if ( v20 )
        {
          v22 = (hkVector4 *)sub_8AC070(v20);
          v21 = v62;
        }
        else
        {
          v22 = &stru_BA7A40;
        }
        v23 = 0.0;
        v62 = _mm_sub_ps(v21, *(__m128 *)v22);
        v62.m128_f32[2] = 0.0;
        v60 = v5[0x2C];
        v60.m128_f32[2] = 0.0;
        v24 = *(float *)&dword_A46C30;
        v25 = (__m128)LODWORD(flt_A3D65C);
        v26 = v62;
        v27 = _mm_mul_ps(v60, v60);
        v27.m128_f32[0] = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]);
        v28 = 1.0 / fsqrt(v27.m128_f32[0]);
        v29 = *(float *)&dword_A46C30 - (float)((float)(v27.m128_f32[0] * v28) * v28);
        v30 = v25;
        v30.m128_f32[0] = (float)(v25.m128_f32[0] * v28) * v29;
        v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v60);
        v32 = _mm_mul_ps(v31, v62);
        v63.m128_f32[0] = _mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]);
        v33 = 0;
        v33.m128_f32[0] = v63.m128_f32[0];
        v34 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v31);
        v35 = _mm_mul_ps(v34, v34);
        v36 = fsqrt(
                _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]));
        v63.m128_f32[0] = v36;
        v37 = v5[0x3A].m128_f32[1] * dbl_A2FAA0;
        v63 = a4[1];
        v64 = v25;
        v54 = v36 / v37 - flt_B2E89C;
        v63.m128_f32[2] = 0.0;
        v38 = _mm_mul_ps(v63, v63);
        v38.m128_f32[0] = _mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]);
        v31.m128_f32[0] = 1.0 / fsqrt(v38.m128_f32[0]);
        v39 = v24 - (float)((float)(v38.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]);
        v40 = v25;
        v40.m128_f32[0] = (float)(v25.m128_f32[0] * v31.m128_f32[0]) * v39;
        v41 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v63);
        v63 = v41;
        if ( !v13 )
          goto LABEL_19;
        v42 = (char *)v13[2];
        if ( v42 )
        {
          v43 = (__m128 *)sub_8AC0A0(v42);
          v41 = v63;
          v23 = 0.0;
          v26 = v62;
          v25 = v64;
        }
        else
        {
LABEL_19:
          v43 = (__m128 *)&stru_BA7A40;
        }
        v61 = *v43;
        v61.m128_f32[2] = v23;
        v44 = _mm_mul_ps(v61, v61);
        v44.m128_f32[0] = _mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]);
        v45 = 1.0 / fsqrt(v44.m128_f32[0]);
        v25.m128_f32[0] = (float)(v25.m128_f32[0] * v45) * (float)(v24 - (float)((float)(v44.m128_f32[0] * v45) * v45));
        v46 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v61), v41);
        v64.m128_f32[0] = _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]);
        v55 = -v64.m128_f32[0] * v54;
        v47 = v55;
        if ( v55 > 1.0 )
          v55 = 1.0;
        if ( v55 >= dbl_A2FC68 )
        {
          if ( v47 <= 1.0 )
          {
            if ( v47 <= v23 )
              return;
          }
          else
          {
            v47 = (float)1.0;
          }
          v48 = v47;
          v49 = v23;
          v50 = v48;
          v64 = _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v26, v26, 0xC9)),
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v26, v26, 0xD2)));
          if ( v49 < v64.m128_f32[2] )
          {
            v56 = v50 * dbl_A3D360;
            v50 = v56;
          }
          v58 = v50 * flt_B2E898;
          sub_890890(v5->m128_f32, v58, flt_A3D9A4);
        }
      }
    }
  }
}

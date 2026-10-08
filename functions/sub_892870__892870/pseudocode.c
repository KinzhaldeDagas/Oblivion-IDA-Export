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
  __m128 *LinearVelocityPtr; // eax
  __m128 v16; // xmm0
  float v17; // xmm3_4
  __m128 v18; // xmm0
  unsigned __int8 v19; // dl
  _DWORD *v20; // ecx
  __m128 v21; // xmm0
  hkVector4 *PositionPtr; // eax
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

  v5 = *(__m128 **)(a3 + 0xB0); /*0x89288f*/
  if ( v5 ) /*0x892897*/
  {
    v57 = *(this + 0x6F); /*0x8928af*/
    if ( v5[0x3B].m128_i32[0] <= *(this + 0x70) && (v5[0x1F].m128_i32[1] & 0x4000) == 0 ) /*0x8928c3*/
    {
      bhkWorldObject_GetLinearVelocityPtr((char *)a3); /*0x8928c9*/
      v6 = 0.0; /*0x8928ce*/
      v62 = a4[1]; /*0x8928d4*/
      v62.m128_f32[2] = 0.0; /*0x8928d9*/
      v7 = v62; /*0x8928dd*/
      v8 = _mm_mul_ps(v62, v62); /*0x8928e5*/
      if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x89290d*/
                 + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) > 0.0 )
      {
        v9 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] /*0x892926*/
           + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
        v10 = 1.0 / fsqrt(v9); /*0x89292d*/
        v11 = *(float *)&dword_A46C30 - (float)((float)(v9 * v10) * v10); /*0x892939*/
        v12 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x89293d*/
        v12.m128_f32[0] = (float)(v12.m128_f32[0] * v10) * v11; /*0x892949*/
        v7 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v62); /*0x892957*/
        v62 = v7; /*0x89295a*/
      }
      v13 = this + 0xFFFFFF84; /*0x89295f*/
      if ( v13 && (v14 = (char *)v13[2]) != 0 ) /*0x89296c*/
      {
        LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v14); /*0x892970*/
        v7 = v62; /*0x892975*/
        v6 = 0.0; /*0x89297a*/
      }
      else
      {
        LinearVelocityPtr = (__m128 *)&unk_BA7A40; /*0x89297e*/
      }
      v59 = *LinearVelocityPtr; /*0x89298b*/
      v59.m128_f32[2] = v6; /*0x892990*/
      v16 = _mm_mul_ps(v59, v59); /*0x892999*/
      v17 = fsqrt( /*0x8929b2*/
              _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]));
      v52 = v17; /*0x8929c0*/
      if ( v57 == 2 ) /*0x8929c4*/
        v52 = v17 + dbl_A46E48; /*0x8929cc*/
      v18 = 0; /*0x8929d8*/
      v53 = v52 * dbl_A967E0; /*0x8929ea*/
      v18.m128_f32[0] = v53; /*0x8929f5*/
      v62 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v7); /*0x892a03*/
      HavokVector_ToWorldVector(v63.m128_f32, &v62); /*0x892a08*/
      v51 = flt_A34BA0; /*0x892a1a*/
      v5[0x35] = _mm_add_ps(v5[0x35], v62); /*0x892a2d*/
      ++v5[0x36].m128_i32[0]; /*0x892a39*/
      bhkCharacterController_SetTransientPushVector(v5, v63.m128_f32, v51);// Character proxy collision/response path feeds transient push setter after world conversion; use as push-channel evidence, not as climbing ledge behavior. /*0x892a42*/
      if ( (v19 & v5[0x1F].m128_i8[4]) != 0 ) /*0x892a4d*/
      {
        v20 = (_DWORD *)v5->m128_i32[2]; /*0x892a53*/
        v21 = *a4; /*0x892a58*/
        v62 = *a4; /*0x892a5b*/
        if ( v20 ) /*0x892a60*/
        {
          PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v20); /*0x892a62*/
          v21 = v62; /*0x892a67*/
        }
        else
        {
          PositionPtr = &unk_BA7A40; /*0x892a6e*/
        }
        v23 = 0.0; /*0x892a76*/
        v62 = _mm_sub_ps(v21, *(__m128 *)PositionPtr); /*0x892a7b*/
        v62.m128_f32[2] = 0.0; /*0x892a80*/
        v60 = v5[0x2C]; /*0x892a8b*/
        v60.m128_f32[2] = 0.0; /*0x892a90*/
        v24 = *(float *)&dword_A46C30; /*0x892a99*/
        v25 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x892aa1*/
        v26 = v62; /*0x892aa9*/
        v27 = _mm_mul_ps(v60, v60); /*0x892ab1*/
        v27.m128_f32[0] = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] /*0x892ac3*/
                        + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]);
        v28 = 1.0 / fsqrt(v27.m128_f32[0]); /*0x892aca*/
        v29 = *(float *)&dword_A46C30 - (float)((float)(v27.m128_f32[0] * v28) * v28); /*0x892ad9*/
        v30 = v25; /*0x892add*/
        v30.m128_f32[0] = (float)(v25.m128_f32[0] * v28) * v29; /*0x892ae4*/
        v31 = _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v60); /*0x892aef*/
        v32 = _mm_mul_ps(v31, v62); /*0x892af5*/
        v63.m128_f32[0] = _mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0] /*0x892b0e*/
                        + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]);
        v33 = 0; /*0x892b1c*/
        v33.m128_f32[0] = v63.m128_f32[0]; /*0x892b25*/
        v34 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v31); /*0x892b2d*/
        v35 = _mm_mul_ps(v34, v34); /*0x892b33*/
        v36 = fsqrt( /*0x892b4c*/
                _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]));
        v63.m128_f32[0] = v36; /*0x892b50*/
        v37 = v5[0x3A].m128_f32[1] * dbl_A2FAA0; /*0x892b64*/
        v63 = a4[1]; /*0x892b6a*/
        v64 = v25; /*0x892b74*/
        v54 = v36 / v37 - flt_B2E89C; /*0x892b86*/
        v63.m128_f32[2] = 0.0; /*0x892b8a*/
        v38 = _mm_mul_ps(v63, v63); /*0x892b96*/
        v38.m128_f32[0] = _mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0] /*0x892ba8*/
                        + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0]);
        v31.m128_f32[0] = 1.0 / fsqrt(v38.m128_f32[0]); /*0x892baf*/
        v39 = v24 - (float)((float)(v38.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]); /*0x892bc0*/
        v40 = v25; /*0x892bc4*/
        v40.m128_f32[0] = (float)(v25.m128_f32[0] * v31.m128_f32[0]) * v39; /*0x892bcb*/
        v41 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v63); /*0x892bd6*/
        v63 = v41; /*0x892bd9*/
        if ( !v13 ) /*0x892bde*/
          goto LABEL_19; /*0x892bde*/
        v42 = (char *)v13[2]; /*0x892be0*/
        if ( v42 ) /*0x892be5*/
        {
          v43 = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v42); /*0x892be9*/
          v41 = v63; /*0x892bee*/
          v23 = 0.0; /*0x892bf3*/
          v26 = v62; /*0x892bf5*/
          v25 = v64; /*0x892c04*/
        }
        else
        {
LABEL_19:
          v43 = (__m128 *)&unk_BA7A40; /*0x892c0b*/
        }
        v61 = *v43; /*0x892c13*/
        v61.m128_f32[2] = v23; /*0x892c18*/
        v44 = _mm_mul_ps(v61, v61); /*0x892c24*/
        v44.m128_f32[0] = _mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0] /*0x892c36*/
                        + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]);
        v45 = 1.0 / fsqrt(v44.m128_f32[0]); /*0x892c3d*/
        v25.m128_f32[0] = (float)(v25.m128_f32[0] * v45) * (float)(v24 - (float)((float)(v44.m128_f32[0] * v45) * v45)); /*0x892c51*/
        v46 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v61), v41); /*0x892c5f*/
        v64.m128_f32[0] = _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0] /*0x892c78*/
                        + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]);
        v55 = -v64.m128_f32[0] * v54; /*0x892c88*/
        v47 = v55; /*0x892c8c*/
        if ( v55 > 1.0 ) /*0x892c9b*/
          v55 = 1.0; /*0x892c9d*/
        if ( v55 >= dbl_A2FC68 ) /*0x892cba*/
        {
          if ( v47 <= 1.0 ) /*0x892cc9*/
          {
            if ( v47 <= v23 ) /*0x892ce0*/
              return; /*0x892ce0*/
          }
          else
          {
            v47 = (float)1.0; /*0x892cd1*/
          }
          v48 = v47; /*0x892ce9*/
          v49 = v23; /*0x892ce9*/
          v50 = v48; /*0x892ce9*/
          v64 = _mm_sub_ps( /*0x892d0a*/
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v26, v26, 0xC9)),
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v26, v26, 0xD2)));
          if ( v49 < v64.m128_f32[2] ) /*0x892d18*/
          {
            v56 = v50 * dbl_A3D360; /*0x892d20*/
            v50 = v56; /*0x892d24*/
          }
          v58 = v50 * flt_B2E898; /*0x892d3d*/
          sub_890890(v5->m128_f32, v58, flt_A3D9A4); /*0x892d48*/
        }
      }
    }
  }
}

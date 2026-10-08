void __thiscall sub_8A3900(int *this, float *a2, float *a3)
{
  int v4; // eax
  double v5; // rt0
  void (__thiscall *v6)(int *, __m128 *); // edx
  double v7; // st7
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  bool v10; // cl
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  int v13; // edi
  int v14; // edi
  __m128 *v15; // eax
  double v16; // st5
  double v17; // st6
  __m128 v18; // xmm0
  double v19; // rt2
  int (__thiscall *v20)(int *, _BYTE *); // edx
  __m128 v21; // xmm0
  double v22; // st5
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 *v25; // eax
  __m128 v26; // xmm2
  __m128 *v27; // eax
  __m128 v28; // xmm0
  float v29; // [esp+14h] [ebp-C8h]
  float v30; // [esp+14h] [ebp-C8h]
  float v31; // [esp+14h] [ebp-C8h]
  float v32; // [esp+14h] [ebp-C8h]
  float v33; // [esp+14h] [ebp-C8h]
  float v34; // [esp+14h] [ebp-C8h]
  float v35; // [esp+14h] [ebp-C8h]
  float v36; // [esp+18h] [ebp-C4h]
  __m128 v37; // [esp+1Ch] [ebp-C0h] BYREF
  __m128 v38; // [esp+2Ch] [ebp-B0h] BYREF
  __m128 v39; // [esp+3Ch] [ebp-A0h] BYREF
  __m128 v40; // [esp+4Ch] [ebp-90h] BYREF
  __m128 v41; // [esp+5Ch] [ebp-80h]
  __m128 v42; // [esp+6Ch] [ebp-70h]
  __m128 v43; // [esp+7Ch] [ebp-60h]
  __m128 v44; // [esp+8Ch] [ebp-50h]
  __m128 v45; // [esp+9Ch] [ebp-40h] BYREF
  _BYTE v46[16]; // [esp+ACh] [ebp-30h] BYREF
  _BYTE v47[28]; // [esp+BCh] [ebp-20h] BYREF

  v4 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x8a3923*/
  if ( v4 ) /*0x8a3927*/
  {
    if ( *(_DWORD *)(v4 + 0x2B0) ) /*0x8a392d*/
    {
      v5 = hkFactor; /*0x8a394e*/
      v41.m128_f32[0] = *a2 * v5; /*0x8a3950*/
      v41.m128_f32[1] = a2[1] * v5; /*0x8a3959*/
      v41.m128_f32[2] = v5 * a2[2]; /*0x8a3963*/
      v39.m128_f32[0] = a3[1]; /*0x8a396a*/
      v39.m128_f32[1] = a3[2]; /*0x8a3971*/
      v39.m128_f32[2] = a3[3]; /*0x8a3978*/
      v6 = *(void (__thiscall **)(int *, __m128 *))(*this + 0x8C); /*0x8a3980*/
      v39.m128_f32[3] = *a3; /*0x8a3986*/
      v6(this, &v37); /*0x8a398a*/
      (*(void (__thiscall **)(int *, __m128 *))(*this + 0x90))(this, &v40); /*0x8a399b*/
      v7 = flt_A97450; /*0x8a399d*/
      v8 = _mm_sub_ps(v41, v37); /*0x8a39ad*/
      v9 = _mm_mul_ps(v8, v8); /*0x8a39b0*/
      v38.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x8a39c9*/
                      + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
      v10 = v7 < v38.m128_f32[0]; /*0x8a39d8*/
      v11 = _mm_mul_ps(v39, v40); /*0x8a39ea*/
      v12 = _mm_add_ps(_mm_shuffle_ps(v11, v11, 0x4E), v11); /*0x8a39f4*/
      v38.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0xB1).m128_f32[0] + v12.m128_f32[0]; /*0x8a3a01*/
      v29 = v38.m128_f32[0] - 1.0; /*0x8a3a11*/
      v30 = fabs(v29); /*0x8a3a1b*/
      if ( v10 || v30 > (double)flt_A37080 ) /*0x8a3a3c*/
      {
        if ( flt_B2E2E0 != 0.0 ) /*0x8a3ac9*/
        {
          v36 = 1.0 / flt_B2E2E0; /*0x8a3ae3*/
          v15 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0xA4))(this, v46); /*0x8a3ae7*/
          v16 = dbl_A3D0C0; /*0x8a3af2*/
          v17 = v39.m128_f32[3] * v16; /*0x8a3afa*/
          v18 = 0; /*0x8a3afc*/
          v19 = v16; /*0x8a3aff*/
          v20 = *(int (__thiscall **)(int *, _BYTE *))(*this + 0xA8); /*0x8a3b01*/
          v44 = *v15; /*0x8a3b07*/
          v31 = v39.m128_f32[3] * v17 - dbl_A2F928; /*0x8a3b21*/
          v18.m128_f32[0] = v31; /*0x8a3b2d*/
          v42 = v18; /*0x8a3b31*/
          v37 = v39; /*0x8a3b3b*/
          v37.m128_f32[3] = 0.0; /*0x8a3b40*/
          v21 = _mm_mul_ps(v37, v44); /*0x8a3b49*/
          v22 = (float)(_mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x8a3b68*/
                      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]));
          v23 = 0; /*0x8a3b6e*/
          v32 = v19 * v22; /*0x8a3b73*/
          v23.m128_f32[0] = v32; /*0x8a3b7d*/
          v33 = v17; /*0x8a3b81*/
          v43 = v23; /*0x8a3b8b*/
          v24 = 0; /*0x8a3b90*/
          v24.m128_f32[0] = v33; /*0x8a3b93*/
          v40 = v24; /*0x8a3b97*/
          v25 = (__m128 *)v20(this, v46); /*0x8a3b9c*/
          v26 = 0; /*0x8a3ba9*/
          v26.m128_f32[0] = v36; /*0x8a3bac*/
          v45 = _mm_mul_ps( /*0x8a3c29*/
                  _mm_sub_ps(
                    _mm_add_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0xC9), _mm_shuffle_ps(v44, v44, 0xD2)),
                            _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0xD2), _mm_shuffle_ps(v44, v44, 0xC9))),
                          _mm_shuffle_ps(v40, v40, 0)),
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v44),
                          _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v37))),
                      v41),
                    *v25),
                  _mm_shuffle_ps(v26, v26, 0));
          sub_4D6AF0(this, (int)&v45); /*0x8a3c31*/
          v27 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0x90))(this, v47); /*0x8a3c48*/
          sub_8A2B40(&v37, &v39, v27); /*0x8a3c54*/
          hkQuaternion_Normalize(&v37); /*0x8a3c5d*/
          v34 = sub_8A2C00(v37.m128_f32); /*0x8a3c6b*/
          if ( flt_A37080 <= (double)v34 ) /*0x8a3c7e*/
          {
            sub_8A2C70(&v37, &v38); /*0x8a3cb3*/
            v28 = 0; /*0x8a3cc0*/
            v35 = v34 * v36; /*0x8a3cc8*/
            v28.m128_f32[0] = v35; /*0x8a3cd4*/
            v38 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v38); /*0x8a3ce7*/
          }
          else
          {
            v38 = 0; /*0x8a3c8a*/
          }
          sub_4D6B30(this, (int)&v38); /*0x8a3c8f*/
        }
      }
      else
      {
        v13 = *(this + 2); /*0x8a3a3e*/
        if ( v13 ) /*0x8a3a45*/
        {
          bhkRefObject_UpdateHavokObject(this); /*0x8a3a49*/
          sub_8A6410(v13); /*0x8a3a50*/
          (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v13 + 0x50) + 0x54))( /*0x8a3a62*/
            *(_DWORD *)(v13 + 0x50),
            &unk_BA7A40);
          bhkRefObject_UpdateHavokObject(this); /*0x8a3a66*/
        }
        v14 = *(this + 2); /*0x8a3a6b*/
        if ( v14 ) /*0x8a3a70*/
        {
          bhkRefObject_UpdateHavokObject(this); /*0x8a3a78*/
          sub_8A6410(v14); /*0x8a3a7f*/
          (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v14 + 0x50) + 0x58))( /*0x8a3a91*/
            *(_DWORD *)(v14 + 0x50),
            &unk_BA7A40);
          bhkRefObject_UpdateHavokObject(this); /*0x8a3a95*/
        }
      }
    }
  }
}

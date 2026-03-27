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

  v4 = (*(int (__thiscall **)(int *))(*this + 0x58))(this);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 0x2B0) )
    {
      v5 = hkFactor;
      v41.m128_f32[0] = *a2 * v5;
      v41.m128_f32[1] = a2[1] * v5;
      v41.m128_f32[2] = v5 * a2[2];
      v39.m128_f32[0] = a3[1];
      v39.m128_f32[1] = a3[2];
      v39.m128_f32[2] = a3[3];
      v6 = *(void (__thiscall **)(int *, __m128 *))(*this + 0x8C);
      v39.m128_f32[3] = *a3;
      v6(this, &v37);
      (*(void (__thiscall **)(int *, __m128 *))(*this + 0x90))(this, &v40);
      v7 = flt_A97450;
      v8 = _mm_sub_ps(v41, v37);
      v9 = _mm_mul_ps(v8, v8);
      v38.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
      v10 = v7 < v38.m128_f32[0];
      v11 = _mm_mul_ps(v39, v40);
      v12 = _mm_add_ps(_mm_shuffle_ps(v11, v11, 0x4E), v11);
      v38.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0xB1).m128_f32[0] + v12.m128_f32[0];
      v29 = v38.m128_f32[0] - 1.0;
      v30 = fabs(v29);
      if ( v10 || v30 > (double)flt_A37080 )
      {
        if ( flt_B2E2E0 != 0.0 )
        {
          v36 = 1.0 / flt_B2E2E0;
          v15 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0xA4))(this, v46);
          v16 = dbl_A3D0C0;
          v17 = v39.m128_f32[3] * v16;
          v18 = 0;
          v19 = v16;
          v20 = *(int (__thiscall **)(int *, _BYTE *))(*this + 0xA8);
          v44 = *v15;
          v31 = v39.m128_f32[3] * v17 - dbl_A2F928;
          v18.m128_f32[0] = v31;
          v42 = v18;
          v37 = v39;
          v37.m128_f32[3] = 0.0;
          v21 = _mm_mul_ps(v37, v44);
          v22 = (float)(_mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]));
          v23 = 0;
          v32 = v19 * v22;
          v23.m128_f32[0] = v32;
          v33 = v17;
          v43 = v23;
          v24 = 0;
          v24.m128_f32[0] = v33;
          v40 = v24;
          v25 = (__m128 *)v20(this, v46);
          v26 = 0;
          v26.m128_f32[0] = v36;
          v45 = _mm_mul_ps(
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
          sub_4D6AF0(this, (int)&v45);
          v27 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0x90))(this, v47);
          sub_8A2B40(&v37, &v39, v27);
          sub_4D6830(&v37);
          v34 = sub_8A2C00(v37.m128_f32);
          if ( flt_A37080 <= (double)v34 )
          {
            sub_8A2C70(&v37, &v38);
            v28 = 0;
            v35 = v34 * v36;
            v28.m128_f32[0] = v35;
            v38 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v38);
          }
          else
          {
            v38 = 0;
          }
          sub_4D6B30(this, (int)&v38);
        }
      }
      else
      {
        v13 = *(this + 2);
        if ( v13 )
        {
          sub_89F570(this);
          sub_8A6410(v13);
          (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v13 + 0x50) + 0x54))(
            *(_DWORD *)(v13 + 0x50),
            &stru_BA7A40);
          sub_89F570(this);
        }
        v14 = *(this + 2);
        if ( v14 )
        {
          sub_89F570(this);
          sub_8A6410(v14);
          (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v14 + 0x50) + 0x58))(
            *(_DWORD *)(v14 + 0x50),
            &stru_BA7A40);
          sub_89F570(this);
        }
      }
    }
  }
}

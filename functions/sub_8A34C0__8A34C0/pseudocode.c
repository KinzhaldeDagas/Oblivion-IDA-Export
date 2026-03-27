__m128 *__thiscall sub_8A34C0(int *this, __m128 *a2, __m128 *a3, float a4, float a5)
{
  __m128 *v6; // eax
  __m128 v7; // xmm1
  __m128 v8; // xmm4
  double v9; // st5
  int (__thiscall *v10)(int *, _BYTE *); // edx
  double v11; // st6
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm3
  __m128 v15; // xmm5
  __m128 *v16; // eax
  int v17; // ebx
  __m128 v18; // xmm1
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  int v21; // eax
  double v22; // st7
  __m128 v23; // xmm0
  __m128 *v24; // eax
  double v25; // st7
  __m128 v26; // xmm3
  __m128 v27; // xmm3
  int v28; // edi
  __m128 v29; // xmm0
  int v30; // eax
  double v31; // st7
  __m128 v32; // xmm0
  int v33; // eax
  __m128 v34; // xmm1
  __m128 *v35; // ecx
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 *v38; // eax
  int (__thiscall *v39)(int *); // edx
  __m128 v40; // xmm1
  __m128 *result; // eax
  int v42; // edi
  int v43; // edi
  float v44; // [esp+Ch] [ebp-84h]
  __m128 v45; // [esp+10h] [ebp-80h] BYREF
  __m128 v46; // [esp+20h] [ebp-70h] BYREF
  __m128 v47; // [esp+30h] [ebp-60h]
  __m128 v48; // [esp+40h] [ebp-50h] BYREF
  __m128 v49; // [esp+50h] [ebp-40h] BYREF
  _BYTE v50[16]; // [esp+60h] [ebp-30h] BYREF
  _BYTE v51[28]; // [esp+70h] [ebp-20h] BYREF

  v6 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0xA4))(this, v50);
  v44 = a3->m128_f32[3];
  v7 = *v6;
  v8 = 0;
  v9 = dbl_A3D0C0;
  v10 = *(int (__thiscall **)(int *, _BYTE *))(*this + 0xA8);
  v11 = v44 * v9;
  v44 = v44 * v11 - dbl_A2F928;
  v8.m128_f32[0] = v44;
  v45 = *a3;
  v45.m128_f32[3] = 0.0;
  v12 = v45;
  v13 = _mm_mul_ps(v45, v7);
  v45.m128_f32[0] = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v14 = 0;
  v15 = 0;
  v44 = v9 * v45.m128_f32[0];
  v15.m128_f32[0] = v44;
  v44 = v11;
  v14.m128_f32[0] = v44;
  v47 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xC9), _mm_shuffle_ps(v7, v7, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0xD2), _mm_shuffle_ps(v7, v7, 0xC9))),
              _mm_shuffle_ps(v14, v14, 0)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v12), _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v7))),
          *a2);
  v16 = (__m128 *)v10(this, v50);
  v17 = *(this + 2);
  v18 = 0;
  v18.m128_f32[0] = a4;
  v19 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), _mm_sub_ps(v47, *v16));
  v20 = _mm_mul_ps(v19, v19);
  v47 = v19;
  v45.m128_i32[0] = fsqrt(
                      _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]));
  if ( v17 )
  {
    v21 = sub_8A98D0((_DWORD **)v17);
    if ( !v21 )
      v21 = *(_DWORD *)(v17 + 0x50);
    v19 = v47;
    v22 = *(float *)(v21 + 0xB4);
  }
  else
  {
    v22 = 0.0;
  }
  v44 = v22;
  if ( v44 < (double)v45.m128_f32[0] )
  {
    v23 = 0;
    v44 = v44 / v45.m128_f32[0];
    v23.m128_f32[0] = v44;
    v47 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v19);
  }
  v24 = (__m128 *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 0x90))(this, v51);
  v25 = v24->m128_f32[3];
  v46 = _mm_xor_ps(*v24, (__m128)xmmword_A965C0);
  v46.m128_f32[3] = v25;
  sub_889470(&v45, a3, &v46);
  sub_4D6830(&v45);
  v46 = (__m128)stru_BA7A40;
  v44 = sub_8A2C00(v45.m128_f32);
  if ( v44 <= dbl_A30E40 )
  {
    v27 = v46;
  }
  else
  {
    sub_8A2C70(&v45, &v46);
    v26 = 0;
    v44 = v44 * a4;
    v26.m128_f32[0] = v44;
    v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v46);
    v46 = v27;
  }
  v28 = *(this + 2);
  v29 = _mm_mul_ps(v27, v27);
  v45.m128_i32[0] = fsqrt(
                      _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]));
  if ( v28 )
  {
    v30 = sub_8A98D0((_DWORD **)v28);
    v27 = v46;
    if ( v30 )
      v44 = *(float *)(v30 + 0xB8);
    else
      v44 = *(float *)(*(_DWORD *)(v28 + 0x50) + 0xB8);
    v31 = v44;
  }
  else
  {
    v31 = 0.0;
  }
  v44 = v31;
  if ( v44 < (double)v45.m128_f32[0] )
  {
    v32 = 0;
    v44 = v44 / v45.m128_f32[0];
    v32.m128_f32[0] = v44;
    v27 = _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v27);
  }
  v33 = *(this + 2);
  v34 = 0;
  v34.m128_f32[0] = a5;
  if ( v33 )
    v35 = (__m128 *)(*(_DWORD *)(v33 + 0x50) + 0xD0);
  else
    v35 = (__m128 *)&stru_BA7A40;
  v36 = (__m128)xmmword_A6DFE0;
  v37 = _mm_shuffle_ps(v34, v34, 0);
  v48 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v37), *v35), _mm_mul_ps(v37, v47));
  if ( v33 )
    v38 = (__m128 *)(*(_DWORD *)(v33 + 0x50) + 0xE0);
  else
    v38 = (__m128 *)&stru_BA7A40;
  v39 = *(int (__thiscall **)(int *))(*this + 0x58);
  v40 = _mm_shuffle_ps(v34, v34, 0);
  v49 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v36, v40), *v38), _mm_mul_ps(v40, v27));
  result = (__m128 *)v39(this);
  if ( result )
  {
    v45.m128_f32[0] = _mm_shuffle_ps(result[2], result[2], 0xAA).m128_f32[0];
    v48.m128_f32[2] = v48.m128_f32[2] - v45.m128_f32[0] * a5 / a4;
  }
  v42 = *(this + 2);
  if ( v42 )
  {
    sub_89F570(this);
    sub_8A6410(v42);
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v42 + 0x50) + 0x54))(*(_DWORD *)(v42 + 0x50), &v48);
    result = (__m128 *)sub_89F570(this);
  }
  v43 = *(this + 2);
  if ( v43 )
  {
    sub_89F570(this);
    sub_8A6410(v43);
    (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v43 + 0x50) + 0x58))(*(_DWORD *)(v43 + 0x50), &v49);
    return (__m128 *)sub_89F570(this);
  }
  return result;
}

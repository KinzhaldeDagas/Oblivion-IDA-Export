void __stdcall sub_8CFC70(__m128 *a1)
{
  __int32 v1; // eax
  __m128 v2; // xmm1
  __m128 *v3; // edi
  __m128 v4; // xmm0
  _DWORD *v5; // ecx
  hkVector4 *v6; // eax
  double v7; // st7
  float v8; // xmm2_4
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __int32 v15; // eax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  float v18; // [esp+8h] [ebp-C4h]
  float v19; // [esp+Ch] [ebp-C0h]
  float v20; // [esp+1Ch] [ebp-B0h]
  __m128 v21; // [esp+2Ch] [ebp-A0h]
  __m128 v22; // [esp+3Ch] [ebp-90h] BYREF
  __m128 v23; // [esp+4Ch] [ebp-80h]
  __m128 v24; // [esp+5Ch] [ebp-70h]
  __m128 v25; // [esp+6Ch] [ebp-60h]
  __m128 v26; // [esp+7Ch] [ebp-50h]
  float v27; // [esp+8Ch] [ebp-40h]
  float v28; // [esp+90h] [ebp-3Ch]
  float v29; // [esp+94h] [ebp-38h]
  float v30; // [esp+98h] [ebp-34h]
  float v31; // [esp+9Ch] [ebp-30h]
  __m128 v32; // [esp+ACh] [ebp-20h]

  v22.m128_f32[0] = 1.0;
  v1 = a1[0x1F].m128_i32[1];
  v2 = a1[0x2B];
  v23 = a1[0x2C];
  v26 = a1[0x2E];
  v3 = a1 + 0x2E;
  v20 = _mm_shuffle_ps(a1[0x29], a1[0x29], 0xAA).m128_f32[0];
  v19 = a1[0x29].m128_f32[0];
  v4 = a1[0x28];
  v27 = _mm_shuffle_ps(a1[0x29], a1[0x29], 0x55).m128_f32[0];
  v28 = v19;
  v24 = v2;
  v29 = v20;
  v32 = v4;
  v30 = 0.0;
  v31 = flt_A2FE7C;
  if ( (v1 & 0x100) != 0 )
    v25 = a1[0x23];
  else
    v25 = v2;
  sub_91F430(&v22, a1 + 0x2E);
  v5 = (_DWORD *)a1->m128_i32[2];
  if ( v5 )
    v6 = (hkVector4 *)sub_8AC070(v5);
  else
    v6 = &stru_BA7A40;
  v18 = _mm_shuffle_ps(*(__m128 *)v6, *(__m128 *)v6, 0xAA).m128_f32[0] - a1[0x34].m128_f32[2];
  if ( flt_A3D65C <= (double)a1[0x33].m128_f32[2] )
    v18 = a1[0x33].m128_f32[3] * dbl_A2FAA0 * a1[0x33].m128_f32[2] + v18;
  (*(void (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1);
  v21 = *(__m128 *)((*(int (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1) + 0x20);
  (*(void (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1);
  v7 = v18;
  if ( a1[0x31].m128_f32[2] < (double)v18 )
  {
    a1[0x1F].m128_i32[1] |= 0x400u;
    if ( a1[0x2A].m128_i32[0] == 1 )
    {
LABEL_11:
      sub_890720(a1);
      goto LABEL_28;
    }
    if ( _mm_shuffle_ps(*v3, *v3, 0xAA).m128_f32[0] > 0.0 )
      a1[0x2E].m128_f32[2] = 0.0;
    v8 = a1[0x2D].m128_f32[2];
    goto LABEL_27;
  }
  if ( flt_A3D65C <= (double)a1[0x33].m128_f32[2] )
  {
    if ( 1.0 != a1[0x32].m128_f32[2] )
    {
      v15 = a1[0x1F].m128_i32[1];
      if ( (v15 & 0x100) == 0 && (v15 & 0x200) == 0 )
      {
        v8 = *(float *)&dword_A99EBC;
LABEL_27:
        v16 = 0;
        v16.m128_f32[0] = a1[0x32].m128_f32[2];
        v17 = 0;
        v17.m128_f32[0] = v8;
        *v3 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v21), _mm_shuffle_ps(v17, v17, 0)), *v3);
      }
    }
  }
  else
  {
    if ( a1[0x31].m128_f32[2] - dbl_A3F3F0 < v7 )
      a1[0x1F].m128_i32[1] |= 0x400u;
    if ( a1[0x2A].m128_i32[0] == 1 && (a1[0x1F].m128_i32[1] & 0x400) != 0 )
      goto LABEL_11;
    if ( a1[0x31].m128_f32[2] - dbl_A99EC0 > v7 )
    {
      v9 = _mm_mul_ps(a1[0x2B], *v3);
      v10 = *(float *)&dword_A99E34;
      v11 = 0;
      v11.m128_f32[0] = *(float *)&dword_A99E34
                      - (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]));
      *v3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), a1[0x2B]), *v3);
      v12 = _mm_mul_ps(a1[0x2B], v26);
      v11.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0];
      v13 = _mm_shuffle_ps(v12, v12, 0xAA);
      v13.m128_f32[0] = v13.m128_f32[0] + v11.m128_f32[0];
      *v3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), a1[0x2B]), *v3);
      v14 = 0;
      v14.m128_f32[0] = v10 - a1[0x2D].m128_f32[2];
      *v3 = _mm_add_ps(
              _mm_mul_ps(
                _mm_shuffle_ps(v14, v14, 0),
                *(__m128 *)((*(int (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1) + 0x20)),
              *v3);
    }
  }
LABEL_28:
  sub_890970(a1);
  if ( !a1[0x2A].m128_i32[0] )
    sub_890720(a1);
}

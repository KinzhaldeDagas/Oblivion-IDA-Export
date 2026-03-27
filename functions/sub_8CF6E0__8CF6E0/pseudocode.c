void __thiscall sub_8CF6E0(float *this, int a2)
{
  double v2; // st7
  bool v3; // c3
  char v4; // bl
  _DWORD *v5; // ecx
  hkVector4 *v6; // eax
  int v7; // eax
  double v8; // st6
  __int128 v9; // xmm0
  double v10; // st6
  __int128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v20; // [esp+10h] [ebp-B0h]
  float v21; // [esp+20h] [ebp-A0h]
  __m128 v22; // [esp+20h] [ebp-A0h]
  __m128 v23; // [esp+30h] [ebp-90h] BYREF
  __int128 v24; // [esp+40h] [ebp-80h]
  __int128 v25; // [esp+50h] [ebp-70h]
  __int128 v26; // [esp+60h] [ebp-60h]
  __m128 v27; // [esp+70h] [ebp-50h]
  float v28; // [esp+80h] [ebp-40h]
  float v29; // [esp+84h] [ebp-3Ch]
  float v30; // [esp+88h] [ebp-38h]
  float v31; // [esp+8Ch] [ebp-34h]
  float v32; // [esp+90h] [ebp-30h]
  __int128 v33; // [esp+A0h] [ebp-20h]

  v2 = 0.0;
  if ( (*(_DWORD *)(a2 + 0x1F4) & 0x100) != 0 )
  {
    v3 = 0.0 == *(float *)(a2 + 0x320);
    *(_DWORD *)(a2 + 0x2A0) = 0;
    if ( v3 )
      *(_DWORD *)(a2 + 0x1F4) &= ~0x80u;
    else
      *(_DWORD *)(a2 + 0x1F4) |= 0x80u;
  }
  v4 = 0;
  if ( *(float *)(a2 + 0x324) < dbl_A30068 && *(float *)(a2 + 0x2E8) < 0.0 )
    goto LABEL_13;
  if ( *(float *)(a2 + 0x310) >= 1.0 )
  {
    v5 = *(_DWORD **)(a2 + 8);
    v20 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x340), *(__m128 *)(a2 + 0x340), 0xAA).m128_f32[0];
    if ( v5 )
    {
      v6 = (hkVector4 *)sub_8AC070(v5);
      v2 = 0.0;
    }
    else
    {
      v6 = &stru_BA7A40;
    }
    if ( *(float *)(a2 + 0x318) > (double)(float)(_mm_shuffle_ps(*(__m128 *)v6, *(__m128 *)v6, 0xAA).m128_f32[0] - v20) )
    {
      v4 = 1;
LABEL_13:
      *(_DWORD *)(a2 + 0x1F4) |= 0x400u;
    }
  }
  v7 = *(_DWORD *)(a2 + 0x2A0);
  if ( v7 != 0xB )
  {
    if ( v7 != 1 )
    {
      *(float *)(a2 + 0x324) = v2;
      sub_890720((_DWORD *)a2);
      return;
    }
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x400) != 0 )
    {
      sub_890720((_DWORD *)a2);
      v2 = 0.0;
      if ( v4 )
      {
        if ( _mm_shuffle_ps(*(__m128 *)(a2 + 0x2E0), *(__m128 *)(a2 + 0x2E0), 0xAA).m128_f32[0] < 0.0 )
          *(float *)(a2 + 0x2E8) = 0.0;
      }
    }
    *(_DWORD *)(a2 + 0x2A0) = 0xB;
  }
  if ( v2 < *(float *)(a2 + 0x310) )
  {
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x1800) != 0 )
      v8 = 1.0;
    else
      v8 = flt_B2E76C * *(float *)(a2 + 0x310) + flt_BA7A60;
    v9 = *(_OWORD *)(a2 + 0x2C0);
    v23.m128_f32[0] = v8;
    v10 = *(this + 2);
    v24 = v9;
    v11 = *(_OWORD *)(a2 + 0x2B0);
    v32 = v10;
    v25 = v11;
    v26 = v11;
    v33 = *(_OWORD *)(a2 + 0x280);
    v27 = *(__m128 *)(a2 + 0x2E0);
    v21 = *(float *)(a2 + 0x290);
    v28 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0];
    v29 = v21;
    v30 = v2;
    v31 = v2;
    sub_91F430(&v23, (__m128 *)(a2 + 0x2E0));
    v12 = *(__m128 *)(a2 + 0x2B0);
    v13 = _mm_mul_ps(*(__m128 *)(a2 + 0x2E0), v12);
    v14 = 0;
    v14.m128_f32[0] = *(float *)&dword_A99E34
                    - (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]));
    *(__m128 *)(a2 + 0x2E0) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v12), *(__m128 *)(a2 + 0x2E0));
    v15 = _mm_mul_ps(*(__m128 *)(a2 + 0x2B0), v27);
    v14.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0];
    v16 = _mm_shuffle_ps(v15, v15, 0xAA);
    v16.m128_f32[0] = v16.m128_f32[0] + v14.m128_f32[0];
    *(__m128 *)(a2 + 0x2E0) = _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), *(__m128 *)(a2 + 0x2B0)),
                                *(__m128 *)(a2 + 0x2E0));
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2);
  v22 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2) + 0x20);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2);
  v17 = 0;
  v17.m128_f32[0] = *(float *)(a2 + 0x328);
  v18 = 0;
  v18.m128_f32[0] = *(float *)(a2 + 0x2D8);
  *(__m128 *)(a2 + 0x2E0) = _mm_add_ps(
                              _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v22), _mm_shuffle_ps(v18, v18, 0)),
                              *(__m128 *)(a2 + 0x2E0));
  sub_890740(a2);
}

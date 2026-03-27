int __thiscall sub_8D0050(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  __m128 v5; // xmm0
  double v6; // st7
  __int128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // [esp+10h] [ebp-C0h]
  __m128 v11; // [esp+30h] [ebp-A0h]
  __m128 v12; // [esp+40h] [ebp-90h] BYREF
  __int128 v13; // [esp+50h] [ebp-80h]
  __int128 v14; // [esp+60h] [ebp-70h]
  __int128 v15; // [esp+70h] [ebp-60h]
  __int128 v16; // [esp+80h] [ebp-50h]
  float v17; // [esp+90h] [ebp-40h]
  float v18; // [esp+94h] [ebp-3Ch]
  float v19; // [esp+98h] [ebp-38h]
  float v20; // [esp+9Ch] [ebp-34h]
  float v21; // [esp+A0h] [ebp-30h]
  __int128 v22; // [esp+B0h] [ebp-20h]

  v2 = *(_DWORD *)(a2 + 0x1F4);
  if ( (v2 & 0x100) != 0 )
  {
    v13 = *(_OWORD *)(a2 + 0x2C0);
    v12.m128_f32[0] = 1.0;
    v14 = *(_OWORD *)(a2 + 0x2B0);
    v15 = *(_OWORD *)(a2 + 0x230);
    v16 = *(_OWORD *)(a2 + 0x2E0);
    v5 = *(__m128 *)(a2 + 0x290);
    if ( (v2 & 0x800) != 0 )
    {
      v10 = *(float *)(a2 + 0x290);
      v17 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0];
      v18 = v10;
      v19 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0];
      v6 = 0.0;
    }
    else
    {
      v17 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0];
      v18 = v5.m128_f32[0];
      v6 = 0.0;
      v19 = 0.0;
    }
    v7 = *(_OWORD *)(a2 + 0x280);
    v20 = v6;
    v21 = flt_A34A80;
    v22 = v7;
    sub_91F430(&v12, (__m128 *)(a2 + 0x2E0));
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x800) == 0 )
    {
      *(float *)(a2 + 0x2E8) = *((float *)&v16 + 2);
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2);
      v11 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2) + 0x20);
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2);
      v8 = 0;
      v8.m128_f32[0] = *(float *)(a2 + 0x328);
      v9 = 0;
      v9.m128_f32[0] = *(float *)(a2 + 0x2D8);
      *(__m128 *)(a2 + 0x2E0) = _mm_add_ps(
                                  _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v11), _mm_shuffle_ps(v9, v9, 0)),
                                  *(__m128 *)(a2 + 0x2E0));
    }
    sub_890970((__m128 *)a2);
    result = *(_DWORD *)(a2 + 0x2A0);
    if ( result != 0xB )
    {
      if ( result != 1 )
        return sub_890720((_DWORD *)a2);
      result = *(_DWORD *)(a2 + 0x1F4) >> 0xA;
      if ( (*(_DWORD *)(a2 + 0x1F4) & 0x400) != 0 )
        return sub_890720((_DWORD *)a2);
    }
  }
  else
  {
    if ( *(this + 8) )
      *(float *)(a2 + 0x2E8) = 0.0;
    *(_DWORD *)(a2 + 0x2A0) = 2;
    sub_890720((_DWORD *)a2);
    v3 = sub_8BA170(*(_DWORD **)(a2 + 0x1E8), *(_DWORD *)(a2 + 0x1EC));
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x18))(v3, a2);
  }
  return result;
}

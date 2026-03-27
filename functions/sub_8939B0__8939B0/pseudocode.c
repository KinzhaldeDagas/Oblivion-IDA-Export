void __thiscall sub_8939B0(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v5; // [esp+8h] [ebp-78h]
  float v6; // [esp+8h] [ebp-78h]
  float v7; // [esp+8h] [ebp-78h]
  float v8; // [esp+8h] [ebp-78h]
  float v9; // [esp+8h] [ebp-78h]
  float v10; // [esp+8h] [ebp-78h]
  float v11; // [esp+8h] [ebp-78h]
  float v12; // [esp+Ch] [ebp-74h]
  float v13; // [esp+Ch] [ebp-74h]
  __m128 v14; // [esp+20h] [ebp-60h] BYREF
  _OWORD v15[4]; // [esp+30h] [ebp-50h] BYREF

  if ( (*(_BYTE *)(this + 0x1F4) & 1) != 0
    && (*(_DWORD *)(this + 0x1F4) & 0x40000) == 0
    && *(float *)(this + 0x30C) > 0.0 )
  {
    sub_6848D0(*(_DWORD **)(this + 0x364), v15);
    v5 = *(float *)(this + 0x240);
    v12 = *(float *)(this + 0x244);
    if ( flt_A96588 == v5 )
    {
      sub_8915F0((_DWORD *)this, 0, v14.m128_f32);
      v5 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0];
    }
    if ( flt_A96588 == v12 )
    {
      sub_8915F0((_DWORD *)this, 1, v14.m128_f32);
      v12 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0];
    }
    v6 = v12 - v5;
    v2 = 0.0;
    if ( v6 == 0.0 )
    {
      v13 = 0.0;
    }
    else
    {
      v7 = v6 / *(float *)(this + 0x3A4);
      v8 = atan(v7);
      v13 = v8;
      v2 = 0.0;
      v3 = v8;
      v4 = flt_B2E77C;
      if ( v8 <= 0.0 )
      {
        v10 = v4 * dbl_A968A8;
        if ( v10 > v3 )
          v13 = v4 * dbl_A968A8;
      }
      else
      {
        v9 = v4 * dbl_A968B0;
        if ( v9 < v3 )
          v13 = v4 * dbl_A968B0;
      }
    }
    v11 = v13 - *(float *)(this + 0x32C);
    if ( v11 != v2 )
    {
      if ( *(float *)(this + 0x330) > 1.0 )
        *(float *)(this + 0x330) = 1.0;
      *(float *)(this + 0x32C) = v11 * *(float *)(this + 0x330) + *(float *)(this + 0x32C);
    }
  }
}

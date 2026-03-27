void __thiscall sub_891780(int this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  unsigned int v4; // edi
  __m128 *v5; // ebx
  float *v6; // eax
  __m128 v7; // [esp+10h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 0x1F4) & 1) != 0 )
  {
    v2 = *(_DWORD **)(this + 8);
    if ( v2 )
      v3 = sub_8AC0C0(v2);
    else
      v3 = 0;
    v4 = 0;
    v5 = (__m128 *)(v3 + 0x70);
    do
    {
      v7.m128_f32[0] = 0.0;
      v7.m128_f32[1] = *(float *)(this + 0x3A4) * dbl_A2FAA0 - *(float *)(this + 0x3A0);
      v7.m128_f32[2] = *(float *)(this + 0x3A0);
      v7.m128_f32[3] = 0.0;
      if ( v4 == 1 )
        v7.m128_f32[1] = v7.m128_f32[1] * dbl_A3D360;
      sub_88FCC0((__m128 *)(this + 0x10 * (v4 + 0x38)), v5, &v7);
      v6 = (float *)(0x10 * v4++ + this + 0x388);
      *v6 = *v6 + *(float *)(this + 0x248);
    }
    while ( v4 < 2 );
  }
}

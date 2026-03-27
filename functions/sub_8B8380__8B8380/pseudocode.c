void __thiscall sub_8B8380(__m128 *this)
{
  int v2; // ecx
  int v3; // ecx
  _DWORD **v4; // ecx
  __m128 v5; // xmm0
  float v6; // [esp+0h] [ebp-38h]
  __m128 v7; // [esp+18h] [ebp-20h] BYREF

  if ( *((_DWORD *)this + 0xC) )
  {
    v2 = sub_497420(*((_DWORD *)this + 0xC));
    if ( v2 )
    {
      if ( *(float *)(v2 + 0x14) < 1.0 )
      {
        v3 = *(_DWORD *)(v2 + 0x10);
        if ( v3 )
        {
          v4 = *(_DWORD ***)(v3 + 8);
          if ( v4 )
          {
            v5 = 0;
            v5.m128_f32[0] = flt_A2FE7C;
            v6 = *((float *)this + 0x14);
            v7 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *(this + 4));
            sub_5377B0(v4, v6, (int)&v7);
          }
        }
      }
    }
  }
}

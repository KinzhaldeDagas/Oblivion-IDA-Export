int __thiscall sub_89F0A0(_DWORD *this)
{
  int v2; // esi
  int v3; // ecx
  __m128 v4; // xmm0
  int result; // eax
  float v6[9]; // [esp+Ch] [ebp-64h] BYREF
  float v7[4]; // [esp+30h] [ebp-40h] BYREF
  __m128 v8; // [esp+40h] [ebp-30h] BYREF
  __m128 v9; // [esp+50h] [ebp-20h] BYREF

  v2 = *(this + 4);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) )
    {
      sub_70FD10(v6);
      v3 = *(_DWORD *)(v2 + 8);
      v7[3] = 1.0;
      if ( v3 )
        (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v3 + 0x14))(v3, &v8);
      v4 = 0;
      v4.m128_f32[0] = flt_A3D65C;
      v9 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_sub_ps(v9, v8));
      v8 = _mm_add_ps(v9, v8);
      sub_43F3E0(v7, &v9);
      return (*(int (__thiscall **)(_DWORD *, float *))(*this + 0x78))(this, v6);
    }
  }
  return result;
}

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

  v2 = *(this + 4); /*0x89f0b8*/
  if ( v2 ) /*0x89f0bd*/
  {
    if ( *(_DWORD *)(v2 + 8) ) /*0x89f0bf*/
    {
      sub_70FD10(v6); /*0x89f0c9*/
      v3 = *(_DWORD *)(v2 + 8); /*0x89f0d0*/
      v7[3] = 1.0; /*0x89f0d3*/
      if ( v3 ) /*0x89f0d9*/
        (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v3 + 0x14))(v3, &v8); /*0x89f0e5*/
      v4 = 0; /*0x89f0f4*/
      v4.m128_f32[0] = kHeadBodyNormalMatchRadius; /*0x89f0f7*/
      v9 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_sub_ps(v9, v8)); /*0x89f113*/
      v8 = _mm_add_ps(v9, v8); /*0x89f11c*/
      HavokVector_ToWorldVector(v7, &v9); /*0x89f121*/
      return (*(int (__thiscall **)(_DWORD *, float *))(*this + 0x78))(this, v6); /*0x89f135*/
    }
  }
  return result; /*0x89f137*/
}

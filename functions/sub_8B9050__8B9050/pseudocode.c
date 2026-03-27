hkVector4 *__thiscall sub_8B9050(__m128 *this, hkVector4 *a2)
{
  __int32 v3; // eax
  __m128 v5; // [esp+10h] [ebp-20h] BYREF

  sub_8A3030(this, a2);
  if ( this )
  {
    v3 = this->m128_i32[2];
    if ( v3 )
    {
      sub_88FE00(&v5, (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0x10), this + 3);
      *(__m128 *)a2 = _mm_sub_ps(*(__m128 *)a2, v5);
    }
  }
  return a2;
}

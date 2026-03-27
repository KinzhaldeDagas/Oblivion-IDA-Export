__m128 *__thiscall sub_8914C0(__m128 *this, __m128 *a2)
{
  __m128 *v3; // eax
  __m128 v4; // xmm0
  _DWORD *v5; // ecx
  __m128 *result; // eax
  __m128 v7; // [esp+Ch] [ebp-60h] BYREF
  __m128 v8[4]; // [esp+1Ch] [ebp-50h] BYREF

  v3 = *(__m128 **)(*((_DWORD *)this + 0xD9) + 8);
  v4 = v3[7];
  v3 += 7;
  v8[0] = v4;
  v8[1] = v3[1];
  v8[2] = v3[2];
  v8[3] = v3[3];
  sub_88FE00(&v7, v8, this + 0x34);
  v5 = (_DWORD *)this->m128_i32[2];
  if ( v5 )
    result = (__m128 *)sub_8AC070(v5);
  else
    result = (__m128 *)&stru_BA7A40;
  *a2 = _mm_sub_ps(*result, v7);
  return result;
}

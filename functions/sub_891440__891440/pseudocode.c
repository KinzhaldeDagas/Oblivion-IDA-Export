__m128 *__thiscall sub_891440(__m128 *this, __m128 *a2)
{
  _DWORD *v3; // ecx
  __m128 *result; // eax
  __m128 v5; // [esp+10h] [ebp-60h] BYREF
  __m128 v6[4]; // [esp+20h] [ebp-50h] BYREF

  sub_6848D0(*((_DWORD **)this + 0xD9), v6);
  sub_88FE00(&v5, v6, this + 0x34);
  v3 = (_DWORD *)this->m128_i32[2];
  if ( v3 )
    result = (__m128 *)sub_8AC070(v3);
  else
    result = (__m128 *)&stru_BA7A40;
  *a2 = _mm_sub_ps(*result, v5);
  return result;
}

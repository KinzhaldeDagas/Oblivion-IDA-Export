__m128 *__thiscall sub_94B7E0(int *this, __m128 *a2, const void **a3)
{
  __m128 v4; // [esp+0h] [ebp-40h] BYREF
  __int128 v5; // [esp+10h] [ebp-30h]
  __int128 v6; // [esp+20h] [ebp-20h]
  __int128 v7; // [esp+30h] [ebp-10h]

  *(this + 4) = 0; /*0x94b7ee*/
  a3[1] = 0; /*0x94b7f2*/
  v4 = 0; /*0x94b800*/
  v5 = 0; /*0x94b805*/
  v6 = 0; /*0x94b80a*/
  v4.m128_i32[0] = 0x3F800000; /*0x94b810*/
  DWORD1(v5) = 0x3F800000; /*0x94b818*/
  DWORD2(v6) = 0x3F800000; /*0x94b820*/
  v7 = 0; /*0x94b828*/
  return (__m128 *)sub_94A630(this, a2, &v4, a3); /*0x94b832*/
}

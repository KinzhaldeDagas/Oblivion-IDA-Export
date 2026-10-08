__m128 *__thiscall sub_94D7F0(__m128 *this, __m128 **a2)
{
  int v3; // eax
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *result; // eax
  __m128 v9[4]; // [esp+10h] [ebp-40h] BYREF

  if ( ((unsigned int)a2[2] & 0x3FFFFFFF) < 0xC ) /*0x94d80b*/
  {
    v3 = 2 * ((unsigned int)a2[2] & 0x3FFFFFFF); /*0x94d80d*/
    if ( v3 <= 0xC ) /*0x94d812*/
      v3 = 0xC; /*0x94d814*/
    sub_8A6E40((const void **)a2, v3, 0x10); /*0x94d81d*/
  }
  a2[1] = (__m128 *)0xC; /*0x94d82c*/
  sub_94D600(this, v9); /*0x94d833*/
  v4 = v9[0]; /*0x94d83a*/
  v5 = v9[1]; /*0x94d83f*/
  v6 = v9[2]; /*0x94d844*/
  **a2 = v9[0]; /*0x94d849*/
  v7 = v9[3]; /*0x94d84e*/
  (*a2)[1] = v5; /*0x94d853*/
  (*a2)[2] = v5; /*0x94d859*/
  (*a2)[3] = v6; /*0x94d85f*/
  (*a2)[4] = v6; /*0x94d865*/
  (*a2)[5] = v7; /*0x94d86b*/
  (*a2)[6] = v7; /*0x94d871*/
  (*a2)[7] = v4; /*0x94d877*/
  (*a2)[8] = v4; /*0x94d87d*/
  (*a2)[9] = v6; /*0x94d886*/
  (*a2)[0xA] = v5; /*0x94d88f*/
  result = *a2; /*0x94d896*/
  (*a2)[0xB] = v7; /*0x94d899*/
  return result; /*0x94d898*/
}

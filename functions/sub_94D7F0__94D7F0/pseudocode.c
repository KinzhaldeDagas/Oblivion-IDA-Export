__m128 *__thiscall sub_94D7F0(__m128 *this, __m128 **a2)
{
  int v3; // eax
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 *result; // eax
  __m128 v9[4]; // [esp+10h] [ebp-40h] BYREF

  if ( ((unsigned int)a2[2] & 0x3FFFFFFF) < 0xC )
  {
    v3 = 2 * ((unsigned int)a2[2] & 0x3FFFFFFF);
    if ( v3 <= 0xC )
      v3 = 0xC;
    sub_8A6E40((const void **)a2, v3, 0x10);
  }
  a2[1] = (__m128 *)0xC;
  sub_94D600(this, v9);
  v4 = v9[0];
  v5 = v9[1];
  v6 = v9[2];
  **a2 = v9[0];
  v7 = v9[3];
  (*a2)[1] = v5;
  (*a2)[2] = v5;
  (*a2)[3] = v6;
  (*a2)[4] = v6;
  (*a2)[5] = v7;
  (*a2)[6] = v7;
  (*a2)[7] = v4;
  (*a2)[8] = v4;
  (*a2)[9] = v6;
  (*a2)[0xA] = v5;
  result = *a2;
  (*a2)[0xB] = v7;
  return result;
}

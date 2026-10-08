float *__thiscall sub_89ECC0(_DWORD *this, float *a2)
{
  int v2; // eax
  int v3; // eax
  __m128 *v4; // eax

  v2 = *(this + 4); /*0x89ecc0*/
  if ( v2 ) /*0x89ecc5*/
  {
    v3 = *(_DWORD *)(v2 + 8); /*0x89ecc7*/
    if ( v3 ) /*0x89eccc*/
      v4 = (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0xD0); /*0x89ecd1*/
    else
      v4 = (__m128 *)&unk_BA7A40; /*0x89ecd8*/
    HavokVector_ToWorldVector(a2, v4); /*0x89ece4*/
    return a2; /*0x89ecec*/
  }
  else
  {
    *a2 = g_zeroNiPoint3.x; /*0x89ecfc*/
    a2[1] = g_zeroNiPoint3.y; /*0x89ed04*/
    a2[2] = g_zeroNiPoint3.z; /*0x89ed0d*/
    return a2; /*0x89ecf8*/
  }
}

int __thiscall sub_91DEB0(int **this, int a2)
{
  __m128 *v2; // ebp
  int v3; // ecx
  int result; // eax
  __m128 *v5; // ebp
  int v7; // [esp+Ch] [ebp+4h]

  v2 = *(__m128 **)(a2 + 0xC); /*0x91deb6*/
  v3 = v2->m128_i32[0] - (_DWORD)v2 - 0x30; /*0x91dec2*/
  result = v3 / 0x30; /*0x91ded4*/
  if ( v3 / 0x30 > 0 ) /*0x91ded8*/
  {
    v5 = v2 + 3; /*0x91dedc*/
    v7 = v3 / 0x30; /*0x91dedf*/
    do /*0x91df1a*/
    {
      sub_91DC00(v5 + 1, 0xFF008000, unk_BA8458, *(this + 0xFFFFFFFC), v5); /*0x91df06*/
      v5 += 3; /*0x91df12*/
      result = --v7; /*0x91df15*/
    }
    while ( v7 ); /*0x91df1a*/
  }
  return result; /*0x91df1f*/
}

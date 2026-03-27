int __thiscall sub_91DEB0(int **this, int a2)
{
  __m128 *v2; // ebp
  int v3; // ecx
  int result; // eax
  __m128 *v5; // ebp
  int v7; // [esp+Ch] [ebp+4h]

  v2 = *(__m128 **)(a2 + 0xC);
  v3 = v2->m128_i32[0] - (_DWORD)v2 - 0x30;
  result = v3 / 0x30;
  if ( v3 / 0x30 > 0 )
  {
    v5 = v2 + 3;
    v7 = v3 / 0x30;
    do
    {
      sub_91DC00(v5 + 1, 0xFF008000, dword_BA8458, *(this + 0xFFFFFFFC), v5);
      v5 += 3;
      result = --v7;
    }
    while ( v7 );
  }
  return result;
}

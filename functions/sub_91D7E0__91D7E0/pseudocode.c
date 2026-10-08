int __thiscall sub_91D7E0(int **this, int a2)
{
  __m128 *v2; // ebp
  int v3; // ecx
  int result; // eax
  __m128 *v5; // ebp
  int v7; // [esp+Ch] [ebp+4h]

  v2 = *(__m128 **)(a2 + 0xC); /*0x91d7e6*/
  v3 = v2->m128_i32[0] - (_DWORD)v2 - 0x30; /*0x91d7f2*/
  result = v3 / 0x30; /*0x91d804*/
  if ( v3 / 0x30 > 0 ) /*0x91d808*/
  {
    v5 = v2 + 3; /*0x91d80c*/
    v7 = v3 / 0x30; /*0x91d80f*/
    do /*0x91d84a*/
    {
      sub_91D530(v5 + 1, 0xFF008000, unk_BA8454, *(this + 0xFFFFFFFC), v5); /*0x91d836*/
      v5 += 3; /*0x91d842*/
      result = --v7; /*0x91d845*/
    }
    while ( v7 ); /*0x91d84a*/
  }
  return result; /*0x91d84f*/
}

int __thiscall sub_928AA0(_DWORD *this, float a2, __m128 *a3)
{
  int v4; // eax
  int v5; // edx
  __m128 v6; // xmm1
  int result; // eax
  __m128 v8; // xmm0
  int v9; // ecx
  int v10; // eax
  __m128 v11; // xmm0
  int v12; // [esp+8h] [ebp-4h]
  unsigned int v13; // [esp+8h] [ebp-4h]

  if ( a2 >= (double)*(float *)&SrcStr ) /*0x928aba*/
    v4 = sub_8ECB30(LODWORD(a2)); /*0x928ac4*/
  else
    v4 = 0; /*0x928abc*/
  v12 = v4; /*0x928ad4*/
  if ( v4 + 1 >= *(this + 9) ) /*0x928ad8*/
  {
    v9 = *(this + 8); /*0x928b23*/
    v10 = 0x10 * v4; /*0x928b29*/
    v11 = *(__m128 *)(v10 + v9); /*0x928b2c*/
    *a3 = v11; /*0x928b32*/
    return v9 + v10; /*0x928b30*/
  }
  else
  {
    v5 = *(this + 8); /*0x928ade*/
    v6 = *(__m128 *)(0x10 * (v4 + 1) + v5); /*0x928aee*/
    result = 0x10 * v4; /*0x928af5*/
    *(float *)&v13 = a2 - (double)v12; /*0x928af8*/
    v8 = _mm_shuffle_ps((__m128)v13, (__m128)v13, 0); /*0x928b02*/
    *a3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v8), *(__m128 *)(result + v5)), _mm_mul_ps(v8, v6)); /*0x928b19*/
  }
  return result; /*0x928b1d*/
}

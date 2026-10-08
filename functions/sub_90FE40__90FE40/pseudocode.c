int __thiscall sub_90FE40(__m128 *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  __m128 *v5; // eax
  long double v6; // st7
  __m128 v7; // xmm3
  bool v8; // c0
  long double v9; // st7
  long double v10; // st7
  __m128 v11; // xmm2
  float v13; // [esp+14h] [ebp-38h]
  unsigned int v14; // [esp+14h] [ebp-38h]
  unsigned int v15; // [esp+14h] [ebp-38h]
  float v16[5]; // [esp+18h] [ebp-34h] BYREF
  __m128 v17; // [esp+2Ch] [ebp-20h] BYREF
  __m128 v18; // [esp+3Ch] [ebp-10h] BYREF

  v3 = *((_DWORD *)this + 7); /*0x90fe59*/
  v16[0] = *(float *)(a2 + 8) * flt_A57EF8; /*0x90fe5f*/
  v4 = *((_DWORD *)this + 6); /*0x90fe64*/
  sub_889470(&v17, (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0x80), this + 2); /*0x90fe75*/
  v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0x80); /*0x90fe92*/
  v18 = _mm_xor_ps(v17, (__m128)xmmword_A965C0); /*0x90fe9a*/
  v18.m128_i32[3] = v17.m128_i32[3]; /*0x90fea4*/
  sub_889470(&v17, v5, &v18); /*0x90fea8*/
  v6 = fabs(v17.m128_f32[3]); /*0x90feb4*/
  v13 = v6; /*0x90fec7*/
  v7 = _mm_sub_ps(*(__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xE0), *(__m128 *)(*(_DWORD *)(v3 + 0x50) + 0xE0)); /*0x90fecd*/
  v8 = fabs(v6) < fConstant_1; /*0x90fed0*/
  v18 = v7; /*0x90fed6*/
  if ( v8 ) /*0x90fee0*/
  {
    v9 = acos(v13); /*0x90ff07*/
    v7 = v18; /*0x90ff0c*/
  }
  else if ( v13 <= (double)*(float *)&SrcStr ) /*0x90fef1*/
  {
    v9 = flt_A9CB60; /*0x90fefb*/
  }
  else
  {
    v9 = *(float *)&SrcStr; /*0x90fef3*/
  }
  v10 = v9 + v9; /*0x90ff11*/
  v11 = 0; /*0x90ff13*/
  if ( fabs(v10) > flt_A37080 ) /*0x90ff25*/
  {
    *(float *)&v14 = v10; /*0x90ff2c*/
    v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v14, (__m128)v14, 0), v17); /*0x90ff3d*/
  }
  *(float *)&v15 = v16[0] * *((float *)this + 0xC); /*0x90ff4d*/
  v16[0] = v16[0] * *((float *)this + 0xD); /*0x90ff5e*/
  *(__m128 *)&v16[1] = _mm_add_ps( /*0x90ff7f*/
                         _mm_mul_ps(_mm_shuffle_ps((__m128)v15, (__m128)v15, 0), v11),
                         _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v16[0]), (__m128)LODWORD(v16[0]), 0), v7));
  sub_8A6410(v3); /*0x90ff84*/
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v3 + 0x50) + 0x64))(*(_DWORD *)(v3 + 0x50), &v16[1]); /*0x90ff93*/
  *(__m128 *)&v16[1] = _mm_xor_ps(*(__m128 *)&v16[1], (__m128)xmmword_A965C0); /*0x90ffa7*/
  sub_8A6410(v4); /*0x90ffac*/
  return (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v4 + 0x50) + 0x64))(*(_DWORD *)(v4 + 0x50), &v16[1]); /*0x90ffbf*/
}

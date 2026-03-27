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

  v3 = *((_DWORD *)this + 7);
  v16[0] = *(float *)(a2 + 8) * flt_A57EF8;
  v4 = *((_DWORD *)this + 6);
  sub_889470(&v17, (__m128 *)(*(_DWORD *)(v3 + 0x50) + 0x80), this + 2);
  v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0x80);
  v18 = _mm_xor_ps(v17, (__m128)xmmword_A965C0);
  v18.m128_i32[3] = v17.m128_i32[3];
  sub_889470(&v17, v5, &v18);
  v6 = fabs(v17.m128_f32[3]);
  v13 = v6;
  v7 = _mm_sub_ps(*(__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xE0), *(__m128 *)(*(_DWORD *)(v3 + 0x50) + 0xE0));
  v8 = fabs(v6) < fConstant_1;
  v18 = v7;
  if ( v8 )
  {
    v9 = acos(v13);
    v7 = v18;
  }
  else if ( v13 <= (double)*(float *)&SrcStr )
  {
    v9 = flt_A9CB60;
  }
  else
  {
    v9 = *(float *)&SrcStr;
  }
  v10 = v9 + v9;
  v11 = 0;
  if ( fabs(v10) > flt_A37080 )
  {
    *(float *)&v14 = v10;
    v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v14, (__m128)v14, 0), v17);
  }
  *(float *)&v15 = v16[0] * *((float *)this + 0xC);
  v16[0] = v16[0] * *((float *)this + 0xD);
  *(__m128 *)&v16[1] = _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps((__m128)v15, (__m128)v15, 0), v11),
                         _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v16[0]), (__m128)LODWORD(v16[0]), 0), v7));
  sub_8A6410(v3);
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v3 + 0x50) + 0x64))(*(_DWORD *)(v3 + 0x50), &v16[1]);
  *(__m128 *)&v16[1] = _mm_xor_ps(*(__m128 *)&v16[1], (__m128)xmmword_A965C0);
  sub_8A6410(v4);
  return (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v4 + 0x50) + 0x64))(*(_DWORD *)(v4 + 0x50), &v16[1]);
}

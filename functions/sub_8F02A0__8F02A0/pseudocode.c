__m128 *__userpurge sub_8F02A0@<eax>(__m128 *a1@<ecx>, double a2@<st0>, __m128 *a3, unsigned int a4, __m128 *a5)
{
  __int32 i; // ebx
  __int32 j; // edi
  double v8; // st7
  double v9; // st7
  double v10; // st6
  float v12; // [esp+18h] [ebp-28h]
  float v13; // [esp+18h] [ebp-28h]
  float v14; // [esp+1Ch] [ebp-24h]
  float v15; // [esp+1Ch] [ebp-24h]
  __m128 v16; // [esp+20h] [ebp-20h] BYREF
  __m128 v17; // [esp+30h] [ebp-10h] BYREF

  (*(void (__thiscall **)(__m128 *, _DWORD, _DWORD))(a1->m128_i32[0] + 0x24))(a1, 0, 0);
  v12 = a2;
  v14 = v12;
  if ( a1[5].m128_f32[1] < (double)*(float *)&SrcStr )
  {
    for ( i = 0; i < a1->m128_i32[3]; ++i )
    {
      for ( j = 0; j < a1[1].m128_i32[0]; ++j )
      {
        v8 = ((double (__thiscall *)(__m128 *, __int32, __int32))*(_DWORD *)(a1->m128_i32[0] + 0x24))(a1, i, j);
        if ( v12 >= v8 )
          v12 = v8;
        if ( v14 <= v8 )
          v14 = v8;
      }
    }
    v13 = v12 * a1[2].m128_f32[1];
    v9 = v14 * a1[2].m128_f32[1];
    v10 = v13;
    v15 = v13;
    if ( v13 >= v9 )
      v13 = v9;
    if ( v10 > v9 )
      v9 = v15;
    a1[1].m128_f32[1] = (v13 + v9) * flt_A3D65C;
    a1[5].m128_f32[1] = v9 - v13;
  }
  v16 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), a1[5]);
  v17 = v16;
  v16.m128_i32[1] = a1[1].m128_i32[1];
  return sub_8F00E0(a3, &v17, &v16, a4, a5);
}

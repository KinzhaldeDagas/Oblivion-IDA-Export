float *__thiscall sub_959480(__m128 *this)
{
  __m128 *v2; // edi
  __m128 *v3; // eax
  __m128 *v4; // ecx
  _DWORD *v5; // edx
  __int32 *v6; // eax
  __m128 *v7; // ecx
  __m128 *v8; // edx
  __m128 *v9; // ebx
  __m128 v10; // xmm0
  __m128 *v11; // ecx
  int v12; // esi
  float *result; // eax
  __m128 *v14; // ecx

  v2 = this + 0xF7;
  v3 = this + 0x10B;
  v4 = v2;
  *((_DWORD *)this + 4) = 4;
  v5 = &unk_AA3878;
  if ( v2 != v3 )
  {
    do
    {
      v4[1].m128_i32[2] = (__int32)&v4[2].m128_i32[1];
      v4[2].m128_i32[2] = (__int32)&v4[3].m128_i32[1];
      v6 = &v4[1].m128_i32[1];
      v4[4].m128_i32[1] = 0;
      v4[3].m128_i32[2] = (__int32)&v4[1].m128_i32[1];
      if ( &v4[1].m128_i16[2] < &v4[4].m128_i16[2] )
      {
        do
        {
          v6[3] = (__int32)v4;
          *v6 = (__int32)this + *v5 + 0x20;
          v6 += 4;
          v6[0xFFFFFFFE] = (__int32)this + v5[1] + v5[2] + 0xF84;
          v5 += 3;
        }
        while ( v6 < &v4[4].m128_i32[1] );
      }
      v4 += 5;
    }
    while ( v4 != this + 0x10B );
  }
  sub_958E50(this + 0x106);
  v8 = this + 6;
  v9 = this + 2;
  v10 = _mm_mul_ps(_mm_sub_ps(*(this + 2), *(this + 6)), *v7);
  if ( (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0])) > (double)*(float *)&SrcStr )
  {
    *((_DWORD *)this + 0x409) = v8;
    *((_DWORD *)this + 0x3F5) = v8;
    v2[1].m128_i32[1] = (__int32)v8;
    v7[1].m128_i32[1] = (__int32)v9;
    *((_DWORD *)this + 0x3F9) = v9;
    v2[3].m128_i32[1] = (__int32)v9;
  }
  v11 = v2;
  v12 = 4;
  do
  {
    result = sub_958E50(v11);
    v11 = v14 + 5;
    --v12;
  }
  while ( v12 );
  return result;
}

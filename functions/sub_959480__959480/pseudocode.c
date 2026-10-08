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

  v2 = this + 0xF7; /*0x95948c*/
  v3 = this + 0x10B; /*0x959492*/
  v4 = v2; /*0x959498*/
  *((_DWORD *)this + 4) = 4; /*0x95949c*/
  v5 = &unk_AA3878; /*0x9594a3*/
  if ( v2 != v3 ) /*0x9594ac*/
  {
    do /*0x959500*/
    {
      v4[1].m128_i32[2] = (__int32)&v4[2].m128_i32[1]; /*0x9594b3*/
      v4[2].m128_i32[2] = (__int32)&v4[3].m128_i32[1]; /*0x9594bc*/
      v6 = &v4[1].m128_i32[1]; /*0x9594bf*/
      v4[4].m128_i32[1] = 0; /*0x9594c4*/
      v4[3].m128_i32[2] = (__int32)&v4[1].m128_i32[1]; /*0x9594ca*/
      if ( &v4[1].m128_i16[2] < &v4[4].m128_i16[2] ) /*0x9594cd*/
      {
        do /*0x9594f3*/
        {
          v6[3] = (__int32)v4; /*0x9594d0*/
          *v6 = (__int32)this + *v5 + 0x20; /*0x9594d9*/
          v6 += 4; /*0x9594e1*/
          v6[0xFFFFFFFE] = (__int32)this + v5[1] + v5[2] + 0xF84; /*0x9594eb*/
          v5 += 3; /*0x9594ee*/
        }
        while ( v6 < &v4[4].m128_i32[1] ); /*0x9594f3*/
      }
      v4 += 5; /*0x9594f5*/
    }
    while ( v4 != this + 0x10B ); /*0x959500*/
  }
  sub_958E50(this + 0x106); /*0x95950c*/
  v8 = this + 6; /*0x95951f*/
  v9 = this + 2; /*0x959522*/
  v10 = _mm_mul_ps(_mm_sub_ps(*(this + 2), *(this + 6)), *v7); /*0x959528*/
  if ( (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x959558*/
             + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0])) > (double)*(float *)&SrcStr )
  {
    *((_DWORD *)this + 0x409) = v8; /*0x95955a*/
    *((_DWORD *)this + 0x3F5) = v8; /*0x959560*/
    v2[1].m128_i32[1] = (__int32)v8; /*0x959566*/
    v7[1].m128_i32[1] = (__int32)v9; /*0x959569*/
    *((_DWORD *)this + 0x3F9) = v9; /*0x95956c*/
    v2[3].m128_i32[1] = (__int32)v9; /*0x959572*/
  }
  v11 = v2; /*0x959575*/
  v12 = 4; /*0x959577*/
  do /*0x959589*/
  {
    result = sub_958E50(v11); /*0x959580*/
    v11 = v14 + 5; /*0x959585*/
    --v12; /*0x959588*/
  }
  while ( v12 ); /*0x959589*/
  return result; /*0x95958b*/
}

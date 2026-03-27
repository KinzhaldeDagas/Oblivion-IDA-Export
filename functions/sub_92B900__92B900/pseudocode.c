signed int __cdecl sub_92B900(__m128 *a1, _DWORD *a2, unsigned __int64 a3, __m128 *a4, __m128 *a5)
{
  __int32 v5; // eax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  unsigned __int64 v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __int32 v11; // ecx
  __int32 v12; // eax
  __int32 v13; // eax
  char v15; // [esp+1Bh] [ebp-35h]
  __int32 v16; // [esp+1Ch] [ebp-34h]
  int v17; // [esp+20h] [ebp-30h]
  __m128 v18; // [esp+30h] [ebp-20h] BYREF
  __int32 v19; // [esp+40h] [ebp-10h]
  __int32 v20; // [esp+44h] [ebp-Ch]
  int v21; // [esp+48h] [ebp-8h]

  a4[1].m128_i32[0] = 0xFFFFFFFF;
  a4[1].m128_i32[1] = 0xFFFFFFFF;
  a4[1].m128_i32[2] = 0xFFFFFFFF;
  a5[1].m128_i32[0] = 0xFFFFFFFF;
  a5[1].m128_i32[1] = 0xFFFFFFFF;
  a5[1].m128_i32[2] = 0xFFFFFFFF;
  v5 = 0;
  v15 = 0;
  v16 = 0;
  if ( (int)a2[1] > 0 )
  {
    v17 = 0;
    do
    {
      if ( v5 != (_DWORD)a3 && v5 != HIDWORD(a3) )
      {
        if ( !sub_92B760(a2, a3, v5, &v18) )
        {
          v6 = v18;
          if ( !v15 )
          {
            v7 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)0xC7C35000, (__m128)0xC7C35000, 0), *a1));
            *a5 = v7;
            *a4 = _mm_xor_ps(v7, (__m128)xmmword_A965C0);
            v15 = 1;
          }
          HIDWORD(v8) = v21;
          v9 = _mm_mul_ps(*(__m128 *)(*a2 + v17), _mm_sub_ps(*a5, v6));
          if ( (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])) > (double)flt_A97BD8 )
          {
            a5[1].m128_i32[0] = v19;
            LODWORD(v8) = v20;
            *a5 = v6;
            *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4) = v8;
          }
          v10 = _mm_mul_ps(*(__m128 *)(*a2 + v17), _mm_sub_ps(*a4, v6));
          if ( (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0])) > (double)flt_A97BD8 )
          {
            LODWORD(v8) = v19;
            v11 = v20;
            *a4 = v6;
            a4[1].m128_i32[0] = v8;
            a4[1].m128_i32[1] = v11;
            a4[1].m128_i32[2] = HIDWORD(v8);
          }
        }
        v5 = v16;
      }
      ++v5;
      v17 += 0x10;
      v16 = v5;
    }
    while ( v5 < a2[1] );
  }
  if ( a4[1].m128_i32[0] == 0xFFFFFFFF )
  {
    v12 = a5[1].m128_i32[0];
    if ( v12 == 0xFFFFFFFF )
      return 1;
    a4[1].m128_i32[0] = v12;
    *(unsigned __int64 *)((char *)a4[1].m128_u64 + 4) = *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4);
  }
  if ( a5[1].m128_i32[0] != 0xFFFFFFFF )
    return 0;
  v13 = a4[1].m128_i32[0];
  if ( v13 != 0xFFFFFFFF )
  {
    a5[1].m128_i32[0] = v13;
    *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4) = *(unsigned __int64 *)((char *)a4[1].m128_u64 + 4);
    return 0;
  }
  return 1;
}

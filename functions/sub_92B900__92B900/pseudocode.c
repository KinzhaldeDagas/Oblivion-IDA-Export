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

  a4[1].m128_i32[0] = 0xFFFFFFFF; /*0x92b918*/
  a4[1].m128_i32[1] = 0xFFFFFFFF; /*0x92b91b*/
  a4[1].m128_i32[2] = 0xFFFFFFFF; /*0x92b91e*/
  a5[1].m128_i32[0] = 0xFFFFFFFF; /*0x92b921*/
  a5[1].m128_i32[1] = 0xFFFFFFFF; /*0x92b924*/
  a5[1].m128_i32[2] = 0xFFFFFFFF; /*0x92b927*/
  v5 = 0; /*0x92b92d*/
  v15 = 0; /*0x92b931*/
  v16 = 0; /*0x92b936*/
  if ( (int)a2[1] > 0 ) /*0x92b93a*/
  {
    v17 = 0; /*0x92b940*/
    do /*0x92ba86*/
    {
      if ( v5 != (_DWORD)a3 && v5 != HIDWORD(a3) ) /*0x92b952*/
      {
        if ( !sub_92B760(a2, a3, v5, &v18) ) /*0x92b964*/
        {
          v6 = v18; /*0x92b97a*/
          if ( !v15 ) /*0x92b97f*/
          {
            v7 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)0xC7C35000, (__m128)0xC7C35000, 0), *a1)); /*0x92b9a2*/
            *a5 = v7; /*0x92b9a5*/
            *a4 = _mm_xor_ps(v7, (__m128)xmmword_A965C0); /*0x92b9b2*/
            v15 = 1; /*0x92b9b5*/
          }
          HIDWORD(v8) = v21; /*0x92b9cd*/
          v9 = _mm_mul_ps(*(__m128 *)(*a2 + v17), _mm_sub_ps(*a5, v6)); /*0x92b9d1*/
          if ( (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x92ba01*/
                     + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])) > (double)flt_A97BD8 )
          {
            a5[1].m128_i32[0] = v19; /*0x92ba07*/
            LODWORD(v8) = v20; /*0x92ba0a*/
            *a5 = v6; /*0x92ba0e*/
            *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4) = v8; /*0x92ba11*/
          }
          v10 = _mm_mul_ps(*(__m128 *)(*a2 + v17), _mm_sub_ps(*a4, v6)); /*0x92ba26*/
          if ( (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x92ba56*/
                     + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0])) > (double)flt_A97BD8 )
          {
            LODWORD(v8) = v19; /*0x92ba58*/
            v11 = v20; /*0x92ba5c*/
            *a4 = v6; /*0x92ba60*/
            a4[1].m128_i32[0] = v8; /*0x92ba63*/
            a4[1].m128_i32[1] = v11; /*0x92ba66*/
            a4[1].m128_i32[2] = HIDWORD(v8); /*0x92ba69*/
          }
        }
        v5 = v16; /*0x92ba6c*/
      }
      ++v5; /*0x92ba7a*/
      v17 += 0x10; /*0x92ba7b*/
      v16 = v5; /*0x92ba82*/
    }
    while ( v5 < a2[1] ); /*0x92ba86*/
  }
  if ( a4[1].m128_i32[0] == 0xFFFFFFFF ) /*0x92ba8f*/
  {
    v12 = a5[1].m128_i32[0]; /*0x92ba91*/
    if ( v12 == 0xFFFFFFFF ) /*0x92ba96*/
      return 1; /*0x92ba96*/
    a4[1].m128_i32[0] = v12; /*0x92ba98*/
    *(unsigned __int64 *)((char *)a4[1].m128_u64 + 4) = *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4); /*0x92ba9e*/
  }
  if ( a5[1].m128_i32[0] != 0xFFFFFFFF ) /*0x92baaa*/
    return 0; /*0x92baca*/
  v13 = a4[1].m128_i32[0]; /*0x92baac*/
  if ( v13 != 0xFFFFFFFF ) /*0x92bab1*/
  {
    a5[1].m128_i32[0] = v13; /*0x92bab3*/
    *(unsigned __int64 *)((char *)a5[1].m128_u64 + 4) = *(unsigned __int64 *)((char *)a4[1].m128_u64 + 4); /*0x92bab9*/
    return 0; /*0x92bab9*/
  }
  return 1; /*0x92bac4*/
}

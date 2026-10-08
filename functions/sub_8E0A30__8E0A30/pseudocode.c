__m64 *__stdcall sub_8E0A30(__m64 *a1, int a2, _WORD *a3)
{
  __m64 *v3; // ecx
  __m64 *result; // eax
  __m64 v5; // mm1
  __m64 v6; // [esp+10h] [ebp-20h]
  __m64 v7; // [esp+18h] [ebp-18h]
  __m64 v8; // [esp+20h] [ebp-10h]
  __m64 v9; // [esp+28h] [ebp-8h]

  v7.m64_i16[0] = a3[4] - 1; /*0x8e0a42*/
  v6.m64_i16[0] = *a3 - 1; /*0x8e0a51*/
  v6.m64_i16[2] = v6.m64_i16[0]; /*0x8e0a56*/
  v6.m64_i16[1] = a3[1] - 1; /*0x8e0a61*/
  v6.m64_i16[3] = v6.m64_i16[1]; /*0x8e0a66*/
  v9.m64_i16[0] = a3[5] - 2; /*0x8e0a73*/
  v9.m64_i16[1] = v9.m64_i16[0]; /*0x8e0a78*/
  v8.m64_i16[1] = a3[3] - 2; /*0x8e0a8d*/
  v8.m64_i16[0] = a3[2] - 2; /*0x8e0a9a*/
  v8.m64_i32[1] = v8.m64_i32[0]; /*0x8e0a9f*/
  v3 = a1; /*0x8e0aa4*/
  result = &a1[2 * a2]; /*0x8e0aaa*/
  if ( a1 < result ) /*0x8e0aae*/
  {
    v7.m64_i16[1] = a3[4] - 1; /*0x8e0a47*/
    do /*0x8e0b1f*/
    {
      v5 = _m_pand(_m_paddw(_m_pcmpgtw(v3[1], v7), _m_pcmpgtw(v3[1], v9)), (__m64)0xFFFFFFFFLL); /*0x8e0af3*/
      v3->m64_u64 = (unsigned __int64)_m_psubw( /*0x8e0b0c*/
                                        (__m64)v3->m64_u64,
                                        _m_paddw(_m_pcmpgtw((__m64)v3->m64_u64, v6), _m_pcmpgtw((__m64)v3->m64_u64, v8)));
      v3[1].m64_u64 = (unsigned __int64)_m_psubw(v3[1], v5); /*0x8e0b16*/
      v3 += 2; /*0x8e0b1a*/
    }
    while ( v3 < result ); /*0x8e0b1f*/
  }
  _m_empty(); /*0x8e0b21*/
  return result; /*0x8e0b23*/
}

__m64 *__stdcall sub_8E0A30(__m64 *a1, int a2, _WORD *a3)
{
  __m64 *v3; // ecx
  __m64 *result; // eax
  __m64 v5; // mm1
  __m64 v6; // [esp+10h] [ebp-20h]
  __m64 v7; // [esp+18h] [ebp-18h]
  __m64 v8; // [esp+20h] [ebp-10h]
  __m64 v9; // [esp+28h] [ebp-8h]

  v7.m64_i16[0] = a3[4] - 1;
  v6.m64_i16[0] = *a3 - 1;
  v6.m64_i16[2] = v6.m64_i16[0];
  v6.m64_i16[1] = a3[1] - 1;
  v6.m64_i16[3] = v6.m64_i16[1];
  v9.m64_i16[0] = a3[5] - 2;
  v9.m64_i16[1] = v9.m64_i16[0];
  v8.m64_i16[1] = a3[3] - 2;
  v8.m64_i16[0] = a3[2] - 2;
  v8.m64_i32[1] = v8.m64_i32[0];
  v3 = a1;
  result = &a1[2 * a2];
  if ( a1 < result )
  {
    v7.m64_i16[1] = a3[4] - 1;
    do
    {
      v5 = _m_pand(_m_paddw(_m_pcmpgtw(v3[1], v7), _m_pcmpgtw(v3[1], v9)), (__m64)0xFFFFFFFFLL);
      v3->m64_u64 = (unsigned __int64)_m_psubw(
                                        (__m64)v3->m64_u64,
                                        _m_paddw(_m_pcmpgtw((__m64)v3->m64_u64, v6), _m_pcmpgtw((__m64)v3->m64_u64, v8)));
      v3[1].m64_u64 = (unsigned __int64)_m_psubw(v3[1], v5);
      v3 += 2;
    }
    while ( v3 < result );
  }
  _m_empty();
  return result;
}

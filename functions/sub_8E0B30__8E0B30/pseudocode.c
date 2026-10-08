__m64 *__stdcall sub_8E0B30(__m64 *a1, int a2, __int16 *a3)
{
  __m64 *v3; // ecx
  __m64 *result; // eax
  __m64 v5; // mm1
  __m64 v6; // [esp+10h] [ebp-20h]
  __m64 v7; // [esp+18h] [ebp-18h]
  __m64 v8; // [esp+20h] [ebp-10h]
  __m64 v9; // [esp+28h] [ebp-8h]

  v7.m64_i16[0] = a3[4]; /*0x8e0b40*/
  v7.m64_i16[1] = v7.m64_i16[0]; /*0x8e0b45*/
  v6.m64_i32[0] = *(_DWORD *)a3; /*0x8e0b4d*/
  v6.m64_i16[2] = *(_DWORD *)a3; /*0x8e0b52*/
  v9.m64_i16[0] = a3[5]; /*0x8e0b69*/
  v9.m64_i16[1] = v9.m64_i16[0]; /*0x8e0b6e*/
  v8.m64_i32[0] = *((_DWORD *)a3 + 1); /*0x8e0b88*/
  v8.m64_i32[1] = v8.m64_i32[0]; /*0x8e0b8d*/
  v3 = a1; /*0x8e0b92*/
  result = &a1[2 * a2]; /*0x8e0b9b*/
  v7.m64_i32[1] = 0xFFFFFFFF; /*0x8e0b9f*/
  v9.m64_i32[1] = 0xFFFFFFFF; /*0x8e0ba3*/
  if ( a1 < result ) /*0x8e0ba7*/
  {
    v6.m64_i16[3] = a3[1]; /*0x8e0b60*/
    do /*0x8e0c1f*/
    {
      v5 = _m_pand(_m_paddw(_m_pcmpgtw(v3[1], v7), _m_pcmpgtw(v3[1], v9)), (__m64)0xFFFFFFFFLL); /*0x8e0bf3*/
      v3->m64_u64 = (unsigned __int64)_m_paddw( /*0x8e0c0c*/
                                        (__m64)v3->m64_u64,
                                        _m_paddw(_m_pcmpgtw((__m64)v3->m64_u64, v6), _m_pcmpgtw((__m64)v3->m64_u64, v8)));
      v3[1].m64_u64 = (unsigned __int64)_m_paddw(v3[1], v5); /*0x8e0c16*/
      v3 += 2; /*0x8e0c1a*/
    }
    while ( v3 < result ); /*0x8e0c1f*/
  }
  _m_empty(); /*0x8e0c21*/
  return result; /*0x8e0c23*/
}

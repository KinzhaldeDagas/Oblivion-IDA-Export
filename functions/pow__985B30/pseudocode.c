double __cdecl pow(double a1, double a2)
{
  int v2; // ecx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128d v5; // xmm2
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128d v8; // xmm7
  int v9; // eax
  bool v10; // zf
  double result; // st7
  char v12; // [esp+0h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x985b30*/
    goto _pow; /*0x985b30*/
  v9 = _mm_getcsr() & 0x1F80; /*0x985b49*/
  v10 = v9 == 0x1F80; /*0x985b4e*/
  if ( v9 == 0x1F80 ) /*0x985b53*/
    v10 = (v12 & 0x7F) == 0x7F; /*0x985b60*/
  if ( v10 ) /*0x985b68*/
    _pow_pentium4(v7, v3, v4, v5, v6, v8, a1, *(__int64 *)&a2); /*0x985b6a*/
  else
_pow:
    _pow_default(v2, SLODWORD(a1), SBYTE4(a1), SLODWORD(a2), SHIDWORD(a2)); /*0x985b37*/
  return result;
}

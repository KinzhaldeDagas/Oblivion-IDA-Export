double __cdecl unknown_libname_133(_TBYTE a1, _TBYTE a2)
{
  double v2; // st7
  double v3; // st6
  unsigned int v4; // eax

  v2 = *(double *)&a2; /*0x990d10*/
  v3 = *(double *)&a1; /*0x990d14*/
  while ( !__CFADD__(DWORD1(a1), DWORD1(a1)) ) /*0x990d1e*/
  {
    if ( !*(_QWORD *)&a1 || (HIWORD(a1) & 0x7FFF) != 0 ) /*0x990dc0*/
      return v2 / v3; /*0x990dc0*/
    if ( (HIWORD(a2) & 0x7FFF) != 0 ) /*0x990de5*/
    {
      if ( (HIWORD(a2) & 0x7FFF) == 0x7FFF || !__CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x990df2*/
        return v2 / v3; /*0x990e24*/
    }
    else if ( __CFADD__(DWORD1(a2), DWORD1(a2)) ) /*0x990dfe*/
    {
      return v2 / v3; /*0x990dfe*/
    }
    *(double *)&a1 = v3 * flt_B319F8; /*0x990e0c*/
    v2 = *(double *)&a2; /*0x990e14*/
  }
  v4 = (2 * DWORD1(a1)) ^ 0xE000000; /*0x990d24*/
  if ( (v4 & 0xE000000) != 0 ) /*0x990d2e*/
    return v2 / v3; /*0x990d32*/
  if ( !byte_B319E0[v4 >> 0x1C] ) /*0x990d36*/
    return v2 / v3; /*0x990d41*/
  if ( (HIWORD(a1) & 0x7FFF) == 0 || (HIWORD(a1) & 0x7FFF) == 0x7FFF ) /*0x990d52*/
    return v2 / v3; /*0x990db6*/
  if ( (HIWORD(a2) & 0x7FFF) == 1 ) /*0x990d7a*/
    return v2 * flt_B319F4 / (v3 * flt_B319F4); /*0x990da7*/
  else
    return v2 * flt_B319F0 / (v3 * flt_B319F0); /*0x990d90*/
}

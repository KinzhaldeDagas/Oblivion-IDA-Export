unsigned int __stdcall _aulldiv(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  if ( HIDWORD(a2) ) /*0x993408*/
  {
    v4 = HIDWORD(a2); /*0x993422*/
    v5 = a2; /*0x993424*/
    v6 = a1; /*0x99342c*/
    do /*0x99343a*/
    {
      v7 = v4 & 1; /*0x993430*/
      v4 >>= 1; /*0x993430*/
      v5 = (v5 >> 1) | (v7 << 0x1F); /*0x993432*/
      v6 >>= 1; /*0x993434*/
    }
    while ( v4 ); /*0x99343a*/
    v8 = v6 / v5; /*0x99343e*/
    v9 = v8 * (unsigned __int64)(unsigned int)a2; /*0x99344a*/
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 0x20, v9 > a1) ) /*0x99345c*/
      --v8; /*0x99345e*/
    return v8; /*0x993461*/
  }
  else
  {
    LODWORD(v3) = a1; /*0x99341c*/
    HIDWORD(v3) = HIDWORD(a1) % (unsigned int)a2; /*0x99341c*/
    return v3 / (unsigned int)a2; /*0x99341c*/
  }
}

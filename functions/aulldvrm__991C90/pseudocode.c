unsigned int __stdcall _aulldvrm(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned __int64 v8; // rax

  if ( HIDWORD(a2) ) /*0x991c97*/
  {
    v4 = HIDWORD(a2); /*0x991cc1*/
    v5 = a2; /*0x991cc3*/
    v6 = a1; /*0x991ccb*/
    do /*0x991cd9*/
    {
      v7 = v4 & 1; /*0x991ccf*/
      v4 >>= 1; /*0x991ccf*/
      v5 = (v5 >> 1) | (v7 << 0x1F); /*0x991cd1*/
      v6 >>= 1; /*0x991cd3*/
    }
    while ( v4 ); /*0x991cd9*/
    v3 = v6 / v5; /*0x991cdd*/
    v8 = v3 * (unsigned __int64)(unsigned int)a2; /*0x991ce9*/
    if ( __CFADD__(HIDWORD(a2) * v3, HIDWORD(v8)) || (HIDWORD(v8) = (a2 * (unsigned __int64)v3) >> 0x20, v8 > a1) ) /*0x991cfb*/
      --v3; /*0x991cfd*/
  }
  else
  {
    LODWORD(v2) = a1; /*0x991cab*/
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2; /*0x991cab*/
    return v2 / (unsigned int)a2; /*0x991cad*/
  }
  return v3; /*0x991d21*/
}

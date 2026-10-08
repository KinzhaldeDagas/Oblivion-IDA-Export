int __stdcall _alldvrm(signed __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  int v5; // esi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int result; // eax

  v2 = 0; /*0x99e153*/
  if ( a1 < 0 ) /*0x99e15d*/
  {
    v2 = 1; /*0x99e15f*/
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0); /*0x99e16c*/
    LODWORD(a1) = -(int)a1; /*0x99e170*/
  }
  v3 = HIDWORD(a2); /*0x99e174*/
  if ( a2 < 0 ) /*0x99e17a*/
  {
    ++v2; /*0x99e17c*/
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0); /*0x99e185*/
    HIDWORD(a2) = v3; /*0x99e188*/
    LODWORD(a2) = -(int)a2; /*0x99e18c*/
  }
  if ( v3 ) /*0x99e192*/
  {
    v6 = __PAIR64__(v3, a2); /*0x99e1be*/
    v7 = a1; /*0x99e1c6*/
    do /*0x99e1d4*/
    {
      v6 >>= 1; /*0x99e1ca*/
      v7 >>= 1; /*0x99e1ce*/
    }
    while ( HIDWORD(v6) ); /*0x99e1d4*/
    v5 = v7 / (unsigned int)v6; /*0x99e1d8*/
    v8 = (unsigned int)v5 * (unsigned __int64)(unsigned int)a2; /*0x99e1e4*/
    if ( __CFADD__(HIDWORD(a2) * v5, HIDWORD(v8)) /*0x99e1f6*/
      || (HIDWORD(v8) = (a2 * (unsigned __int64)(unsigned int)v5) >> 0x20, v8 > a1) )
    {
      --v5; /*0x99e1f8*/
    }
  }
  else
  {
    LODWORD(v4) = a1; /*0x99e1a6*/
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2; /*0x99e1a6*/
    v5 = v4 / (unsigned int)a2; /*0x99e1a8*/
  }
  result = v5; /*0x99e21d*/
  if ( v2 == 1 ) /*0x99e220*/
    return -v5; /*0x99e224*/
  return result; /*0x99e229*/
}

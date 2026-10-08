int __stdcall _alldiv(signed __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  v2 = 0; /*0x984ac3*/
  if ( a1 < 0 ) /*0x984acb*/
  {
    v2 = 1; /*0x984acd*/
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0); /*0x984ad9*/
    LODWORD(a1) = -(int)a1; /*0x984add*/
  }
  v3 = HIDWORD(a2); /*0x984ae1*/
  if ( a2 < 0 ) /*0x984ae7*/
  {
    ++v2; /*0x984ae9*/
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0); /*0x984af2*/
    HIDWORD(a2) = v3; /*0x984af5*/
    LODWORD(a2) = -(int)a2; /*0x984af9*/
  }
  if ( v3 ) /*0x984aff*/
  {
    v6 = __PAIR64__(v3, a2); /*0x984b1b*/
    v7 = a1; /*0x984b23*/
    do /*0x984b31*/
    {
      v6 >>= 1; /*0x984b27*/
      v7 >>= 1; /*0x984b2b*/
    }
    while ( HIDWORD(v6) ); /*0x984b31*/
    v8 = v7 / (unsigned int)v6; /*0x984b35*/
    v9 = v8 * (unsigned __int64)(unsigned int)a2; /*0x984b41*/
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 0x20, v9 > a1) ) /*0x984b53*/
      --v8; /*0x984b55*/
    v5 = v8; /*0x984b58*/
  }
  else
  {
    LODWORD(v4) = a1; /*0x984b13*/
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2; /*0x984b13*/
    LODWORD(v5) = v4 / (unsigned int)a2; /*0x984b13*/
    HIDWORD(v5) = HIDWORD(a1) / (unsigned int)a2; /*0x984b15*/
  }
  if ( v2 == 1 ) /*0x984b5b*/
    return -v5; /*0x984b61*/
  return v5; /*0x984b64*/
}

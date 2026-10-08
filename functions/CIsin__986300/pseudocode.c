double __usercall _CIsin@<st0>(double x@<st0>)
{
  int v1; // eax
  char v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x986300*/
    goto __CIsin_____CIsin_default; /*0x986300*/
  v1 = _mm_getcsr() & 0x1F80; /*0x986315*/
  v2 = v1 == 0x1F80; /*0x98631a*/
  if ( v1 == 0x1F80 ) /*0x98631f*/
    v2 = (v4 & 0x7F) == 0x7F; /*0x98632c*/
  if ( v2 ) /*0x986334*/
  {
    _CIsin_pentium4(*(unsigned __int64 *)&x); /*0x986336*/
  }
  else
  {
__CIsin_____CIsin_default:
    unknown_libname_161(SLODWORD(x), HIDWORD(*(unsigned __int64 *)&x)); /*0x986341*/
    start_6(v2, v3, v5); /*0x986346*/
  }
  return x; /*0x98634e*/
}

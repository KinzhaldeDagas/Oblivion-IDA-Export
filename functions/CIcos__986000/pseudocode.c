double __usercall _CIcos@<st0>(double x@<st0>)
{
  int v1; // eax
  char v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( !dword_BAABDC ) /*0x986000*/
    goto __CIcos_____CIcos_default; /*0x986000*/
  v1 = _mm_getcsr() & 0x1F80; /*0x986015*/
  v2 = v1 == 0x1F80; /*0x98601a*/
  if ( v1 == 0x1F80 ) /*0x98601f*/
    v2 = (v4 & 0x7F) == 0x7F; /*0x98602c*/
  if ( v2 ) /*0x986034*/
  {
    _CIcos_pentium4(*(unsigned __int64 *)&x); /*0x986036*/
  }
  else
  {
__CIcos_____CIcos_default:
    unknown_libname_161(SLODWORD(x), HIDWORD(*(unsigned __int64 *)&x)); /*0x986041*/
    start_4(v2, v3, v5); /*0x986046*/
  }
  return x; /*0x98604e*/
}

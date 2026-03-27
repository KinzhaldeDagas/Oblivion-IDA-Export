double __usercall _CIcos@<st0>(double x@<st0>)
{
  int v1; // eax
  char v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( !dword_BAABDC )
    goto __CIcos_____CIcos_default;
  v1 = _mm_getcsr() & 0x1F80;
  v2 = v1 == 0x1F80;
  if ( v1 == 0x1F80 )
    v2 = (v4 & 0x7F) == 0x7F;
  if ( v2 )
  {
    _CIcos_pentium4(*(unsigned __int64 *)&x);
  }
  else
  {
__CIcos_____CIcos_default:
    unknown_libname_161(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    start_4(v2, v3, v5);
  }
  return x;
}

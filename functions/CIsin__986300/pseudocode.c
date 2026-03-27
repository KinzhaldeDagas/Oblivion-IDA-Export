double __usercall _CIsin@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  char v3; // [esp+4h] [ebp-8h]

  if ( !dword_BAABDC )
    goto __CIsin_____CIsin_default;
  v1 = _mm_getcsr() & 0x1F80;
  v2 = v1 == 0x1F80;
  if ( v1 == 0x1F80 )
    v2 = (v3 & 0x7F) == 0x7F;
  if ( v2 )
  {
    _CIsin_pentium4();
  }
  else
  {
__CIsin_____CIsin_default:
    unknown_libname_161(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    return start_6();
  }
  return x;
}

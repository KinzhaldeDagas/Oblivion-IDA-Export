int __onexitinit()
{
  _DWORD *v0; // esi
  PVOID v1; // eax

  v0 = (_DWORD *)unknown_libname_74(); /*0x981f53*/
  v1 = _encode_pointer(v0); /*0x981f56*/
  dword_BABC10 = v1; /*0x981f60*/
  dword_BABC0C = v1; /*0x981f65*/
  if ( !v0 ) /*0x981f6a*/
    return 0x18; /*0x981f6e*/
  *v0 = 0; /*0x981f71*/
  return 0; /*0x981f6f*/
}

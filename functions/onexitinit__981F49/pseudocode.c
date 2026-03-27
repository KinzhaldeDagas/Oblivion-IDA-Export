int __onexitinit()
{
  _DWORD *v0; // esi
  int v1; // eax

  v0 = (_DWORD *)unknown_libname_74(0x20, 4);
  v1 = _encode_pointer(v0);
  dword_BABC10 = v1;
  dword_BABC0C = v1;
  if ( !v0 )
    return 0x18;
  *v0 = 0;
  return 0;
}

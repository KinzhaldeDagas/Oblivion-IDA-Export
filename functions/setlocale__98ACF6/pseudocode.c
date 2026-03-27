char *__cdecl setlocale(int a1, const char *a2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // esi
  _DWORD *v6; // edi

  if ( (unsigned int)a1 > 5 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, v3, v4);
    JUMPOUT(0x98AE58);
  }
  v5 = _getptd();
  __updatetlocinfo();
  *(_DWORD *)(v5 + 0x70) |= 0x10u;
  v6 = (_DWORD *)unknown_libname_74();
  if ( !v6 )
    return (char *)setlocale_::_LN26_0(v2);
  _lock(0xC);
  _copytlocinfo_nolock(v6, *(_DWORD **)(v5 + 0x6C));
  _unlock(0xC);
  return setlocale_::_LN22_0();
}

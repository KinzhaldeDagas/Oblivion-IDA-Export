char *__cdecl setlocale(int a1, const char *a2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  DWORD *v5; // esi
  _DWORD *v6; // edi

  if ( (unsigned int)a1 > 5 ) /*0x98ad0b*/
  {
    *_errno() = 0x16; /*0x98ad12*/
    _invalid_parameter(0, v3, v4); /*0x98ad1d*/
    JUMPOUT(0x98AE58); /*0x98ae58*/
  }
  v5 = _getptd(); /*0x98ad31*/
  __updatetlocinfo(); /*0x98ad36*/
  v5[0x1C] |= 0x10u; /*0x98ad3b*/
  v6 = (_DWORD *)unknown_libname_74(0xD8, 1); /*0x98ad50*/
  if ( !v6 ) /*0x98ad57*/
    return (char *)setlocale_::_LN26_0(v2); /*0x98ad57*/
  _lock(0xC); /*0x98ad5f*/
  _copytlocinfo_nolock(v6, (_DWORD *)v5[0x1B]); /*0x98ad71*/
  _unlock(0xC); /*0x98ae26*/
  return setlocale_::_LN22_0();
}

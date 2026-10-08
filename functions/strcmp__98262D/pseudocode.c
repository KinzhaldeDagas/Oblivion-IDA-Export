int __cdecl CRT_StricmpLocaleDispatch(const char *left, const char *right)
{
  int v2; // ebx
  int v3; // edi

  if ( dword_BA9E10[0] ) /*0x982633*/
    return _stricmp_l(left, right, 0); /*0x982672*/
  if ( left && right ) /*0x982662*/
    return __ascii_stricmp((unsigned __int8 *)left, (unsigned __int8 *)right); /*0x982666*/
  *_errno() = 0x16; /*0x98264a*/
  _invalid_parameter(v2, v3, 0); /*0x982650*/
  return 0x7FFFFFFF; /*0x982664*/
}

int __cdecl ungetc(int Ch, FILE *File)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // edi

  if ( !File ) /*0x98860c*/
  {
    *_errno() = 0x16; /*0x988613*/
    _invalid_parameter(v2, v4, 0); /*0x98861e*/
    JUMPOUT(0x988656); /*0x988656*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x98862e*/
  _ungetc_nolock(Ch, File); /*0x98863d*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x98865f*/
  return ungetc_::_LN9_4(v3);
}

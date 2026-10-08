int __cdecl fseek(FILE *File, int Offset, int Origin)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // edi

  if ( !File || (v5 = Origin, (unsigned int)Origin > 2) ) /*0x98483d*/
  {
    *_errno() = 0x16; /*0x984820*/
    _invalid_parameter(v3, v5, 0); /*0x98482b*/
    JUMPOUT(0x984876); /*0x984876*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x98484c*/
  _fseek_nolock(File, Offset, Origin); /*0x98485c*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x98487f*/
  return fseek_::_LN12_1(v4);
}

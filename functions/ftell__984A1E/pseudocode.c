int __cdecl ftell(FILE *File)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // edi

  if ( !File ) /*0x984a36*/
  {
    *_errno() = 0x16; /*0x984a3d*/
    _invalid_parameter(v1, v3, 0); /*0x984a48*/
    JUMPOUT(0x984A7C); /*0x984a7c*/
  }
  _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x984a58*/
  _ftell_nolock(File); /*0x984a64*/
  _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x984a85*/
  return ftell_::_LN9_2(v2);
}

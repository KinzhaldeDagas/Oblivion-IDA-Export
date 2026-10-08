int __cdecl fclose(FILE *File)
{
  int v1; // ebx
  int v2; // ebp

  if ( !File ) /*0x982197*/
  {
    *_errno() = 0x16; /*0x98219e*/
    _invalid_parameter(v1, 0, 0); /*0x9821a9*/
    JUMPOUT(0x9821C2); /*0x9821c2*/
  }
  if ( (File->_flag & 0x40) != 0 ) /*0x9821ba*/
  {
    File->_flag = 0; /*0x9821bc*/
  }
  else
  {
    _lock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9821c9*/
    _fclose_nolock(File); /*0x9821d3*/
    _unlock_file((_RTL_CRITICAL_SECTION_0 *)File); /*0x9821ee*/
  }
  return fclose_::_LN11_0(v2);
}

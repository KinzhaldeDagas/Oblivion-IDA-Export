int __cdecl fclose(FILE *File)
{
  if ( !File )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    JUMPOUT(0x9821C2);
  }
  if ( (File->_flag & 0x40) != 0 )
  {
    File->_flag = 0;
  }
  else
  {
    _lock_file(File);
    _fclose_nolock(File);
    _unlock_file();
  }
  return fclose_::_LN11_0();
}

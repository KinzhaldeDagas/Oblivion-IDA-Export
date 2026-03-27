unsigned int __cdecl _ftbuf(int a1, FILE *File)
{
  unsigned int result; // eax

  if ( a1 )
  {
    if ( (File->_flag & 0x1000) != 0 )
    {
      result = _flush(File);
      File->_flag &= 0xFFFFEEFF;
      File->_bufsiz = 0;
      File->_ptr = 0;
      File->_base = 0;
    }
  }
  return result;
}

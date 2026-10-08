unsigned int __cdecl _ftbuf(int a1, FILE *File)
{
  unsigned int result; // eax

  if ( a1 ) /*0x98e073*/
  {
    if ( (File->_flag & 0x1000) != 0 ) /*0x98e080*/
    {
      result = _flush(File); /*0x98e083*/
      File->_flag &= 0xFFFFEEFF; /*0x98e088*/
      File->_bufsiz = 0; /*0x98e08f*/
      File->_ptr = 0; /*0x98e093*/
      File->_base = 0; /*0x98e096*/
    }
  }
  return result; /*0x98e09c*/
}

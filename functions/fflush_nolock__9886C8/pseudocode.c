int __cdecl _fflush_nolock(FILE *File)
{
  int v2; // eax

  if ( !File ) /*0x9886cf*/
    return flsall(0); /*0x9886d2*/
  if ( _flush(File) ) /*0x9886db*/
    return 0xFFFFFFFF; /*0x9886e5*/
  if ( (File->_flag & 0x4000) == 0 ) /*0x9886f0*/
    return 0; /*0x988706*/
  v2 = _fileno(File); /*0x9886f3*/
  return -(_commit(v2) != 0); /*0x9886d8*/
}

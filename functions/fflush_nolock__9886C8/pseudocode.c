int __cdecl _fflush_nolock(FILE *File)
{
  int v2; // eax

  if ( !File )
    return flsall(0);
  if ( _flush(File) )
    return 0xFFFFFFFF;
  if ( (File->_flag & 0x4000) == 0 )
    return 0;
  v2 = _fileno(File);
  return -(_commit(v2) != 0);
}

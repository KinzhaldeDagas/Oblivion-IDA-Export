errno_t __cdecl fopen_s(FILE **File, const char *Filename, const char *Mode)
{
  FILE *v4; // eax

  if ( File )
  {
    v4 = _fsopen(Filename, Mode, 0x80);
    *File = v4;
    if ( v4 )
      return 0;
    else
      return *_errno();
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0x16;
  }
}

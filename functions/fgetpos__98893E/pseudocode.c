int __cdecl fgetpos(FILE *File, fpos_t *Pos)
{
  int v2; // ebx
  int v3; // esi
  int result; // eax
  fpos_t v5; // rax
  int v6; // ecx

  if ( File )
  {
    if ( Pos )
    {
      v5 = _ftelli64(File);
      *Pos = v5;
      v6 = HIDWORD(v5) & v5;
      result = 0xFFFFFFFF;
      if ( v6 != 0xFFFFFFFF )
        return 0;
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(v2, 0, 0);
      return 0xFFFFFFFF;
    }
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(v2, 0, v3);
    return 0xFFFFFFFF;
  }
  return result;
}

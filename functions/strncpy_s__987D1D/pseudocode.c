errno_t __cdecl strncpy_s(char *Dst, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  int v4; // edi
  int v6; // esi
  char *v7; // edx
  char *v8; // eax
  char v9; // cl
  char v10; // cl

  if ( Src )
  {
    if ( !Dst )
    {
LABEL_7:
      v6 = 0x16;
      *_errno() = 0x16;
LABEL_8:
      _invalid_parameter(0, v4, v6);
      return v6;
    }
  }
  else if ( !Dst )
  {
    if ( !(_DWORD)SizeInBytes )
      return 0;
    goto LABEL_7;
  }
  v4 = SizeInBytes;
  if ( !(_DWORD)SizeInBytes )
    goto LABEL_7;
  if ( !Src )
  {
    *Dst = 0;
    return 0;
  }
  v7 = (char *)HIDWORD(SizeInBytes);
  if ( !HIDWORD(SizeInBytes) )
  {
    *Dst = 0;
    goto LABEL_7;
  }
  v8 = Dst;
  if ( Src == (const char *)0xFFFFFFFF )
  {
    do
    {
      v9 = *v7;
      *v8++ = *v7++;
      if ( !v9 )
        break;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    do
    {
      v10 = *v7;
      *v8++ = *v7++;
      if ( !v10 )
        break;
      if ( !--v4 )
        break;
      --Src;
    }
    while ( Src );
    if ( !Src )
      *v8 = 0;
  }
  if ( v4 )
    return 0;
  if ( Src != (const char *)0xFFFFFFFF )
  {
    *Dst = 0;
    *_errno() = 0x22;
    v6 = 0x22;
    goto LABEL_8;
  }
  Dst[(_DWORD)SizeInBytes - 1] = 0;
  return 0x50;
}

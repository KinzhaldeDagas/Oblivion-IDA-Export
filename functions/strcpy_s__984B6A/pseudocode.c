errno_t __cdecl strcpy_s(char *Dst, UInt32 SizeInBytes, const char *Src)
{
  UInt32 v3; // edi
  errno_t v4; // esi
  const char *v6; // esi
  char *v7; // edx
  char v8; // al

  if ( !Dst )
    goto LABEL_3;
  v3 = SizeInBytes;
  if ( !SizeInBytes )
    goto LABEL_3;
  v6 = Src;
  if ( !Src )
  {
    *Dst = 0;
LABEL_3:
    v4 = 0x16;
    *_errno() = 0x16;
LABEL_4:
    _invalid_parameter(0, 0, 0, 0, 0);
    return v4;
  }
  v7 = Dst;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
    if ( !v8 )
      break;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
  {
    *Dst = 0;
    *_errno() = 0x22;
    v4 = 0x22;
    goto LABEL_4;
  }
  return 0;
}

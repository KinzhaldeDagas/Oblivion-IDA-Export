errno_t __cdecl strcat_s(char *Dst, rsize_t SizeInBytes, const char *Src)
{
  int v3; // edi
  int v4; // esi
  char *v6; // esi
  char *v7; // edx
  char v8; // cl

  if ( !Dst )
    goto LABEL_3;
  v3 = SizeInBytes;
  if ( !(_DWORD)SizeInBytes )
    goto LABEL_3;
  v6 = (char *)HIDWORD(SizeInBytes);
  if ( !HIDWORD(SizeInBytes) )
    goto LABEL_6;
  v7 = Dst;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
  {
LABEL_6:
    *Dst = 0;
LABEL_3:
    v4 = 0x16;
    *_errno() = 0x16;
LABEL_4:
    _invalid_parameter(0, v3, v4);
    return v4;
  }
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

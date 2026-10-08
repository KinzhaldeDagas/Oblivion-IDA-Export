errno_t __cdecl strncpy_s(char *Dst, rsize_t SizeInBytes, const char *Src, rsize_t MaxCount)
{
  int v4; // edi
  int v6; // esi
  char *v7; // edx
  char *v8; // eax
  char v9; // cl
  char v10; // cl

  if ( Src ) /*0x987d2b*/
  {
    if ( !Dst ) /*0x987d3f*/
    {
LABEL_7:
      v6 = 0x16; /*0x987d48*/
      *_errno() = 0x16; /*0x987d50*/
LABEL_8:
      _invalid_parameter(0, v4, v6); /*0x987d52*/
      return v6; /*0x987d61*/
    }
  }
  else if ( !Dst ) /*0x987d2f*/
  {
    if ( !(_DWORD)SizeInBytes ) /*0x987d34*/
      return 0; /*0x987d3c*/
    goto LABEL_7; /*0x987d34*/
  }
  v4 = SizeInBytes; /*0x987d41*/
  if ( !(_DWORD)SizeInBytes ) /*0x987d46*/
    goto LABEL_7; /*0x987d46*/
  if ( !Src ) /*0x987d66*/
  {
    *Dst = 0; /*0x987d68*/
    return 0; /*0x987d6a*/
  }
  v7 = (char *)HIDWORD(SizeInBytes); /*0x987d6c*/
  if ( !HIDWORD(SizeInBytes) ) /*0x987d71*/
  {
    *Dst = 0; /*0x987d73*/
    goto LABEL_7; /*0x987d75*/
  }
  v8 = Dst; /*0x987d7b*/
  if ( Src == (const char *)0xFFFFFFFF ) /*0x987d7d*/
  {
    do /*0x987d8a*/
    {
      v9 = *v7; /*0x987d7f*/
      *v8++ = *v7++; /*0x987d81*/
      if ( !v9 ) /*0x987d87*/
        break; /*0x987d87*/
      --v4; /*0x987d89*/
    }
    while ( v4 ); /*0x987d8a*/
  }
  else
  {
    do /*0x987d9e*/
    {
      v10 = *v7; /*0x987d8e*/
      *v8++ = *v7++; /*0x987d90*/
      if ( !v10 ) /*0x987d96*/
        break; /*0x987d96*/
      if ( !--v4 ) /*0x987d99*/
        break; /*0x987d99*/
      --Src; /*0x987d9b*/
    }
    while ( Src ); /*0x987d9e*/
    if ( !Src ) /*0x987da3*/
      *v8 = 0; /*0x987da5*/
  }
  if ( v4 ) /*0x987da9*/
    return 0; /*0x987da9*/
  if ( Src != (const char *)0xFFFFFFFF ) /*0x987daf*/
  {
    *Dst = 0; /*0x987dc0*/
    *_errno() = 0x22; /*0x987dca*/
    v6 = 0x22; /*0x987dcc*/
    goto LABEL_8; /*0x987dce*/
  }
  Dst[(_DWORD)SizeInBytes - 1] = 0; /*0x987db6*/
  return 0x50; /*0x987d38*/
}

errno_t __cdecl strcpy_s(char *Dst, UInt32 SizeInBytes, const char *Src)
{
  UInt32 v3; // edi
  int v4; // esi
  const char *v6; // esi
  char *v7; // edx
  char v8; // al

  if ( !Dst ) /*0x984b75*/
    goto LABEL_3; /*0x984b75*/
  v3 = SizeInBytes; /*0x984b77*/
  if ( !SizeInBytes ) /*0x984b7d*/
    goto LABEL_3; /*0x984b7d*/
  v6 = Src; /*0x984b9a*/
  if ( !Src ) /*0x984ba0*/
  {
    *Dst = 0; /*0x984ba2*/
LABEL_3:
    v4 = 0x16; /*0x984b7f*/
    *_errno() = 0x16; /*0x984b87*/
LABEL_4:
    _invalid_parameter(0, v3, v4); /*0x984b89*/
    return v4; /*0x984b98*/
  }
  v7 = Dst; /*0x984ba6*/
  do /*0x984bb3*/
  {
    v8 = *v6; /*0x984ba8*/
    *v7++ = *v6++; /*0x984baa*/
    if ( !v8 ) /*0x984bb0*/
      break; /*0x984bb0*/
    --v3; /*0x984bb2*/
  }
  while ( v3 ); /*0x984bb3*/
  if ( !v3 ) /*0x984bb7*/
  {
    *Dst = 0; /*0x984bb9*/
    *_errno() = 0x22; /*0x984bc3*/
    v4 = 0x22; /*0x984bc5*/
    goto LABEL_4; /*0x984bc7*/
  }
  return 0; /*0x984bcb*/
}

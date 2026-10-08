errno_t __cdecl strcat_s(char *Dst, rsize_t SizeInBytes, const char *Src)
{
  int v3; // edi
  int v4; // esi
  char *v6; // esi
  char *v7; // edx
  char v8; // cl

  if ( !Dst ) /*0x987ddb*/
    goto LABEL_3; /*0x987ddb*/
  v3 = SizeInBytes; /*0x987ddd*/
  if ( !(_DWORD)SizeInBytes ) /*0x987de3*/
    goto LABEL_3; /*0x987de3*/
  v6 = (char *)HIDWORD(SizeInBytes); /*0x987e00*/
  if ( !HIDWORD(SizeInBytes) ) /*0x987e06*/
    goto LABEL_6; /*0x987e06*/
  v7 = Dst; /*0x987e0c*/
  do /*0x987e14*/
  {
    if ( !*v7 ) /*0x987e0e*/
      break; /*0x987e10*/
    ++v7; /*0x987e12*/
    --v3; /*0x987e13*/
  }
  while ( v3 ); /*0x987e14*/
  if ( !v3 ) /*0x987e18*/
  {
LABEL_6:
    *Dst = 0; /*0x987e08*/
LABEL_3:
    v4 = 0x16; /*0x987de5*/
    *_errno() = 0x16; /*0x987ded*/
LABEL_4:
    _invalid_parameter(0, v3, v4); /*0x987def*/
    return v4; /*0x987dfe*/
  }
  do /*0x987e25*/
  {
    v8 = *v6; /*0x987e1a*/
    *v7++ = *v6++; /*0x987e1c*/
    if ( !v8 ) /*0x987e22*/
      break; /*0x987e22*/
    --v3; /*0x987e24*/
  }
  while ( v3 ); /*0x987e25*/
  if ( !v3 ) /*0x987e29*/
  {
    *Dst = 0; /*0x987e2b*/
    *_errno() = 0x22; /*0x987e35*/
    v4 = 0x22; /*0x987e37*/
    goto LABEL_4; /*0x987e39*/
  }
  return 0; /*0x987e3d*/
}

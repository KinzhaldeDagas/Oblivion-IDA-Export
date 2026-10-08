BOOL __usercall IsRootUNCName@<eax>(_BYTE *a1@<esi>)
{
  char v1; // al
  char v2; // al
  _BYTE *v3; // eax
  char v4; // cl
  char *v5; // eax
  char v6; // cl
  const char *v8; // [esp+0h] [ebp-4h]

  if ( (unsigned int)strlen(v8) < 5 ) /*0x9836e6*/
    return 0; /*0x9836e6*/
  if ( *a1 != 0x5C && *a1 != 0x2F ) /*0x9836f0*/
    return 0; /*0x9836f0*/
  v1 = a1[1]; /*0x9836f2*/
  if ( v1 != 0x5C && v1 != 0x2F ) /*0x9836fb*/
    return 0; /*0x9836fb*/
  v2 = a1[2]; /*0x9836fd*/
  if ( v2 == 0x5C ) /*0x983702*/
    return 0; /*0x983702*/
  if ( v2 == 0x2F ) /*0x983706*/
    return 0; /*0x983706*/
  v3 = a1 + 3; /*0x983708*/
  v4 = a1[3]; /*0x98370b*/
  if ( !v4 ) /*0x983711*/
    return 0; /*0x983711*/
  do /*0x98371e*/
  {
    if ( v4 == 0x5C ) /*0x983716*/
      break; /*0x983716*/
    if ( v4 == 0x2F ) /*0x98371b*/
      break; /*0x98371b*/
    v4 = *++v3; /*0x98371e*/
  }
  while ( *v3 ); /*0x98371e*/
  if ( !*v3 ) /*0x983724*/
    return 0; /*0x983724*/
  v5 = v3 + 1; /*0x983728*/
  if ( !*v5 ) /*0x983729*/
    return 0; /*0x983729*/
  v6 = *v5; /*0x98372d*/
  do /*0x98373e*/
  {
    if ( v6 == 0x5C ) /*0x983736*/
      break; /*0x983736*/
    if ( v6 == 0x2F ) /*0x98373b*/
      break; /*0x98373b*/
    v6 = *++v5; /*0x98373e*/
  }
  while ( *v5 ); /*0x98373e*/
  return !*v5 || !v5[1]; /*0x98374f*/
}

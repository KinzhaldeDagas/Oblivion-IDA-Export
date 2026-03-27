BOOL __usercall IsRootUNCName@<eax>(_BYTE *a1@<esi>)
{
  char v1; // al
  char v2; // al
  _BYTE *v3; // eax
  char v4; // cl
  char *v5; // eax
  char v6; // cl
  const char *v8; // [esp+0h] [ebp-4h]

  if ( (unsigned int)strlen(v8) < 5 )
    return 0;
  if ( *a1 != 0x5C && *a1 != 0x2F )
    return 0;
  v1 = a1[1];
  if ( v1 != 0x5C && v1 != 0x2F )
    return 0;
  v2 = a1[2];
  if ( v2 == 0x5C )
    return 0;
  if ( v2 == 0x2F )
    return 0;
  v3 = a1 + 3;
  v4 = a1[3];
  if ( !v4 )
    return 0;
  do
  {
    if ( v4 == 0x5C )
      break;
    if ( v4 == 0x2F )
      break;
    v4 = *++v3;
  }
  while ( *v3 );
  if ( !*v3 )
    return 0;
  v5 = v3 + 1;
  if ( !*v5 )
    return 0;
  v6 = *v5;
  do
  {
    if ( v6 == 0x5C )
      break;
    if ( v6 == 0x2F )
      break;
    v6 = *++v5;
  }
  while ( *v5 );
  return !*v5 || !v5[1];
}

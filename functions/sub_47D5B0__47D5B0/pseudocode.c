signed int __cdecl sub_47D5B0(const char *a1)
{
  signed int v1; // eax
  char v2; // bl
  char v3; // cl
  int i; // edx
  char v6; // cl

  v1 = strlen(a1); /*0x47d5b8*/
  v2 = 0; /*0x47d5cb*/
  if ( !v1 ) /*0x47d5cd*/
    return 0; /*0x47d5cd*/
  v3 = *a1; /*0x47d5cf*/
  if ( (*a1 < 0x30 || v3 > 0x39) && v3 != 0x2D && v3 != 0x2E ) /*0x47d5e3*/
    return 0; /*0x47d5e3*/
  if ( v1 == 1 ) /*0x47d5e8*/
  {
    if ( v3 == 0x2D || v3 == 0x2E ) /*0x47d5f2*/
      return 0; /*0x47d5f8*/
  }
  else if ( v3 == 0x2E ) /*0x47d5fc*/
  {
    v2 = 1; /*0x47d5fe*/
  }
  for ( i = 1; i < v1; ++i ) /*0x47d607*/
  {
    v6 = a1[i]; /*0x47d610*/
    if ( v6 < 0x30 || v6 > 0x39 ) /*0x47d61b*/
    {
      if ( v6 != 0x2E || v2 ) /*0x47d624*/
        return 0; /*0x47d624*/
      v2 = 1; /*0x47d62d*/
    }
  }
  return 1; /*0x47d5f4*/
}

char *__cdecl strlen_::main_loop_3(int a1)
{
  _DWORD *v1; // ecx
  int v2; // eax
  int v3; // eax

  while ( 1 ) /*0x989516*/
  {
    do /*0x989516*/
    {
      v2 = (*v1 + 0x7EFEFEFF) ^ ~*v1; /*0x98950c*/
      ++v1; /*0x98950e*/
    }
    while ( (v2 & 0x81010100) == 0 ); /*0x989516*/
    v3 = v1[0xFFFFFFFF]; /*0x989518*/
    if ( !(_BYTE)v3 ) /*0x98951d*/
      break; /*0x98951d*/
    if ( !BYTE1(v3) ) /*0x989521*/
      return (char *)v1 + 0xFFFFFFFD - a1; /*0x989550*/
    if ( (v3 & 0xFF0000) == 0 ) /*0x989528*/
      return (char *)v1 + 0xFFFFFFFE - a1; /*0x989546*/
    if ( (v3 & 0xFF000000) == 0 ) /*0x98952f*/
      return (char *)v1 + 0xFFFFFFFF - a1; /*0x98953c*/
  }
  return (char *)&v1[0xFFFFFFFF] - a1; /*0x98953c*/
}

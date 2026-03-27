char *__cdecl strlen_::main_loop_3(int a1)
{
  _DWORD *v1; // ecx
  int v2; // eax
  int v3; // eax

  while ( 1 )
  {
    do
    {
      v2 = (*v1 + 0x7EFEFEFF) ^ ~*v1;
      ++v1;
    }
    while ( (v2 & 0x81010100) == 0 );
    v3 = v1[0xFFFFFFFF];
    if ( !(_BYTE)v3 )
      break;
    if ( !BYTE1(v3) )
      return (char *)v1 + 0xFFFFFFFD - a1;
    if ( (v3 & 0xFF0000) == 0 )
      return (char *)v1 + 0xFFFFFFFE - a1;
    if ( (v3 & 0xFF000000) == 0 )
      return (char *)v1 + 0xFFFFFFFF - a1;
  }
  return (char *)&v1[0xFFFFFFFF] - a1;
}

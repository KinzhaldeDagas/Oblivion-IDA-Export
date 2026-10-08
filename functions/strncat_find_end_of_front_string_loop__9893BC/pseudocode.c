int __usercall strncat_::find_end_of_front_string_loop@<eax>(_DWORD *a1@<edi>, int a2, int a3, int a4, int a5, char a6)
{
  int v6; // eax
  int v7; // eax

  while ( 1 ) /*0x9893d2*/
  {
    do /*0x9893d2*/
    {
      v6 = (*a1 + 0x7EFEFEFF) ^ ~*a1; /*0x9893c8*/
      ++a1; /*0x9893ca*/
    }
    while ( (v6 & 0x81010100) == 0 ); /*0x9893d2*/
    v7 = a1[0xFFFFFFFF]; /*0x9893d4*/
    if ( !(_BYTE)v7 ) /*0x9893d9*/
      return strncat_::start_byte_0(a2, a3, a4, a5, a6); /*0x9893d9*/
    if ( !BYTE1(v7) ) /*0x9893dd*/
      return strncat_::start_byte_1(a2, a3, a4, a5, a6); /*0x9893dd*/
    if ( (v7 & 0xFF0000) == 0 ) /*0x9893e4*/
      break; /*0x9893e4*/
    if ( (v7 & 0xFF000000) == 0 ) /*0x9893eb*/
      return strncat_::start_byte_3(a2, a3, a4, a5, a6); /*0x9893ec*/
  }
  return strncat_::start_byte_2(a2, a3, a4, a5, a6);
}

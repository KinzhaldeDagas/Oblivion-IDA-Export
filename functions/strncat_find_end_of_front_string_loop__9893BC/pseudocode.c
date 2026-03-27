int __usercall strncat_::find_end_of_front_string_loop@<eax>(_DWORD *a1@<edi>)
{
  int v1; // eax
  int v2; // eax

  while ( 1 )
  {
    do
    {
      v1 = (*a1 + 0x7EFEFEFF) ^ ~*a1;
      ++a1;
    }
    while ( (v1 & 0x81010100) == 0 );
    v2 = a1[0xFFFFFFFF];
    if ( !(_BYTE)v2 )
      return strncat_::start_byte_0();
    if ( !BYTE1(v2) )
      return strncat_::start_byte_1();
    if ( (v2 & 0xFF0000) == 0 )
      break;
    if ( (v2 & 0xFF000000) == 0 )
      return strncat_::start_byte_3();
  }
  return strncat_::start_byte_2();
}

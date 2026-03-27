int __usercall strncat_::front_misaligned@<eax>(_BYTE *a1@<edi>)
{
  while ( *a1++ )
  {
    if ( ((unsigned __int8)a1 & 3) == 0 )
      return strncat_::find_end_of_front_string_loop();
  }
  return strncat_::start_byte_3();
}

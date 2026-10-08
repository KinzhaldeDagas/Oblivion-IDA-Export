int __usercall strncat_::front_misaligned@<eax>(_BYTE *a1@<edi>, int a2, int a3, int a4, int a5, char a6)
{
  while ( *a1++ ) /*0x9893ab*/
  {
    if ( ((unsigned __int8)a1 & 3) == 0 ) /*0x9893ba*/
      return strncat_::find_end_of_front_string_loop(a1, a2, a3, a4, a5, a6); /*0x9893bb*/
  }
  return strncat_::start_byte_3(a2, a3, a4, a5, a6);
}

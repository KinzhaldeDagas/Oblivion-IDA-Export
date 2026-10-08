char *__usercall strchr_::___from_strstr_to_strchr@<eax>(char a1@<al>, const char *Str, ...)
{
  if ( ((unsigned __int8)Str & 3) != 0 ) /*0x982ed6*/
    return (char *)strchr_::str_misaligned((int)Str, a1); /*0x982ed7*/
  else
    return (char *)strchr_::main_loop_start(); /*0x982ed6*/
}

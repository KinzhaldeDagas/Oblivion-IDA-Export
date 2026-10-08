size_t __cdecl strlen(const char *Str)
{
  size_t result; // rax

  if ( ((unsigned __int8)Str & 3) != 0 ) /*0x9894da*/
    return strlen_::str_misaligned_1(Str); /*0x9894db*/
  LODWORD(result) = strlen_::main_loop_3((int)Str); /*0x9894da*/
  return result;
}

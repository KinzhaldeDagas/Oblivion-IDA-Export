size_t __cdecl strlen(const char *Str)
{
  if ( ((unsigned __int8)Str & 3) != 0 )
    return strlen_::str_misaligned_1(Str);
  else
    return strlen_::main_loop_3(Str);
}

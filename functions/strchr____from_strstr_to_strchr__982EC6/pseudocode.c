char *strchr_::___from_strstr_to_strchr(const char *Str, ...)
{
  if ( ((unsigned __int8)Str & 3) != 0 )
    return strchr_::str_misaligned();
  else
    return strchr_::main_loop_start();
}

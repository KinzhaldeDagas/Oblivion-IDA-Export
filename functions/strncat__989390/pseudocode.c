char *__cdecl strncat(char *Dest, const char *Source, size_t Count)
{
  if ( !(_DWORD)Count )
    return (char *)strncat_::finish_0(Dest, Source);
  if ( ((unsigned __int8)Dest & 3) != 0 )
    return strncat_::front_misaligned();
  return strncat_::find_end_of_front_string_loop();
}

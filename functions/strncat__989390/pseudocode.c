char *__cdecl strncat(char *Dest, const char *Source, size_t Count)
{
  if ( !(_DWORD)Count ) /*0x989397*/
    return (char *)strncat_::finish_0((int)Dest); /*0x989397*/
  if ( ((unsigned __int8)Dest & 3) != 0 ) /*0x9893a9*/
    return (char *)strncat_::front_misaligned(Dest); /*0x9893aa*/
  return (char *)strncat_::find_end_of_front_string_loop(Dest);
}

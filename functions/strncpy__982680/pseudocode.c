char *__cdecl strncpy(char *Dest, const char *Source, size_t Count)
{
  if ( !(_DWORD)Count )
    return (char *)strncpy_::finish(Dest, Source);
  if ( ((unsigned __int8)Source & 3) != 0 )
    return strncpy_::src_misaligned();
  if ( (unsigned int)Count >> 2 )
    return strncpy_::main_loop_entrance((unsigned int)Count >> 2);
  return strncpy_::copy_tail_loop();
}

void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  if ( !(_DWORD)MaxCount )
    return memchr_::retnull_0();
  if ( ((unsigned __int8)Buf & 3) != 0 )
    return memchr_::str_misaligned_0();
  return memchr_::main_loop_start_0();
}

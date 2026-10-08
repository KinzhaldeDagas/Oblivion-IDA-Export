void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  void *result; // eax

  if ( (_DWORD)MaxCount ) /*0x988fc7*/
  {
    if ( ((unsigned __int8)Buf & 3) != 0 ) /*0x988fd9*/
      memchr_::str_misaligned_0(MaxCount, (char *)Buf, Val); /*0x988fda*/
    else
      return (void *)memchr_::main_loop_start_0(MaxCount, Buf, (unsigned __int8)Val); /*0x988fd9*/
  }
  else
  {
    memchr_::retnull_0(); /*0x988fc7*/
  }
  return result;
}

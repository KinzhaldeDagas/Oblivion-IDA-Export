char *__cdecl strncpy(char *Dest, const char *Source, size_t Count)
{
  if ( !(_DWORD)Count ) /*0x982687*/
    return (char *)strncpy_::finish((int)Dest); /*0x982687*/
  if ( ((unsigned __int8)Source & 3) != 0 ) /*0x98269f*/
    return strncpy_::src_misaligned(Count, Dest, (char *)Source, (int)Dest, (int)Source, Count, SHIDWORD(Count)); /*0x98269f*/
  if ( (unsigned int)Count >> 2 ) /*0x9826a1*/
    return strncpy_::main_loop_entrance( /*0x9826a4*/
             (unsigned int)Count >> 2,
             Count,
             (int *)Dest,
             (int *)Source,
             (int)Dest,
             (int)Source,
             Count,
             SHIDWORD(Count));
  return (char *)strncpy_::copy_tail_loop(Count, Dest, (char *)Source, (int)Dest, (int)Source, Count, SHIDWORD(Count));
}

int __usercall strncpy_::dest_align_loop@<eax>(
        char a1@<al>,
        int a2@<ecx>,
        _BYTE *a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  while ( 1 )
  {
    *a3++ = a1;
    if ( !--a2 )
      break;
    if ( ((unsigned __int8)a3 & 3) == 0 )
      return strncpy_::dest_align_loop_end();
  }
  return strncpy_::fill_tail_end(a4, a5, a6, a7);
}

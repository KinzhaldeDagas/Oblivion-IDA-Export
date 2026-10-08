int __usercall strncpy_::dest_align_loop@<eax>(char a1@<al>, unsigned int a2@<ecx>, _BYTE *a3@<edi>, int a4)
{
  while ( 1 ) /*0x9826f6*/
  {
    *a3++ = a1; /*0x9826f6*/
    if ( !--a2 ) /*0x9826fe*/
      break; /*0x9826fe*/
    if ( ((unsigned __int8)a3 & 3) == 0 ) /*0x98270a*/
      return strncpy_::dest_align_loop_end(a2); /*0x98270b*/
  }
  return strncpy_::fill_tail_end(a4);
}

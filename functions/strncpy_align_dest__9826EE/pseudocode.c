int __usercall strncpy_::align_dest@<eax>(_BYTE *a1@<edi>, char a2@<al>, unsigned int a3@<ecx>, int a4)
{
  if ( ((unsigned __int8)a1 & 3) != 0 ) /*0x9826f4*/
    return strncpy_::dest_align_loop(a2, a3, a1, a4); /*0x9826f5*/
  else
    return strncpy_::dest_align_loop_end(a3, a2, a1); /*0x9826f4*/
}

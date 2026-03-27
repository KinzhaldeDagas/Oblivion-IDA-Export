int __usercall strncpy_::align_dest@<eax>(char a1@<dil>)
{
  if ( (a1 & 3) != 0 )
    return strncpy_::dest_align_loop();
  else
    return strncpy_::dest_align_loop_end();
}

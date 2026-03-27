int __fastcall strncpy_::dest_align_loop_end(unsigned int a1)
{
  if ( a1 >> 2 )
    return strncpy_::fill_dwords_with_EOS();
  else
    return strncpy_::finish_loop();
}

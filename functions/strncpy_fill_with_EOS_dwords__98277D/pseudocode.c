int __thiscall strncpy_::fill_with_EOS_dwords(void *this)
{
  if ( this == (void *)1 )
    return strncpy_::fill_tail();
  else
    return strncpy_::fill_dwords_with_EOS();
}

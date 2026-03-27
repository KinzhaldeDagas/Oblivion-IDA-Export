int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 0xA; ++i )
  {
    v1 = &off_B312A0[i];
    result = (int (*)())_encode_pointer(off_B312A0[i]);
    *v1 = result;
  }
  return result;
}

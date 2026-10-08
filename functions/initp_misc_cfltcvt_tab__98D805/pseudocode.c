int (*_initp_misc_cfltcvt_tab())()
{
  unsigned int i; // edi
  int (**v1)(); // esi
  int (*result)(); // eax

  for ( i = 0; i < 0xA; ++i ) /*0x98d807*/
  {
    v1 = &off_B312A0[i]; /*0x98d809*/
    result = (int (*)())_encode_pointer(off_B312A0[i]); /*0x98d811*/
    *v1 = result; /*0x98d81d*/
  }
  return result; /*0x98d821*/
}

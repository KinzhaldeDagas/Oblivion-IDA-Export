int __usercall _fpmath@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int result; // eax

  _cfltcvt_init_0(); /*0x982897*/
  result = _ms_p5_mp_test_fdiv(); /*0x98289c*/
  *(_DWORD *)&byte_BA9DCC[0x14] = result; /*0x9828a6*/
  if ( a3 ) /*0x9828ab*/
    result = _setdefaultprecision(a1, a2); /*0x9828ad*/
  __asm { fnclex } /*0x9828b2*/
  return result; /*0x9828b4*/
}

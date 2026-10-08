int __usercall _clrfp@<eax>(__int16 a1@<fpstat>)
{
  __asm { fnclex } /*0x9930d0*/
  return a1; /*0x9930d7*/
}

void __usercall isintTOS(double a1@<st0>)
{
  _ST6 = a1; /*0x994c21*/
  __asm { frndint } /*0x994c23*/
  if ( _ST6 == a1 ) /*0x994c2b*/
  {
    _ST5 = a1 * dbl_B31D02; /*0x994c35*/
    __asm { frndint } /*0x994c37*/
    if ( _ST5 == a1 * dbl_B31D02 ) /*0x994c3f*/
      isintTOS_::evenint(); /*0x994c3f*/
    else
      isintTOS_::_isintTOSret(); /*0x994c42*/
  }
  else
  {
    isintTOS_::notanint(); /*0x994c2b*/
  }
}

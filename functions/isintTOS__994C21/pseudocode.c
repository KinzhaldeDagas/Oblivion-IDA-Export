int __usercall isintTOS@<eax>(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 != a1 )
    return isintTOS_::notanint();
  _ST5 = a1 * dbl_B31D02;
  __asm { frndint }
  if ( _ST5 == a1 * dbl_B31D02 )
    return isintTOS_::evenint();
  else
    return isintTOS_::_isintTOSret();
}

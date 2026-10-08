double __usercall _pow_pentium4_::ZERO_X_POS_Y@<st0>(int a1@<eax>, int a2@<ecx>)
{
  if ( ((a2 << 0xD) & a1) != 0 ) /*0x9944af*/
    return _pow_pentium4_::RET_NEG_ZERO(); /*0x9944af*/
  else
    return 0.0; /*0x9944b5*/
}

int __usercall negYTOX@<eax>(double a1@<st0>)
{
  if ( isintTOS(a1) ) /*0x994ad6*/
    return negYTOX_::evenexp(); /*0x994ae4*/
  else
    return unknown_libname_189_::negYTOXerror(a1); /*0x994add*/
}

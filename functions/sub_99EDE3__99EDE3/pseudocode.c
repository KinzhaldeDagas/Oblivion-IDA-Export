signed int __usercall sub_99EDE3@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 ) /*0x99edec*/
  {
    *a3 = dword_B31FF0; /*0x99ee11*/
    return 0; /*0x99ee13*/
  }
  else
  {
    *_errno() = 0x16; /*0x99edf8*/
    _invalid_parameter(a1, a2, 0); /*0x99edfe*/
    return 0x16; /*0x99ee08*/
  }
}

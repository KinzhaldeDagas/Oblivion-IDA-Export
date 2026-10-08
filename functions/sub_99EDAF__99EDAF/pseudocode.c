signed int __usercall sub_99EDAF@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 ) /*0x99edb8*/
  {
    *a3 = dword_B31FEC; /*0x99eddd*/
    return 0; /*0x99eddf*/
  }
  else
  {
    *_errno() = 0x16; /*0x99edc4*/
    _invalid_parameter(a1, a2, 0); /*0x99edca*/
    return 0x16; /*0x99edd4*/
  }
}

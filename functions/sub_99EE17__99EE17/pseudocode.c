signed int __usercall sub_99EE17@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 ) /*0x99ee20*/
  {
    *a3 = dword_B31FE8; /*0x99ee45*/
    return 0; /*0x99ee47*/
  }
  else
  {
    *_errno() = 0x16; /*0x99ee2c*/
    _invalid_parameter(a1, a2, 0); /*0x99ee32*/
    return 0x16; /*0x99ee3c*/
  }
}

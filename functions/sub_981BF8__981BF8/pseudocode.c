signed int __usercall sub_981BF8@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 && unk_BA9D94 ) /*0x981c20*/
  {
    *a3 = unk_BA9D94; /*0x981c29*/
    return 0; /*0x981c2b*/
  }
  else
  {
    *_errno() = 0x16; /*0x981c0d*/
    _invalid_parameter(a1, a2, 0); /*0x981c13*/
    return 0x16; /*0x981c1d*/
  }
}

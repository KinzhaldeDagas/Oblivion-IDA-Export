signed int __usercall sub_981C2F@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 && unk_BA9D94 ) /*0x981c57*/
  {
    *a3 = unk_BA9DA0; /*0x981c65*/
    return 0; /*0x981c67*/
  }
  else
  {
    *_errno() = 0x16; /*0x981c44*/
    _invalid_parameter(a1, a2, 0); /*0x981c4a*/
    return 0x16; /*0x981c54*/
  }
}

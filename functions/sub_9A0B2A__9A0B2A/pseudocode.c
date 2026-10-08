signed int __usercall sub_9A0B2A@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 ) /*0x9a0b33*/
  {
    *a3 = dword_BA9E10[0x29A]; /*0x9a0b58*/
    return 0; /*0x9a0b5a*/
  }
  else
  {
    *_errno() = 0x16; /*0x9a0b3f*/
    _invalid_parameter(a1, a2, 0); /*0x9a0b45*/
    return 0x16; /*0x9a0b4f*/
  }
}

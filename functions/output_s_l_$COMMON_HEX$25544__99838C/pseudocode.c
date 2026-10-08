int __usercall _output_s_l_::_COMMON_HEX_25544@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>)
{
  bool v3; // zf
  char v4; // al

  v3 = *(_BYTE *)(a1 - 0x18) >= 0; /*0x99838c*/
  *(_DWORD *)(a1 - 0x28) = 0x10; /*0x998390*/
  if ( !v3 ) /*0x998397*/
  {
    v4 = *(_BYTE *)(a1 - 0x64) + 0x51; /*0x9983a0*/
    *(_BYTE *)(a1 - 0x38) = 0x30; /*0x9983a2*/
    *(_BYTE *)(a1 - 0x37) = v4; /*0x9983a6*/
    *(_DWORD *)(a1 - 0x3C) = 2; /*0x9983a9*/
  }
  return _output_s_l_::_COMMON_INT_25537(a1, a2, a3);
}

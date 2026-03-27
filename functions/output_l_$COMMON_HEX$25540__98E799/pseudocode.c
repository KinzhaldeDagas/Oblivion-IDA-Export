int __usercall _output_l_::_COMMON_HEX_25540@<eax>(int a1@<ebp>, __int64 *a2@<edi>, unsigned int a3@<esi>)
{
  bool v3; // zf
  char v4; // al

  v3 = *(_BYTE *)(a1 - 0x18) >= 0;
  *(_DWORD *)(a1 - 0x28) = 0x10;
  if ( !v3 )
  {
    v4 = *(_BYTE *)(a1 - 0x4C) + 0x51;
    *(_BYTE *)(a1 - 0x38) = 0x30;
    *(_BYTE *)(a1 - 0x37) = v4;
    *(_DWORD *)(a1 - 0x3C) = 2;
  }
  return _output_l_::_COMMON_INT_25533(a1, a2, a3);
}

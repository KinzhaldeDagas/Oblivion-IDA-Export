// positive sp value has been detected, the output may be wrong!
int __usercall _output_l_::def_98E289@<eax>(int a1@<ebp>)
{
  char v1; // al

  v1 = **(_BYTE **)(a1 - 0x48); /*0x98ea07*/
  *(_BYTE *)(a1 - 0x19) = v1; /*0x98ea0b*/
  if ( v1 ) /*0x98ea0e*/
    JUMPOUT(0x98E245); /*0x98e245*/
  if ( *(_BYTE *)(a1 - 0x58) ) /*0x98ea34*/
    *(_DWORD *)(*(_DWORD *)(a1 - 0x5C) + 0x70) &= ~2u; /*0x98ea3d*/
  return *(_DWORD *)(a1 - 0x34); /*0x98ea5b*/
}

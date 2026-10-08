// positive sp value has been detected, the output may be wrong!
unsigned int __usercall _input_l_::_error_return_25524@<eax>(int a1@<ebp>)
{
  unsigned int result; // eax

  if ( *(_DWORD *)(a1 - 0x44) == 1 ) /*0x996929*/
    free(*(void **)(a1 - 0x24)); /*0x99692e*/
  if ( *(_DWORD *)(a1 - 4) == 0xFFFFFFFF ) /*0x996938*/
  {
    result = *(_DWORD *)(a1 - 0x3C); /*0x99693a*/
    if ( !result && !*(_BYTE *)(a1 - 0x15) ) /*0x996941*/
      result = 0xFFFFFFFF; /*0x996946*/
    if ( *(_BYTE *)(a1 - 0x60) ) /*0x996949*/
      *(_DWORD *)(*(_DWORD *)(a1 - 0x64) + 0x70) &= ~2u; /*0x996952*/
  }
  else
  {
    if ( *(_BYTE *)(a1 - 0x60) ) /*0x996958*/
      *(_DWORD *)(*(_DWORD *)(a1 - 0x64) + 0x70) &= ~2u; /*0x996961*/
    return *(_DWORD *)(a1 - 0x3C); /*0x996965*/
  }
  return result; /*0x99697f*/
}

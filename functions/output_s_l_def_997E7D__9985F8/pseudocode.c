// positive sp value has been detected, the output may be wrong!
int __usercall _output_s_l_::def_997E7D@<eax>(int a1@<ebp>)
{
  char v1; // al

  v1 = **(_BYTE **)(a1 - 0x4C); /*0x9985fb*/
  *(_BYTE *)(a1 - 0x19) = v1; /*0x9985ff*/
  if ( v1 ) /*0x998602*/
    JUMPOUT(0x997E2D); /*0x997e2d*/
  if ( *(_DWORD *)(a1 - 0x48) ) /*0x998627*/
  {
    if ( *(_DWORD *)(a1 - 0x48) != 7 ) /*0x998630*/
      JUMPOUT(0x997D2E); /*0x997d2e*/
  }
  if ( *(_BYTE *)(a1 - 0x50) ) /*0x998636*/
    *(_DWORD *)(*(_DWORD *)(a1 - 0x54) + 0x70) &= ~2u; /*0x99863f*/
  return *(_DWORD *)(a1 - 0x34); /*0x99865d*/
}

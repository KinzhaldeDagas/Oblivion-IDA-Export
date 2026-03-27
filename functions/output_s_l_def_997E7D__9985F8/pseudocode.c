// positive sp value has been detected, the output may be wrong!
int __usercall _output_s_l_::def_997E7D@<eax>(int a1@<ebp>)
{
  char v1; // al

  v1 = **(_BYTE **)(a1 - 0x4C);
  *(_BYTE *)(a1 - 0x19) = v1;
  if ( v1 )
    JUMPOUT(0x997E2D);
  if ( *(_DWORD *)(a1 - 0x48) )
  {
    if ( *(_DWORD *)(a1 - 0x48) != 7 )
      JUMPOUT(0x997D2E);
  }
  if ( *(_BYTE *)(a1 - 0x50) )
    *(_DWORD *)(*(_DWORD *)(a1 - 0x54) + 0x70) &= ~2u;
  return *(_DWORD *)(a1 - 0x34);
}

// positive sp value has been detected, the output may be wrong!
int __usercall _output_l_::def_98E289@<eax>(int a1@<ebp>)
{
  char v1; // al

  v1 = **(_BYTE **)(a1 - 0x48);
  *(_BYTE *)(a1 - 0x19) = v1;
  if ( v1 )
    JUMPOUT(0x98E245);
  if ( *(_BYTE *)(a1 - 0x58) )
    *(_DWORD *)(*(_DWORD *)(a1 - 0x5C) + 0x70) &= ~2u;
  return *(_DWORD *)(a1 - 0x34);
}

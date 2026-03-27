// positive sp value has been detected, the output may be wrong!
unsigned int __usercall _input_l_::_error_return_25524@<eax>(int a1@<ebp>)
{
  unsigned int result; // eax

  if ( *(_DWORD *)(a1 - 0x44) == 1 )
    free(*(void **)(a1 - 0x24));
  if ( *(_DWORD *)(a1 - 4) == 0xFFFFFFFF )
  {
    result = *(_DWORD *)(a1 - 0x3C);
    if ( !result && !*(_BYTE *)(a1 - 0x15) )
      result = 0xFFFFFFFF;
    if ( *(_BYTE *)(a1 - 0x60) )
      *(_DWORD *)(*(_DWORD *)(a1 - 0x64) + 0x70) &= ~2u;
  }
  else
  {
    if ( *(_BYTE *)(a1 - 0x60) )
      *(_DWORD *)(*(_DWORD *)(a1 - 0x64) + 0x70) &= ~2u;
    return *(_DWORD *)(a1 - 0x3C);
  }
  return result;
}

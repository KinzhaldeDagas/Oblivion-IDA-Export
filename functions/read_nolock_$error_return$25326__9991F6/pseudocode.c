// positive sp value has been detected, the output may be wrong!
int __usercall _read_nolock_::_error_return_25326@<eax>(int a1@<ebp>)
{
  int result; // eax

  if ( *(_DWORD *)(a1 - 0xC) != *(_DWORD *)(a1 + 0xC) )
    free(*(void **)(a1 - 0xC));
  result = *(_DWORD *)(a1 - 0x14);
  if ( result == 0xFFFFFFFE )
    return *(_DWORD *)(a1 - 0x10);
  return result;
}

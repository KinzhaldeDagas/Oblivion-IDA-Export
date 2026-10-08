// positive sp value has been detected, the output may be wrong!
int __usercall _read_nolock_::_error_return_25326@<eax>(int a1@<ebp>)
{
  int result; // eax

  if ( *(_DWORD *)(a1 - 0xC) != *(_DWORD *)(a1 + 0xC) ) /*0x9991fc*/
    free(*(void **)(a1 - 0xC)); /*0x9991ff*/
  result = *(_DWORD *)(a1 - 0x14); /*0x999205*/
  if ( result == 0xFFFFFFFE ) /*0x99920b*/
    return *(_DWORD *)(a1 - 0x10); /*0x999211*/
  return result; /*0x999392*/
}

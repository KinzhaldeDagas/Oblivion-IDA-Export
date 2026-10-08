int __usercall flsall_::_LN21_0@<eax>(int a1@<ebp>)
{
  int result; // eax

  result = *(_DWORD *)(a1 - 0x1C); /*0x9887cd*/
  if ( *(_DWORD *)(a1 + 8) != 1 ) /*0x9887d0*/
    return *(_DWORD *)(a1 - 0x24); /*0x9887d2*/
  return result; /*0x9887d5*/
}

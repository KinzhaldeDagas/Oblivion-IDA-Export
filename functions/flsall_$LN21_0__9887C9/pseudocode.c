int __usercall flsall_::_LN21_0@<eax>(int a1@<ebp>)
{
  int result; // eax

  result = *(_DWORD *)(a1 - 0x1C);
  if ( *(_DWORD *)(a1 + 8) != 1 )
    return *(_DWORD *)(a1 - 0x24);
  return result;
}

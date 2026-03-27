int __cdecl _get_errno_from_oserr(int a1)
{
  int i; // ecx

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == *(_DWORD *)(8 * i + 0xB30BC0) )
      return *(_DWORD *)(8 * i + 0xB30BC4);
  }
  if ( (unsigned int)(a1 - 0x13) > 0x11 )
    return (unsigned int)(a1 - 0xBC) > 0xE ? 0x16 : 8;
  else
    return 0xD;
}

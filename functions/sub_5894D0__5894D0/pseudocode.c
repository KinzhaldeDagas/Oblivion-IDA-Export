int __fastcall sub_5894D0(int a1)
{
  int result; // eax

  if ( !a1 )
    return 0;
  while ( !*(_DWORD *)(a1 + 0x24) )
  {
    a1 = *(_DWORD *)(a1 + 0x10);
    if ( !a1 )
      return 0;
  }
  result = *(_DWORD *)(a1 + 0x24);
  if ( !result )
    return 0;
  return result;
}

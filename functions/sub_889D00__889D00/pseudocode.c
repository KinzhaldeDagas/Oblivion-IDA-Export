int __cdecl sub_889D00(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a2 + 0xC) )
    *(_WORD *)(a1 + 0xC) |= 1u;
  else
    *(_WORD *)(a1 + 0xC) &= ~1u;
  return result;
}

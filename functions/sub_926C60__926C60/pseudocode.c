int __cdecl sub_926C60(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &hkMoppCode::`vftable';
  }
  return result;
}

int __cdecl sub_8D9EA0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &off_A9A2A0;
  }
  return result;
}

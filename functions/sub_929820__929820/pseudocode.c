int __cdecl sub_929820(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &off_AA1A18;
  }
  return result;
}

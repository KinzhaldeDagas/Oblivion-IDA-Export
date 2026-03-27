int __cdecl sub_8EAD20(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &off_A9AF38;
  }
  return result;
}

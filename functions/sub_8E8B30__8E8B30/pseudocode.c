int __cdecl sub_8E8B30(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)a1 = &off_A9ACB0;
  }
  return result;
}

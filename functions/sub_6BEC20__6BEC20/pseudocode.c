int __cdecl sub_6BEC20(int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6BEAD0(a1, a2);
    a2 += 0x48;
  }
  return result;
}

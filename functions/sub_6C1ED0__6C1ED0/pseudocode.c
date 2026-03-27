int __cdecl sub_6C1ED0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6BDFC0(a1, a2);
    a2 += 8;
  }
  return result;
}

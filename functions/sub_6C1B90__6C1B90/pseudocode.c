int __cdecl sub_6C1B90(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6C1A50(a1, a2);
    a2 += 0x1C;
  }
  return result;
}

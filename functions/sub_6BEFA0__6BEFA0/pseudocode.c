int __cdecl sub_6BEFA0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6BE390(a1, a2);
    a2 += 0x14;
  }
  return result;
}

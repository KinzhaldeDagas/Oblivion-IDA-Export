int __cdecl sub_6C1380(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6C1240(a1, a2);
    a2 += 0x40;
  }
  return result;
}

int __cdecl sub_6BF7F0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i )
  {
    result = sub_6BC1E0(a1, a2);
    a2 += 0x10;
  }
  return result;
}

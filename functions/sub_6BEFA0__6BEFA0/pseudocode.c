int __cdecl sub_6BEFA0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6befa7*/
  {
    result = sub_6BE390(a1, a2); /*0x6befb5*/
    a2 += 0x14; /*0x6befbd*/
  }
  return result; /*0x6befc7*/
}

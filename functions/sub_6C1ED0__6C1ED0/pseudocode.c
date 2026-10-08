int __cdecl sub_6C1ED0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6c1ed7*/
  {
    result = sub_6BDFC0(a1, a2); /*0x6c1ee5*/
    a2 += 8; /*0x6c1eed*/
  }
  return result; /*0x6c1ef7*/
}

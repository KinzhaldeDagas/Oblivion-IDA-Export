int __cdecl sub_6C1B90(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6c1b97*/
  {
    result = sub_6C1A50(a1, a2); /*0x6c1ba5*/
    a2 += 0x1C; /*0x6c1bad*/
  }
  return result; /*0x6c1bb7*/
}

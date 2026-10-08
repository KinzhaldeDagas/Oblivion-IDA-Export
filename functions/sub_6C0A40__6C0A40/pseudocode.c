int __cdecl sub_6C0A40(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6c0a47*/
  {
    result = sub_6C0900(a1, a2); /*0x6c0a55*/
    a2 += 0x4C; /*0x6c0a5d*/
  }
  return result; /*0x6c0a67*/
}

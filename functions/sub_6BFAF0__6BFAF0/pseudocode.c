int __cdecl sub_6BFAF0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6bfaf7*/
  {
    result = sub_6BD530(a1, a2); /*0x6bfb05*/
    a2 += 0x14; /*0x6bfb0d*/
  }
  return result; /*0x6bfb17*/
}

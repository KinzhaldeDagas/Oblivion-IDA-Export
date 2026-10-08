int __cdecl sub_6BF300(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6bf307*/
  {
    result = sub_6BB620(a1, a2); /*0x6bf315*/
    a2 += 8; /*0x6bf31d*/
  }
  return result; /*0x6bf327*/
}

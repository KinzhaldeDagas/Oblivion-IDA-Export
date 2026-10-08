int __cdecl sub_6C1380(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6c1387*/
  {
    result = sub_6C1240(a1, a2); /*0x6c1395*/
    a2 += 0x40; /*0x6c139d*/
  }
  return result; /*0x6c13a7*/
}

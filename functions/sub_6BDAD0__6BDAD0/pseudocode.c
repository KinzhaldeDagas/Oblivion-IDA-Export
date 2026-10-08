int __cdecl sub_6BDAD0(signed int a1, int a2, int a3)
{
  int i; // edi
  int result; // eax

  for ( i = a3; i; --i ) /*0x6bdad7*/
  {
    result = sub_6BD530(a1, a2); /*0x6bdae5*/
    a2 += 0x24; /*0x6bdaed*/
  }
  return result; /*0x6bdaf7*/
}

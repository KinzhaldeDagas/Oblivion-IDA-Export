int __cdecl sub_910270(int a1)
{
  int result; // eax

  result = a1; /*0x910270*/
  if ( a1 ) /*0x910276*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x910278*/
    *(_DWORD *)a1 = &off_A9CBA0; /*0x91027e*/
  }
  return result; /*0x910284*/
}

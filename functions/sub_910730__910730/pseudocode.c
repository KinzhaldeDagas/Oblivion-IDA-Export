int __cdecl sub_910730(int a1)
{
  int result; // eax

  result = a1; /*0x910730*/
  if ( a1 ) /*0x910736*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x910738*/
    *(_DWORD *)a1 = &off_A9CC30; /*0x91073e*/
  }
  return result; /*0x910744*/
}

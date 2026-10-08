int __cdecl sub_8F0570(int a1)
{
  int result; // eax

  result = a1; /*0x8f0570*/
  if ( a1 ) /*0x8f0576*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8f0578*/
    *(_DWORD *)a1 = &off_A9B148; /*0x8f057e*/
  }
  return result; /*0x8f0584*/
}

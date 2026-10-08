int __cdecl sub_928460(int a1)
{
  int result; // eax

  result = a1; /*0x928460*/
  if ( a1 ) /*0x928466*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x928468*/
    *(_DWORD *)a1 = &off_AA1968; /*0x92846e*/
  }
  return result; /*0x928474*/
}

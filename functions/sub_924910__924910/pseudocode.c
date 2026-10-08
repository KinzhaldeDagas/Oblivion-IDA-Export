int __cdecl sub_924910(int a1)
{
  int result; // eax

  result = a1; /*0x924910*/
  if ( a1 ) /*0x924916*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x924918*/
    *(_DWORD *)a1 = &off_A9DFA0; /*0x92491e*/
  }
  return result; /*0x924924*/
}

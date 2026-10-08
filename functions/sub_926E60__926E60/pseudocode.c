int __cdecl sub_926E60(int a1)
{
  int result; // eax

  result = a1; /*0x926e60*/
  if ( a1 ) /*0x926e66*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x926e68*/
    *(_DWORD *)a1 = &off_AA1858; /*0x926e6e*/
  }
  return result; /*0x926e74*/
}

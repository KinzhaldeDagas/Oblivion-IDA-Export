int __cdecl sub_926E40(int a1)
{
  int result; // eax

  result = a1; /*0x926e40*/
  if ( a1 ) /*0x926e46*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x926e48*/
    *(_DWORD *)a1 = &off_AA1848; /*0x926e4e*/
  }
  return result; /*0x926e54*/
}

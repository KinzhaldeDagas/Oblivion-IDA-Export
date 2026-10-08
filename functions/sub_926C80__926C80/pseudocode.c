int __cdecl sub_926C80(int a1)
{
  int result; // eax

  result = a1; /*0x926c80*/
  if ( a1 ) /*0x926c86*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x926c88*/
    *(_DWORD *)a1 = &off_AA1828; /*0x926c8e*/
  }
  return result; /*0x926c94*/
}

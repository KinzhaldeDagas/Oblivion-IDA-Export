int __cdecl sub_911980(int a1)
{
  int result; // eax

  result = a1; /*0x911980*/
  if ( a1 ) /*0x911986*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x911988*/
    *(_DWORD *)a1 = &off_A9CCFC; /*0x91198e*/
  }
  return result; /*0x911994*/
}

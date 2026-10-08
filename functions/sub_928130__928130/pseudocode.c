int __cdecl sub_928130(int a1)
{
  int result; // eax

  result = a1; /*0x928130*/
  if ( a1 ) /*0x928136*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x928138*/
    *(_DWORD *)a1 = &off_AA1948; /*0x92813e*/
  }
  return result; /*0x928144*/
}

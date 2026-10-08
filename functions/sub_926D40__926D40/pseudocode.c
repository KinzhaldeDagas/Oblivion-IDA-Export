int __cdecl sub_926D40(int a1)
{
  int result; // eax

  result = a1; /*0x926d40*/
  if ( a1 ) /*0x926d46*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x926d48*/
    *(_DWORD *)a1 = &off_AA1838; /*0x926d4e*/
  }
  return result; /*0x926d54*/
}

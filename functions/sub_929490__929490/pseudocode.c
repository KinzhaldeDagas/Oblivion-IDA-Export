int __cdecl sub_929490(int a1)
{
  int result; // eax

  result = a1; /*0x929490*/
  if ( a1 ) /*0x929496*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x929498*/
    *(_DWORD *)a1 = &off_AA19B8; /*0x92949e*/
  }
  return result; /*0x9294a4*/
}

int __cdecl sub_913850(int a1)
{
  int result; // eax

  result = a1; /*0x913850*/
  if ( a1 ) /*0x913856*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x913858*/
    *(_DWORD *)a1 = &off_A9CDAC; /*0x91385e*/
  }
  return result; /*0x913864*/
}

int __cdecl sub_913280(int a1)
{
  int result; // eax

  result = a1; /*0x913280*/
  if ( a1 ) /*0x913286*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x913288*/
    *(_DWORD *)a1 = &off_A9CD6C; /*0x91328e*/
  }
  return result; /*0x913294*/
}

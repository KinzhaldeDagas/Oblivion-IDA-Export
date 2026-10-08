int __cdecl sub_8EA200(int a1)
{
  int result; // eax

  result = a1; /*0x8ea200*/
  if ( a1 ) /*0x8ea206*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ea208*/
    *(_DWORD *)a1 = &off_A9AE10; /*0x8ea20e*/
  }
  return result; /*0x8ea214*/
}

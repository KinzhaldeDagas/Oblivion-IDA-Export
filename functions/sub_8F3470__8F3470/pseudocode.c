int __cdecl sub_8F3470(int a1)
{
  int result; // eax

  result = a1; /*0x8f3470*/
  if ( a1 ) /*0x8f3476*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8f3478*/
    *(_DWORD *)a1 = &off_A9B2A0; /*0x8f347e*/
  }
  return result; /*0x8f3484*/
}

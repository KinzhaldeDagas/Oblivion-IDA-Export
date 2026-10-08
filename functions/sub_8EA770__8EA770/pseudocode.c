int __cdecl sub_8EA770(int a1)
{
  int result; // eax

  result = a1; /*0x8ea770*/
  if ( a1 ) /*0x8ea776*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ea778*/
    *(_DWORD *)a1 = &off_A9AEC0; /*0x8ea77e*/
  }
  return result; /*0x8ea784*/
}

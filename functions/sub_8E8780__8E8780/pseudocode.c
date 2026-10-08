int __cdecl sub_8E8780(int a1)
{
  int result; // eax

  result = a1; /*0x8e8780*/
  if ( a1 ) /*0x8e8786*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e8788*/
    *(_DWORD *)a1 = &off_A9ABC4; /*0x8e878e*/
  }
  return result; /*0x8e8794*/
}

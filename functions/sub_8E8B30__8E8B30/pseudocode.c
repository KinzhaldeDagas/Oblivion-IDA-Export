int __cdecl sub_8E8B30(int a1)
{
  int result; // eax

  result = a1; /*0x8e8b30*/
  if ( a1 ) /*0x8e8b36*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8e8b38*/
    *(_DWORD *)a1 = &off_A9ACB0; /*0x8e8b3e*/
  }
  return result; /*0x8e8b44*/
}

int __cdecl sub_8D9A90(int a1)
{
  int result; // eax

  result = a1; /*0x8d9a90*/
  if ( a1 ) /*0x8d9a96*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8d9a98*/
    *(_DWORD *)a1 = &off_A9A274; /*0x8d9a9e*/
  }
  return result; /*0x8d9aa4*/
}

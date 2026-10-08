int __cdecl sub_8EAD20(int a1)
{
  int result; // eax

  result = a1; /*0x8ead20*/
  if ( a1 ) /*0x8ead26*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ead28*/
    *(_DWORD *)a1 = &off_A9AF38; /*0x8ead2e*/
  }
  return result; /*0x8ead34*/
}

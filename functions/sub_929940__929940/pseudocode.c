int __cdecl sub_929940(int a1)
{
  int result; // eax

  result = a1; /*0x929940*/
  if ( a1 ) /*0x929946*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x929948*/
    *(_DWORD *)a1 = &off_AA1A50; /*0x92994e*/
  }
  return result; /*0x929954*/
}

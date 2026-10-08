int __cdecl sub_8B2370(int a1)
{
  int result; // eax

  result = a1; /*0x8b2370*/
  if ( a1 ) /*0x8b2376*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8b2378*/
    *(_DWORD *)a1 = &off_A97E68; /*0x8b237e*/
  }
  return result; /*0x8b2384*/
}

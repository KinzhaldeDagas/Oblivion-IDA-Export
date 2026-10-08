int __cdecl sub_914400(int a1)
{
  int result; // eax

  result = a1; /*0x914400*/
  if ( a1 ) /*0x914406*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x914408*/
    *(_DWORD *)a1 = &off_A9CE84; /*0x91440e*/
  }
  return result; /*0x914414*/
}

char __cdecl sub_4F8140(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f814c*/
  if ( a2 ) /*0x4f814e*/
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 0x40) != 0 ) /*0x4f8159*/
      *a4 = 1.0; /*0x4f815d*/
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f815f*/
    return 1; /*0x4f8193*/
  if ( 0.0 == *a4 ) /*0x4f816f*/
    Interface_ConsolePrint("PC did not Murder a faction member."); /*0x4f8186*/
  else
    Interface_ConsolePrint("PC murdered a faction member."); /*0x4f8176*/
  return 1; /*0x4f8180*/
}

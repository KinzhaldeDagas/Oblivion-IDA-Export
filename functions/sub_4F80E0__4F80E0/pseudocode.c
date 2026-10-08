char __cdecl sub_4F80E0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f80ec*/
  if ( a2 ) /*0x4f80ee*/
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 8) != 0 ) /*0x4f80f9*/
      *a4 = 1.0; /*0x4f80fd*/
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f80ff*/
    return 1; /*0x4f8133*/
  if ( 0.0 == *a4 ) /*0x4f810f*/
    Interface_ConsolePrint("PC is not expelled."); /*0x4f8126*/
  else
    Interface_ConsolePrint("PC is expelled."); /*0x4f8116*/
  return 1; /*0x4f8120*/
}

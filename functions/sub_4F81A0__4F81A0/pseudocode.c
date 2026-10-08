char __cdecl sub_4F81A0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f81ac*/
  if ( a2 ) /*0x4f81ae*/
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 0x10) != 0 ) /*0x4f81b9*/
      *a4 = 1.0; /*0x4f81bd*/
  }
  if ( !MEMORY[0xB361AC] ) /*0x4f81bf*/
    return 1; /*0x4f81f3*/
  if ( 0.0 == *a4 ) /*0x4f81cf*/
    Interface_ConsolePrint("PC did not steal from faction or member."); /*0x4f81e6*/
  else
    Interface_ConsolePrint("PC stole from faction or member."); /*0x4f81d6*/
  return 1; /*0x4f81e0*/
}

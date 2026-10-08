char __cdecl sub_4F8050(int a1, int a2, int a3, double *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp+10h]

  *a4 = 0.0; /*0x4f8056*/
  if ( reference->isSleeping ) /*0x4f805e*/
    v5 = 1.0; /*0x4f8067*/
  else
    v5 = 0.0; /*0x4f806b*/
  v7 = v5; /*0x4f806d*/
  *a4 = v7; /*0x4f8075*/
  if ( MEMORY[0xB361AC] ) /*0x4f8077*/
    Interface_ConsolePrint("IsPlayerSleeping >> %0.2f", v7); /*0x4f808b*/
  return 1; /*0x4f8095*/
}

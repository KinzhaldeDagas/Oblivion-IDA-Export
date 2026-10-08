char __cdecl sub_4F5600(int a1, int a2, int a3, double *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp+10h]

  *a4 = 0.0; /*0x4f5607*/
  if ( sub_65DAC0(reference) ) /*0x4f560f*/
    v5 = 1.0; /*0x4f5618*/
  else
    v5 = 0.0; /*0x4f561c*/
  v7 = v5; /*0x4f561e*/
  *a4 = v7; /*0x4f5626*/
  if ( MEMORY[0xB361AC] ) /*0x4f5628*/
    Interface_ConsolePrint("IsPlayerAMurderer >> %0.2f", v7); /*0x4f563d*/
  return 1; /*0x4f5647*/
}

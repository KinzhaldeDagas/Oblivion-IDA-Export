char __cdecl sub_4F5570(int a1, int a2, int a3, double *a4)
{
  double GameDayOfWeek; // st7

  *a4 = 0.0; /*0x4f5577*/
  GameDayOfWeek = (double)(int)TimeGlobals_GetGameDayOfWeek(&MEMORY[0xB332E0]); /*0x4f5587*/
  *a4 = GameDayOfWeek; /*0x4f558b*/
  if ( MEMORY[0xB361AC] ) /*0x4f558d*/
    Interface_ConsolePrint("GetDayOfWeek >> %0.2f", GameDayOfWeek); /*0x4f55a2*/
  return 1; /*0x4f55ac*/
}

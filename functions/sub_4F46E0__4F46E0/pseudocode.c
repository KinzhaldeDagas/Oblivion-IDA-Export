// GetCurrentTime_Eval reads TimeGlobals::GameHour and returns the numeric hour for the enclosing CTDA comparison; it has no parameters or subject requirement. Vanilla core dialogue uses it 23 times. Fallout's later counterpart x4y6:0x823B4BC8 reads Calendar::GetHour, so the owning time subsystem differs.
char __cdecl GetCurrentTime_Eval(TESObjectREFR *subject, TESForm *param1, TESForm *param2, double *value)
{
  double GameHour; // st7

  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x4f46e5*/
  *value = GameHour; /*0x4f46ee*/
  if ( MEMORY[0xB361AC] ) /*0x4f46f0*/
    Interface_ConsolePrint("GetCurrentTime >> %0.2f", GameHour); /*0x4f4704*/
  return 1; /*0x4f470e*/
}

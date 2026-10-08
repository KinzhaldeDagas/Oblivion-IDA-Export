// GetQuestRunning_Eval (index 56 / opcode 0x1038): tests the Quest parameter's questFlags bit 0. It does not inspect stage or completion state.
char __cdecl GetQuestRunning_Eval(TESObjectREFR *subject, TESQuest *quest, TESForm *param2, double *value)
{
  *value = 0.0; /*0x4f67ac*/
  if ( quest ) /*0x4f67ae*/
  {
    if ( (quest->questFlags & 1) != 0 ) /*0x4f67b4*/
      *value = 1.0; /*0x4f67b8*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f67ba*/
    Interface_ConsolePrint("GetQuestRunning >> %0.2f", *value); /*0x4f67d0*/
  return 1; /*0x4f67da*/
}

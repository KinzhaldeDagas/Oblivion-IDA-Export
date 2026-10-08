// GetStageDone_Eval queries TESQuest::IsStageDone(quest, stage) and returns numeric 1/0. It does not compare against the current stage number.
char __cdecl GetStageDone_Eval(TESObjectREFR *subject, TESQuest *quest, UInt32 stage, double *value)
{
  *value = 0.0; /*0x4f4bcd*/
  if ( quest ) /*0x4f4bcf*/
  {
    if ( TESQuest::IsStageDone(quest, stage) ) /*0x4f4bd6*/
      *value = 1.0; /*0x4f4be1*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4be3*/
    Interface_ConsolePrint("GetStageDone >> %0.2f", *value); /*0x4f4bf9*/
  return 1; /*0x4f4c03*/
}

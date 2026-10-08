// GetStage_Eval (index 58 / opcode 0x103A): returns TESQuest::GetCurrentStage for the Quest parameter; it does not query the stage-done list.
char __cdecl GetStage_Eval(TESObjectREFR *subject, TESQuest *quest, TESForm *param2, double *value)
{
  int v4; // eax
  double v5; // st7

  *value = 0.0; /*0x4f4b7d*/
  if ( quest ) /*0x4f4b7f*/
  {
    LOBYTE(v4) = TESQuest::GetCurrentStage(quest); /*0x4f4b81*/
    v5 = (double)v4; /*0x4f4b8c*/
    if ( v4 < 0 ) /*0x4f4b90*/
      v5 = v5 + flt_A2FC78; /*0x4f4b92*/
    *value = v5; /*0x4f4b98*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4b9a*/
    Interface_ConsolePrint("GetStage >> %0.2f", *value); /*0x4f4bb0*/
  return 1; /*0x4f4bba*/
}

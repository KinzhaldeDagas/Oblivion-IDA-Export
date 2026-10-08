// Oblivion GetRandomPercent_Eval draws Game_RandomLargeInteger(0) % 100, returning 0..99 per evaluation. Fallout's analogous condition callback (x4y6:0x823B70B0) uses BSRandom::UnsignedInt(100); both yield percent values, but the RNG source/reduction differs. This remains independent of TESTopicInfo.Random selection.
char __cdecl GetRandomPercent_Eval(TESObjectREFR *subject, TESForm *param1, TESForm *param2, double *value)
{
  double v4; // st7

  v4 = (double)(Game_RandomLargeInteger(0) % 0x64);// Vanilla GetRandomPercent uses Game_RandomLargeInteger(0) % 100, yielding integer percent values 0..99. /*0x4f4f1b*/
  *value = v4; /*0x4f4f1e*/
  if ( MEMORY[0xB361AC] ) /*0x4f4f20*/
    Interface_ConsolePrint("GetRandomPercent >> %0.2f", v4); /*0x4f4f34*/
  return 1; /*0x4f4f3f*/
}

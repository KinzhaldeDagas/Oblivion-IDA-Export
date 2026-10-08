// Initializes Oblivion UI string setting sMajorSkills: major skills are presented as starting at 25 (Apprentice). This agrees with the executed level-1 major base in TESNPC_RecalculateAutoStats before specialization and race bonuses.
int InitSetting_sMajorSkills()
{
  GameSetting_ConstrAndReg( /*0x9f0d1f*/
    &g_sMajorSkills,
    (int)"sMajorSkills",
    (int)"You will start at 25 (Apprentice Level) in each of your major skills.");
  return atexit(sub_A21380); /*0x9f0d2f*/
}

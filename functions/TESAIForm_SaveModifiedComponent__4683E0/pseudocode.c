void *__thiscall TESAIForm_SaveModifiedComponent(int this, __int16 a2)
{
  void *result; // eax

  if ( (a2 & 0x100) != 0 ) /*0x4683eb*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(this + 4), 1u); /*0x4683f9*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(this + 5), 1u); /*0x46840a*/
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(this + 6), 1u); /*0x46841b*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(this + 7), 1u); /*0x46842c*/
  }
  return result; /*0x468431*/
}

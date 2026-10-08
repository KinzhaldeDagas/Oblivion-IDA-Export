void *__thiscall TESAIForm_LoadModifiedComponent(int this, __int16 a2, int a3)
{
  void *result; // eax

  if ( (a2 & 0x100) != 0 ) /*0x46844b*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(this + 4), 1u); /*0x468459*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(this + 5), 1u); /*0x46846a*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(this + 6), 1u); /*0x46847b*/
    return SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(this + 7), 1u); /*0x46848c*/
  }
  return result; /*0x468491*/
}

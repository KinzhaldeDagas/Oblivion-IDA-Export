void *__thiscall TESAIForm_SaveModifiedComponent(int this, __int16 a2)
{
  void *result; // eax
  size_t v4; // [esp-4h] [ebp-8h]
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]

  if ( (a2 & 0x100) != 0 )
  {
    LODWORD(v4) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 4), v4);
    LODWORD(v5) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 5), v5);
    LODWORD(v6) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 6), v6);
    LODWORD(v7) = 1;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(this + 7), v7);
  }
  return result;
}

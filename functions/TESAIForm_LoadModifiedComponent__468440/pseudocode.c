void *__thiscall TESAIForm_LoadModifiedComponent(int this, __int16 a2, int a3)
{
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-8h]
  size_t v6; // [esp-4h] [ebp-8h]
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]

  if ( (a2 & 0x100) != 0 )
  {
    LODWORD(v5) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 4), v5);
    LODWORD(v6) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 5), v6);
    LODWORD(v7) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 6), v7);
    LODWORD(v8) = 1;
    return SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 7), v8);
  }
  return result;
}

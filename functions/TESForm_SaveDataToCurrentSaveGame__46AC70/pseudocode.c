void __stdcall TESForm_SaveDataToCurrentSaveGame(TESForm *a1, size_t a2)
{
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, a1, a2);
}

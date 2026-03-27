char __stdcall TESForm_SaveFormIDToCurrentSaveGame(int a1, unsigned int a2)
{
  return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, a1, a2);
}

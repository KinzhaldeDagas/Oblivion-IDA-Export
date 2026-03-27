void __stdcall TESForm_LoadDataFromCurrentSaveGame(TESForm *a1, size_t a2)
{
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, a1, a2);
}

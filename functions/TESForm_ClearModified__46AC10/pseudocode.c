int __thiscall TESForm_ClearModified(TESForm *this, int a2)
{
  int result; // eax

  LOBYTE(result) = TESSaveLoadGame_ClearFormModifier(SaveLoad_CurrentSavegame, (int)this, a2);
  return result;
}

char __thiscall TESForm_MarkAsModified(TESForm *this, int a2)
{
  return TESSaveLoadGame_AddFormModifier(SaveLoad_CurrentSavegame, this, a2);
}

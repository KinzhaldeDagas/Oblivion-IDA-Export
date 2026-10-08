int __thiscall TESForm_ClearModified(TESForm *this, int a2)
{
  int result; // eax

  LOBYTE(result) = TESSaveLoadGame_ClearFormModifier(g_TESSaveLoadGame, (int)this, a2); /*0x46ac1c*/
  return result; /*0x46ac21*/
}

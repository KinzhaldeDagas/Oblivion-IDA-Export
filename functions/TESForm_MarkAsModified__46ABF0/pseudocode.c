char __thiscall TESForm_MarkAsModified(TESForm *this, int a2)
{
  return TESSaveLoadGame_AddFormModifier(g_TESSaveLoadGame, this, a2); /*0x46ac01*/
}

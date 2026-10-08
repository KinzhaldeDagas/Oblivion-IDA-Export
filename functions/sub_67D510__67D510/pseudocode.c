// Verified package persistence virtual SaveGame from vtable slot E0, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
// Verified derived wire payload:3C,40,4C dwords; version>=6C adds50,54; then FormIDs from forms44/48. Size agrees with67D4F0: base+20 bytes before6C or base+28 thereafter.
void __thiscall TrespassPackage_SaveGame(TrespassPackage *self)
{
  TESForm *form44; // eax
  TESForm *form48; // eax
  unsigned int source; // [esp+4h] [ebp-8h] BYREF
  unsigned int refID; // [esp+8h] [ebp-4h] BYREF

  TESPackage_SaveGame(&self->base); /*0x67d516*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->unknown3C, 4u); /*0x67d523*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->unknown40, 4u); /*0x67d530*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->unknown4C, 4u); /*0x67d53d*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Cu ) /*0x67d54b*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->unknown50, 4u); /*0x67d555*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->unknown54, 4u); /*0x67d562*/
  }
  form44 = self->form44; /*0x67d567*/
  source = 0; /*0x67d56c*/
  if ( form44 ) /*0x67d574*/
    source = form44->member.refID; /*0x67d579*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)self, &source, 4u); /*0x67d586*/
  form48 = self->form48; /*0x67d58b*/
  refID = 0; /*0x67d590*/
  if ( form48 ) /*0x67d598*/
    refID = form48->member.refID; /*0x67d59d*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)self, &refID, 4u); /*0x67d5aa*/
}

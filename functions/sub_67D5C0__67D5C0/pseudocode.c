// Verified package persistence virtual LoadGame from vtable slot E4, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
// Verified: inverse TrespassPackage wire payload.44/48 temporarily hold saved IDs;67D340 later resolves via TESForm_LookupByFormID. Unknown domain roles of those forms, so names remain offset-based.
void __thiscall TrespassPackage_LoadGame(TrespassPackage *self)
{
  unsigned int destination; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v3; // [esp+10h] [ebp-4h] BYREF

  TESPackage_LoadGame(&self->base); /*0x67d5c6*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->unknown3C, 4u); /*0x67d5d3*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->unknown40, 4u); /*0x67d5e0*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->unknown4C, 4u); /*0x67d5ed*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Cu ) /*0x67d5fb*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->unknown50, 4u); /*0x67d605*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->unknown54, 4u); /*0x67d612*/
  }
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)self, &destination, 4u); /*0x67d620*/
  self->form44 = (TESForm *)destination; /*0x67d62f*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)self, &v3, 4u); /*0x67d635*/
  self->form48 = (TESForm *)v3; /*0x67d63e*/
}

// Verified: NULL entry returns false; nonnull entry writes actorValue byte at +0 and float at +4 as 5 bytes and returns true. ECX collection is unused. Corrects prior float-typed pointer argument. Called for each of 18 indexed entries by AVCollection_Save.
bool __thiscall AVCollection_SaveEntryIfPresent(AVCollection *self, const AVCollectionEntry *entry)
{
  unsigned __int8 actorValue; // cl
  float source; // [esp+0h] [ebp-4h] BYREF

  source = *(float *)&self; /*0x65c220*/
  if ( !entry ) /*0x65c227*/
    return 0; /*0x65c229*/
  actorValue = entry->actorValue; /*0x65c22f*/
  source = entry->value; /*0x65c236*/
  LOBYTE(entry) = actorValue; /*0x65c23e*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &entry, 1u); /*0x65c249*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &source, 4u); /*0x65c25b*/
  return 1; /*0x65c22c*/
}

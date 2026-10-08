// Verified: repaired erroneous internal-basic-block function boundaries; all merged entry xrefs are local branches/fallthroughs using shared stack frame. ECX-only receiver, no stack or extra register arguments. Called by actor-base mask 0x10000000 at complete object +0xD0. Labels preserved, executable bytes unchanged.
// Verified serialization: reserves UInt16 count, writes list entries until NULL payload, then dedicated +8/+0xC entries, then 18 indexed pointers at +0x10 through SaveEntryIfPresent. Each emitted entry is one actor-value byte + four float bytes; final count backpatched. This writer has no old-format version branch.
// Verified continuation 2026-10-04: constructor/insert/remove/clear/copy are now connected; Add 65C8F0 fragmentation repaired. Prior insertion-fragmentation boundary is superseded. Probable corresponding Fallout ModifierList serialization at 826B6B88/826B6CD0/826B7500; dynamic map and endian handling differ, no schema copied.
void __thiscall AVCollection_Save(AVCollection *self)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebx
  AVCollection *i; // esi
  AVCollectionEntry *entry; // eax
  unsigned __int8 actorValue; // cl
  AVCollectionEntry *magicka; // eax
  unsigned __int8 v8; // cl
  AVCollectionEntry *fatigue; // eax
  unsigned __int8 v10; // cl
  AVCollectionIndex *indexedEntries; // eax
  unsigned __int8 source; // [esp+13h] [ebp-9h] BYREF
  int Src; // [esp+14h] [ebp-8h] BYREF
  float value; // [esp+18h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x65c279*/
  Src = 0; /*0x65c285*/
  bufferCursor = v2->bufferCursor; /*0x65c28d*/
  SaveLoad_SaveData(v2, &Src, 2u); /*0x65c291*/
  for ( i = self; i; i = (AVCollection *)i->list.next ) /*0x65c29f*/
  {
    entry = i->list.entry; /*0x65c2a1*/
    if ( !i->list.entry ) /*0x65c2a1*/
      break; /*0x65c2a5*/
    actorValue = entry->actorValue; /*0x65c2a7*/
    value = entry->value; /*0x65c2ad*/
    source = actorValue; /*0x65c2b5*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x65c2c0*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &value, 4u); /*0x65c2d2*/
    ++Src; /*0x65c2d7*/
  }
  magicka = self->magicka; /*0x65c2e2*/
  if ( magicka ) /*0x65c2e7*/
  {
    v8 = magicka->actorValue; /*0x65c2e9*/
    value = magicka->value; /*0x65c2ef*/
    source = v8; /*0x65c2f7*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x65c302*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &value, 4u); /*0x65c314*/
    ++Src; /*0x65c319*/
  }
  fatigue = self->fatigue; /*0x65c31d*/
  if ( fatigue ) /*0x65c322*/
  {
    v10 = fatigue->actorValue; /*0x65c324*/
    value = fatigue->value; /*0x65c32a*/
    source = v10; /*0x65c332*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x65c33d*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &value, 4u); /*0x65c34f*/
    ++Src; /*0x65c354*/
  }
  indexedEntries = self->indexedEntries; /*0x65c358*/
  if ( indexedEntries ) /*0x65c35d*/
  {
    if ( AVCollection_SaveEntryIfPresent(self, indexedEntries->health) ) /*0x65c368*/
      ++Src; /*0x65c371*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->encumbrance) ) /*0x65c37e*/
      ++Src; /*0x65c387*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->magickaMultiplier) ) /*0x65c394*/
      ++Src; /*0x65c39d*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->paralysis) ) /*0x65c3aa*/
      ++Src; /*0x65c3b3*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->responsibility) ) /*0x65c3c0*/
      ++Src; /*0x65c3c9*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->silence) ) /*0x65c3d6*/
      ++Src; /*0x65c3df*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->personality) ) /*0x65c3ec*/
      ++Src; /*0x65c3f5*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->waterWalking) ) /*0x65c402*/
      ++Src; /*0x65c40b*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->chameleon) ) /*0x65c418*/
      ++Src; /*0x65c421*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->invisibility) ) /*0x65c42e*/
      ++Src; /*0x65c437*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->nightEyeBonus) ) /*0x65c444*/
      ++Src; /*0x65c44d*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->aggression) ) /*0x65c45a*/
      ++Src; /*0x65c463*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->acrobatics) ) /*0x65c470*/
      ++Src; /*0x65c479*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->endurance) ) /*0x65c486*/
      ++Src; /*0x65c48f*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->luck) ) /*0x65c49c*/
      ++Src; /*0x65c4a5*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->strength) ) /*0x65c4b2*/
      ++Src; /*0x65c4bb*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->speed) ) /*0x65c4c8*/
      ++Src; /*0x65c4d1*/
    if ( AVCollection_SaveEntryIfPresent(self, self->indexedEntries->athletics) ) /*0x65c4de*/
      *(_WORD *)bufferCursor = Src + 1; /*0x65c4f0*/
    else
      *(_WORD *)bufferCursor = Src; /*0x65c500*/
  }
  else
  {
    *(_WORD *)bufferCursor = Src; /*0x65c510*/
  }
}

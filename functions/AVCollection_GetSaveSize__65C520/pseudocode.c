// Verified: returns UInt16 size 2 + N*(version<0x34 ? 8 : 5), counting nonnull list entries, dedicated +8/+0xC pointers, and 18 indexed pointers. Note writer 0x65C270 always writes 5-byte entries; do not infer it supports producing old-version format.
// Verified continuation 2026-10-04: constructor/insert/remove/clear/copy are now connected; Add 65C8F0 fragmentation repaired. Prior insertion-fragmentation boundary is superseded. Probable corresponding Fallout ModifierList serialization at 826B6B88/826B6CD0/826B7500; dynamic map and endian handling differ, no schema copied.
unsigned __int16 __thiscall AVCollection_GetSaveSize(AVCollection *self)
{
  __int16 v1; // dx
  __int16 v2; // ax
  AVCollection *i; // esi
  unsigned __int16 result; // ax
  AVCollectionIndex *indexedEntries; // ecx

  if ( g_TESSaveLoadGame->currentVersion < 0x34u ) /*0x65c52c*/
    v1 = 8; /*0x65c53c*/
  else
    v1 = 5; /*0x65c52e*/
  v2 = 0; /*0x65c541*/
  for ( i = self; i; i = (AVCollection *)i->list.next ) /*0x65c548*/
  {
    if ( i->list.entry ) /*0x65c550*/
      ++v2; /*0x65c555*/
  }
  result = v1 * v2 + 2; /*0x65c569*/
  if ( self->fatigue ) /*0x65c565*/
    result += v1; /*0x65c56f*/
  if ( self->magicka ) /*0x65c571*/
    result += v1; /*0x65c577*/
  indexedEntries = self->indexedEntries; /*0x65c579*/
  if ( indexedEntries ) /*0x65c57e*/
  {
    if ( indexedEntries->health ) /*0x65c584*/
      result += v1; /*0x65c589*/
    if ( indexedEntries->encumbrance ) /*0x65c58b*/
      result += v1; /*0x65c591*/
    if ( indexedEntries->magickaMultiplier ) /*0x65c593*/
      result += v1; /*0x65c599*/
    if ( indexedEntries->paralysis ) /*0x65c59b*/
      result += v1; /*0x65c5a1*/
    if ( indexedEntries->responsibility ) /*0x65c5a3*/
      result += v1; /*0x65c5a9*/
    if ( indexedEntries->silence ) /*0x65c5ab*/
      result += v1; /*0x65c5b1*/
    if ( indexedEntries->personality ) /*0x65c5b3*/
      result += v1; /*0x65c5b9*/
    if ( indexedEntries->waterWalking ) /*0x65c5bb*/
      result += v1; /*0x65c5c1*/
    if ( indexedEntries->chameleon ) /*0x65c5c3*/
      result += v1; /*0x65c5c9*/
    if ( indexedEntries->invisibility ) /*0x65c5cb*/
      result += v1; /*0x65c5d1*/
    if ( indexedEntries->nightEyeBonus ) /*0x65c5d3*/
      result += v1; /*0x65c5d9*/
    if ( indexedEntries->aggression ) /*0x65c5db*/
      result += v1; /*0x65c5e1*/
    if ( indexedEntries->acrobatics ) /*0x65c5e3*/
      result += v1; /*0x65c5e9*/
    if ( indexedEntries->endurance ) /*0x65c5eb*/
      result += v1; /*0x65c5f1*/
    if ( indexedEntries->luck ) /*0x65c5f3*/
      result += v1; /*0x65c5f9*/
    if ( indexedEntries->strength ) /*0x65c5fb*/
      result += v1; /*0x65c601*/
    if ( indexedEntries->speed ) /*0x65c603*/
      result += v1; /*0x65c609*/
    if ( indexedEntries->athletics ) /*0x65c60b*/
      result += v1; /*0x65c611*/
  }
  return result; /*0x65c53b*/
}

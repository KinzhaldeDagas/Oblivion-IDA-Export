// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified: removes/frees previous indexed entry before replacement; stores only nonnull entries whose value compares unequal to zero, allocating a 0x48-byte array lazily. No free of rejected incoming zero-valued entry is visible here, and allocation failure is not checked before the final store. These are observed paths, not proposed patches. Fallout AddFastModifier 0x826B70C0 adds bZeroValuesAllowed and a mapped dynamic collection; do not import its layout.
// Verified fast-slot ID order: [08,0B,28,30,24,31,06,38,2E,2F,29,21,1A,05,07,00,04,0D] (hex). Matching lookup/insert/remove switches and Oblivion naming tables establish named AVCollectionIndex fields. IDs09/0A are permanent magicka/fatigue outside this array.
void __thiscall AVCollection_AddToArray(AVCollection *self, int actorValue, AVCollectionEntry *entry)
{
  AVCollectionIndex *v4; // eax
  AVCollectionIndex *inited; // eax

  if ( entry || self->indexedEntries ) /*0x65c71c*/
  {
    AVCollection_RemoveArrayNode(self, actorValue); /*0x65c72b*/
    if ( entry ) /*0x65c732*/
    {
      if ( 0.0 != entry->value ) /*0x65c742*/
      {
        if ( !self->indexedEntries ) /*0x65c748*/
        {
          v4 = (AVCollectionIndex *)FormHeapAlloc(0x48u); /*0x65c750*/
          if ( v4 ) /*0x65c75a*/
            inited = AVCollection_InitArray(v4); /*0x65c75e*/
          else
            inited = 0; /*0x65c765*/
          self->indexedEntries = inited; /*0x65c767*/
        }
        switch ( (char)actorValue ) /*0x65c77d*/
        {
          case 0: /*0x65c77d*/
            self->indexedEntries->strength = entry; /*0x65c83b*/
            break; /*0x65c840*/
          case 4: /*0x65c77d*/
            self->indexedEntries->speed = entry; /*0x65c847*/
            break; /*0x65c84c*/
          case 5: /*0x65c77d*/
            self->indexedEntries->endurance = entry; /*0x65c823*/
            break; /*0x65c828*/
          case 6: /*0x65c77d*/
            self->indexedEntries->personality = entry; /*0x65c7cf*/
            break; /*0x65c7d4*/
          case 7: /*0x65c77d*/
            self->indexedEntries->luck = entry; /*0x65c82f*/
            break; /*0x65c834*/
          case 8: /*0x65c77d*/
            self->indexedEntries->health = entry; /*0x65c788*/
            break; /*0x65c78c*/
          case 0xB: /*0x65c77d*/
            self->indexedEntries->encumbrance = entry; /*0x65c793*/
            break; /*0x65c798*/
          case 0xD: /*0x65c77d*/
            self->indexedEntries->athletics = entry; /*0x65c852*/
            break; /*0x65c852*/
          case 0x1A: /*0x65c77d*/
            self->indexedEntries->acrobatics = entry; /*0x65c817*/
            break; /*0x65c81c*/
          case 0x21: /*0x65c77d*/
            self->indexedEntries->aggression = entry; /*0x65c80b*/
            break; /*0x65c810*/
          case 0x24: /*0x65c77d*/
            self->indexedEntries->responsibility = entry; /*0x65c7b7*/
            break; /*0x65c7bc*/
          case 0x28: /*0x65c77d*/
            self->indexedEntries->magickaMultiplier = entry; /*0x65c79f*/
            break; /*0x65c7a4*/
          case 0x29: /*0x65c77d*/
            self->indexedEntries->nightEyeBonus = entry; /*0x65c7ff*/
            break; /*0x65c804*/
          case 0x2E: /*0x65c77d*/
            self->indexedEntries->chameleon = entry; /*0x65c7e7*/
            break; /*0x65c7ec*/
          case 0x2F: /*0x65c77d*/
            self->indexedEntries->invisibility = entry; /*0x65c7f3*/
            break; /*0x65c7f8*/
          case 0x30: /*0x65c77d*/
            self->indexedEntries->paralysis = entry; /*0x65c7ab*/
            break; /*0x65c7b0*/
          case 0x31: /*0x65c77d*/
            self->indexedEntries->silence = entry; /*0x65c7c3*/
            break; /*0x65c7c8*/
          case 0x38: /*0x65c77d*/
            self->indexedEntries->waterWalking = entry; /*0x65c7db*/
            break; /*0x65c7e0*/
          default:
            return;
        }
      }
    }
  }
}

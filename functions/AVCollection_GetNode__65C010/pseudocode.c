// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified fast-slot ID order: [08,0B,28,30,24,31,06,38,2E,2F,29,21,1A,05,07,00,04,0D] (hex). Matching lookup/insert/remove switches and Oblivion naming tables establish named AVCollectionIndex fields. IDs09/0A are permanent magicka/fatigue outside this array.
AVCollectionEntry *__thiscall AVCollection_GetNode(AVCollection *self, int actorValue)
{
  AVCollectionEntry *entry; // esi
  AVCollectionEntry *result; // eax
  AVCollectionIndex *v4; // ecx
  AVCollectionIndex *v5; // ecx
  AVCollectionIndex *v6; // ecx
  AVCollectionIndex *v7; // ecx
  AVCollectionIndex *v8; // ecx
  AVCollectionIndex *v9; // ecx
  AVCollectionIndex *v10; // ecx
  AVCollectionIndex *v11; // ecx
  AVCollectionIndex *v12; // ecx
  AVCollectionIndex *v13; // ecx
  AVCollectionIndex *v14; // ecx
  AVCollectionIndex *v15; // ecx
  AVCollectionIndex *v16; // ecx
  AVCollectionIndex *v17; // ecx
  AVCollectionIndex *v18; // ecx
  AVCollectionIndex *indexedEntries; // ecx
  AVCollectionIndex *v20; // ecx
  AVCollectionIndex *v21; // ecx
  AVCollection *i; // edx

  entry = 0; /*0x65c018*/
  switch ( (char)actorValue ) /*0x65c02a*/
  {
    case 0: /*0x65c02a*/
      indexedEntries = self->indexedEntries; /*0x65c12a*/
      if ( !indexedEntries ) /*0x65c12f*/
        goto AVCollection_GetNode___Return_0; /*0x65c12f*/
      result = indexedEntries->strength; /*0x65c135*/
      break; /*0x65c139*/
    case 4: /*0x65c02a*/
      v20 = self->indexedEntries; /*0x65c13c*/
      if ( !v20 ) /*0x65c141*/
        goto AVCollection_GetNode___Return_0; /*0x65c141*/
      result = v20->speed; /*0x65c147*/
      break; /*0x65c14b*/
    case 5: /*0x65c02a*/
      v17 = self->indexedEntries; /*0x65c106*/
      if ( !v17 ) /*0x65c10b*/
        goto AVCollection_GetNode___Return_0; /*0x65c10b*/
      result = v17->endurance; /*0x65c111*/
      break; /*0x65c115*/
    case 6: /*0x65c02a*/
      v10 = self->indexedEntries; /*0x65c098*/
      if ( !v10 ) /*0x65c09d*/
        goto AVCollection_GetNode___Return_0; /*0x65c09d*/
      result = v10->personality; /*0x65c09f*/
      break; /*0x65c0a3*/
    case 7: /*0x65c02a*/
      v18 = self->indexedEntries; /*0x65c118*/
      if ( !v18 ) /*0x65c11d*/
        goto AVCollection_GetNode___Return_0; /*0x65c11d*/
      result = v18->luck; /*0x65c123*/
      break; /*0x65c127*/
    case 8: /*0x65c02a*/
      v4 = self->indexedEntries; /*0x65c03f*/
      if ( !v4 ) /*0x65c044*/
        goto AVCollection_GetNode___Return_0; /*0x65c044*/
      result = v4->health; /*0x65c046*/
      break; /*0x65c049*/
    case 9: /*0x65c02a*/
      result = self->magicka; /*0x65c031*/
      break; /*0x65c035*/
    case 0xA: /*0x65c02a*/
      result = self->fatigue; /*0x65c038*/
      break; /*0x65c03c*/
    case 0xB: /*0x65c02a*/
      v5 = self->indexedEntries; /*0x65c052*/
      if ( !v5 ) /*0x65c057*/
        goto AVCollection_GetNode___Return_0; /*0x65c057*/
      result = v5->encumbrance; /*0x65c059*/
      break; /*0x65c05d*/
    case 0xD: /*0x65c02a*/
      v21 = self->indexedEntries; /*0x65c14e*/
      if ( !v21 ) /*0x65c153*/
        goto AVCollection_GetNode___Return_0; /*0x65c153*/
      result = v21->athletics; /*0x65c159*/
      break; /*0x65c15d*/
    case 0x1A: /*0x65c02a*/
      v16 = self->indexedEntries; /*0x65c0f4*/
      if ( !v16 ) /*0x65c0f9*/
        goto AVCollection_GetNode___Return_0; /*0x65c0f9*/
      result = v16->acrobatics; /*0x65c0ff*/
      break; /*0x65c103*/
    case 0x21: /*0x65c02a*/
      v15 = self->indexedEntries; /*0x65c0e2*/
      if ( !v15 ) /*0x65c0e7*/
        goto AVCollection_GetNode___Return_0; /*0x65c0e7*/
      result = v15->aggression; /*0x65c0ed*/
      break; /*0x65c0f1*/
    case 0x24: /*0x65c02a*/
      v8 = self->indexedEntries; /*0x65c07c*/
      if ( !v8 ) /*0x65c081*/
        goto AVCollection_GetNode___Return_0; /*0x65c081*/
      result = v8->responsibility; /*0x65c083*/
      break; /*0x65c087*/
    case 0x28: /*0x65c02a*/
      v6 = self->indexedEntries; /*0x65c060*/
      if ( !v6 ) /*0x65c065*/
        goto AVCollection_GetNode___Return_0; /*0x65c065*/
      result = v6->magickaMultiplier; /*0x65c067*/
      break; /*0x65c06b*/
    case 0x29: /*0x65c02a*/
      v14 = self->indexedEntries; /*0x65c0d0*/
      if ( !v14 ) /*0x65c0d5*/
        goto AVCollection_GetNode___Return_0; /*0x65c0d5*/
      result = v14->nightEyeBonus; /*0x65c0db*/
      break; /*0x65c0df*/
    case 0x2E: /*0x65c02a*/
      v12 = self->indexedEntries; /*0x65c0b4*/
      if ( !v12 ) /*0x65c0b9*/
        goto AVCollection_GetNode___Return_0; /*0x65c0b9*/
      result = v12->chameleon; /*0x65c0bb*/
      break; /*0x65c0bf*/
    case 0x2F: /*0x65c02a*/
      v13 = self->indexedEntries; /*0x65c0c2*/
      if ( !v13 ) /*0x65c0c7*/
        goto AVCollection_GetNode___Return_0; /*0x65c0c7*/
      result = v13->invisibility; /*0x65c0c9*/
      break; /*0x65c0cd*/
    case 0x30: /*0x65c02a*/
      v7 = self->indexedEntries; /*0x65c06e*/
      if ( !v7 ) /*0x65c073*/
        goto AVCollection_GetNode___Return_0; /*0x65c073*/
      result = v7->paralysis; /*0x65c075*/
      break; /*0x65c079*/
    case 0x31: /*0x65c02a*/
      v9 = self->indexedEntries; /*0x65c08a*/
      if ( !v9 ) /*0x65c08f*/
        goto AVCollection_GetNode___Return_0; /*0x65c08f*/
      result = v9->silence; /*0x65c091*/
      break; /*0x65c095*/
    case 0x38: /*0x65c02a*/
      v11 = self->indexedEntries; /*0x65c0a6*/
      if ( v11 ) /*0x65c0ab*/
        result = v11->waterWalking; /*0x65c0ad*/
      else
AVCollection_GetNode___Return_0:
        result = 0; /*0x65c04c*/
      break; /*0x65c0b1*/
    default:
      for ( i = self; i; i = (AVCollection *)i->list.next ) /*0x65c164*/
      {
        if ( !i->list.entry ) /*0x65c166*/
          break; /*0x65c16a*/
        if ( entry ) /*0x65c16e*/
          break; /*0x65c16e*/
        if ( i->list.entry->actorValue == (_BYTE)actorValue ) /*0x65c172*/
          entry = i->list.entry; /*0x65c174*/
      }
      result = entry; /*0x65c17d*/
      break; /*0x65c17d*/
  }
  return result; /*0x65c034*/
}

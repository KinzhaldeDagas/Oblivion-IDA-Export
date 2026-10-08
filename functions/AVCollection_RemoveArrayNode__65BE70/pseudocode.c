// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified fast-slot ID order: [08,0B,28,30,24,31,06,38,2E,2F,29,21,1A,05,07,00,04,0D] (hex). Matching lookup/insert/remove switches and Oblivion naming tables establish named AVCollectionIndex fields. IDs09/0A are permanent magicka/fatigue outside this array.
// Verified: frees/nulls selected slot, scans all 18 for emptiness, destroys/frees the array and nulls owner+0x10 only when every slot is empty. Unsupported IDs do nothing.
void __thiscall AVCollection_RemoveArrayNode(AVCollection *self, int actorValue)
{
  AVCollectionIndex *indexedEntries; // eax
  AVCollectionIndex *v4; // esi

  indexedEntries = self->indexedEntries; /*0x65be73*/
  if ( indexedEntries ) /*0x65be78*/
  {
    switch ( (char)actorValue ) /*0x65be93*/
    {
      case 0: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x3C); /*0x65bee0*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bee3*/
      case 4: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x40); /*0x65bee5*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bee8*/
      case 5: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x34); /*0x65bed6*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bed9*/
      case 6: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x18); /*0x65beb3*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65beb6*/
      case 7: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x38); /*0x65bedb*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bede*/
      case 8: /*0x65be93*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty;
      case 0xB: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 4); /*0x65be9a*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65be9d*/
      case 0xD: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x44); /*0x65beea*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65beea*/
      case 0x1A: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x30); /*0x65bed1*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bed4*/
      case 0x21: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x2C); /*0x65becc*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65becf*/
      case 0x24: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x10); /*0x65bea9*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65beac*/
      case 0x28: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 8); /*0x65be9f*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bea2*/
      case 0x29: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x28); /*0x65bec7*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65beca*/
      case 0x2E: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x20); /*0x65bebd*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bec0*/
      case 0x2F: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x24); /*0x65bec2*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bec5*/
      case 0x30: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0xC); /*0x65bea4*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65bea7*/
      case 0x31: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x14); /*0x65beae*/
        goto AVCollection_RemoveArrayNode___CheckIfArrayEmpty; /*0x65beb1*/
      case 0x38: /*0x65be93*/
        indexedEntries = (AVCollectionIndex *)((char *)indexedEntries + 0x1C); /*0x65beb8*/
AVCollection_RemoveArrayNode___CheckIfArrayEmpty:
        AVCollection_DeallocArrayNode(indexedEntries->health); /*0x65beed*/
        v4 = self->indexedEntries; /*0x65bef6*/
        if ( !v4->health[0] /*0x65bf62*/
          && !v4->health[1]
          && !v4->health[2]
          && !v4->health[3]
          && !v4->health[4]
          && !v4->health[5]
          && !v4->health[6]
          && !v4->health[7]
          && !v4->health[8]
          && !v4->health[9]
          && !v4->health[0xA]
          && !v4->health[0xB]
          && !v4->health[0xC]
          && !v4->health[0xD]
          && !v4->health[0xE]
          && !v4->health[0xF]
          && !v4->health[0x10]
          && !v4->health[0x11] )
        {
          if ( v4 ) /*0x65bf6a*/
          {
            AVCollection_DeleteArray(self->indexedEntries); /*0x65bf6e*/
            FormHeapFree((unsigned int)v4); /*0x65bf74*/
          }
          self->indexedEntries = 0; /*0x65bf7c*/
        }
        break; /*0x65bf7c*/
      default:
        return;
    }
  }
}

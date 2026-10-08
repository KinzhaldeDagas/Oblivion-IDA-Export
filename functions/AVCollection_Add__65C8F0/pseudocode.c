// Verified local dispatch: actor-value index 9 copies value into collection +8 node and frees supplied node; index 10 does likewise for +0xC. Other specified indices go to indexed storage, default to list. Prototype has ECX collection and one node pointer. Unknown: preexisting internal-function fragmentation here remains to be resolved before treating whole decompilation as reliable.
// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified: NULL ignored; IDs9/10 copy incoming float to permanent node and free incoming entry. Eighteen switch-selected IDs route to AddToArray; others tail-forward to list push-front. Ownership differs by route. Probable functional homolog Fallout AddModifier 0x826B7188; its fast route is metadata-selected and lacks these dedicated-node branches.
// Verified ABI detail: indexed branch reuses the original entry argument stack slot by replacing its low byte with the key before forwarding; AddToArray dispatch reads that low byte. Decompiled pointer-to-int reuse is a stack-slot artifact, not a full-pointer actor-value index.
void __thiscall AVCollection_Add(AVCollection *self, AVCollectionEntry *entry)
{
  AVCollectionEntry *v2; // eax

  v2 = entry; /*0x65c8f0*/
  if ( entry ) /*0x65c8f6*/
  {
    LOBYTE(entry) = entry->actorValue; /*0x65c8fa*/
    switch ( (char)entry ) /*0x65c90d*/
    {
      case 0: /*0x65c90d*/
      case 4: /*0x65c90d*/
      case 5: /*0x65c90d*/
      case 6: /*0x65c90d*/
      case 7: /*0x65c90d*/
      case 8: /*0x65c90d*/
      case 0xB: /*0x65c90d*/
      case 0xD: /*0x65c90d*/
      case 0x1A: /*0x65c90d*/
      case 0x21: /*0x65c90d*/
      case 0x24: /*0x65c90d*/
      case 0x28: /*0x65c90d*/
      case 0x29: /*0x65c90d*/
      case 0x2E: /*0x65c90d*/
      case 0x2F: /*0x65c90d*/
      case 0x30: /*0x65c90d*/
      case 0x31: /*0x65c90d*/
      case 0x38: /*0x65c90d*/
        AVCollection_AddToArray(self, (int)entry, v2); /*0x65c944*/
        break; /*0x65c949*/
      case 9: /*0x65c90d*/
        self->magicka->value = v2->value; /*0x65c91b*/
        FormHeapFree((unsigned int)v2); /*0x65c91e*/
        break; /*0x65c91e*/
      case 0xA: /*0x65c90d*/
        self->fatigue->value = v2->value; /*0x65c930*/
        FormHeapFree((unsigned int)v2); /*0x65c933*/
        break; /*0x65c93b*/
      default:
        BSSimpleList_PushFront(self, (int)v2); /*0x65c950*/
        break; /*0x65c950*/
    }
  }
}

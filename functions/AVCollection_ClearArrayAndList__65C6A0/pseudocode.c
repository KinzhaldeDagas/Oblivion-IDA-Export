// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified: repeatedly frees head payload, moves next node into embedded head and frees old next node; destroys/frees indexed array and nulls +0x10. Leaves permanent +8/+0xC nodes untouched.
void __thiscall AVCollection_ClearArrayAndList(AVCollection *self)
{
  AVCollectionEntry *i; // eax
  AVCollectionListNode *next; // eax
  AVCollectionIndex *indexedEntries; // edi

  for ( i = self->list.entry; self->list.entry; i = self->list.entry ) /*0x65c6a3*/
  {
    FormHeapFree((unsigned int)i); /*0x65c6b1*/
    next = self->list.next; /*0x65c6b6*/
    if ( next ) /*0x65c6be*/
    {
      self->list.next = next->next; /*0x65c6c3*/
      self->list.entry = next->entry; /*0x65c6c9*/
      FormHeapFree((unsigned int)next); /*0x65c6cb*/
    }
    else
    {
      self->list.entry = 0; /*0x65c6d5*/
    }
  }
  indexedEntries = self->indexedEntries; /*0x65c6e1*/
  if ( indexedEntries ) /*0x65c6e6*/
  {
    AVCollection_DeleteArray(self->indexedEntries); /*0x65c6ea*/
    FormHeapFree((unsigned int)indexedEntries); /*0x65c6f0*/
    self->indexedEntries = 0; /*0x65c6f8*/
  }
}

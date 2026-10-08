// Verified: manager+30 pointer-deduplicated enqueue, no immediate destruction. Probable Fallout AddFormToDeferredDeletionsList82600658 counterpart.
void __thiscall TESSaveLoadGame_QueueDeferredDeletion(TESSaveLoadGame_SerializationView *self, TESForm *form)
{
  bool v2; // zf
  SaveLoadDeferredFormNode *p_deferredDeleteList; // ecx
  SaveLoadDeferredFormNode *v4; // eax

  v2 = &self->deferredDeleteList == 0; /*0x453914*/
  p_deferredDeleteList = &self->deferredDeleteList; /*0x453914*/
  v4 = p_deferredDeleteList; /*0x453917*/
  if ( v2 ) /*0x453919*/
  {
LABEL_4:
    BSSimpleList_PushFront(p_deferredDeleteList, (int)form); /*0x45392b*/
  }
  else
  {
    while ( v4->form != form ) /*0x453922*/
    {
      v4 = v4->next; /*0x453924*/
      if ( !v4 ) /*0x453929*/
        goto LABEL_4; /*0x453929*/
    }
  }
}

// Verified 2026-10-04: DeleteForm identity anchored by literal diagnostic and Oblivion behavior. Removes changes entry with force=true. Flag4000 forms or RTTI TESObjectCELL receive a fresh FormID; ordinary forms get FormID0, global-list removal, empty editor ID and deduplicated queue insertion at manager+30. NO immediate destructor/free in this ordinary branch. Probable Fallout homolog82600530. Unknown complete queue-drain timing.
// Verified continuation: ordinary deferred forms are ultimately destroyed by manager459870, which unlinks before destructor and orders TESBoundObject/SpellItem last. Queue insertion453910, removal453940 and load-completion call4668BA close ownership chain; prior queue-drain Unknown superseded for these anchors.
void __thiscall TESSaveLoadGame_DeleteForm(TESSaveLoadGame_SerializationView *self, TESForm *form)
{
  UInt32 mainThreadID; // esi
  unsigned int v4; // eax
  void *v5; // eax
  SaveLoadDeferredFormNode *p_deferredDeleteList; // eax
  int FormID; // eax

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45c7a6*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45c7b4*/
    LOBYTE(v4) = self->flags; /*0x45c7b6*/
  else
    v4 = self->flags >> 0x12; /*0x45c7be*/
  if ( (v4 & 1) == 0 ) /*0x45c7c5*/
    PrintError("DeleteForm() was called, but the game is not being loaded."); /*0x45c7cc*/
  SaveLoadChangesMap_RemoveChanges(self->currentChangesMap, form->member.refID, 1); /*0x45c7e0*/
  v5 = OblivionDynamicCast( /*0x45c7f4*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCELL `RTTI Type Descriptor',
         0);
  if ( (form->member.flags & 0x4000) != 0 || v5 ) /*0x45c809*/
  {
    FormID = TESDataHandler_ReserveNextFormID((int *)g_TESDataHandler); /*0x45c854*/
    TESForm_SetFormID(form, FormID, 1); /*0x45c85c*/
  }
  else
  {
    TESForm_SetFormID(form, 0, 1); /*0x45c810*/
    TESForm_RemoveFromGlobalLists(form); /*0x45c817*/
    form->vtbl->SetEditorID(form, EmptyString); /*0x45c82b*/
    p_deferredDeleteList = &self->deferredDeleteList; /*0x45c830*/
    if ( self == (TESSaveLoadGame_SerializationView *)0xFFFFFFD0 ) /*0x45c834*/
    {
LABEL_11:
      BSSimpleList_PushFront(&self->deferredDeleteList.form, (int)form); /*0x45c841*/
    }
    else
    {
      while ( p_deferredDeleteList->form != form ) /*0x45c838*/
      {
        p_deferredDeleteList = p_deferredDeleteList->next; /*0x45c83a*/
        if ( !p_deferredDeleteList ) /*0x45c83f*/
          goto LABEL_11; /*0x45c83f*/
      }
    }
  }
}

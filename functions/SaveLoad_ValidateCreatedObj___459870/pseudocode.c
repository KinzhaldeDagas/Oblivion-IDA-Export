// Verified two-pass deferred deletion drain at manager+30. Pass1 RTTI-tests TESBoundObject and SpellItem; unlinks/deletes all OTHER nonnull forms via scalar deleting destructor slot10 with flag1. Pass2 drains and destructs remaining bound objects/spells. Nodes are removed before payload destruction. Calls40F430(WinMain),4644B1(cleanup),4668BA(load completion),500CC6 confirm scheduling anchors; exact frequency/context beyond these sites not inferred. Previous ValidateCreatedObj label incorrect.
void __thiscall TESSaveLoadGame_ProcessDeferredDeletions(TESSaveLoadGame_SerializationView *self)
{
  BSSimpleList_VoidPtr *p_deferredDeleteList; // ebp
  SaveLoadDeferredFormNode *v2; // edi
  TESForm *form; // esi
  void *v4; // ebx
  void *v5; // eax
  SaveLoadDeferredFormNode *next; // eax
  BSSimpleList_VoidPtr::NodeVoid *v7; // eax
  void *data; // esi

  p_deferredDeleteList = (BSSimpleList_VoidPtr *)&self->deferredDeleteList; /*0x459872*/
  v2 = &self->deferredDeleteList; /*0x459876*/
  if ( self != (TESSaveLoadGame_SerializationView *)0xFFFFFFD0 ) /*0x45987a*/
  {
    do /*0x4598fb*/
    {
      form = v2->form; /*0x459881*/
      if ( !v2->form /*0x4598ba*/
        || (v4 = OblivionDynamicCast(
                   form,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                   0),
            v5 = OblivionDynamicCast(
                   form,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &SpellItem `RTTI Type Descriptor',
                   0),
            v4)
        || v5 )
      {
        v2 = v2->next; /*0x4598f6*/
      }
      else
      {
        next = v2->next; /*0x4598bc*/
        if ( next ) /*0x4598c1*/
        {
          v2->next = next->next; /*0x4598c6*/
          v2->form = next->form; /*0x4598cc*/
          FormHeapFree((unsigned int)next); /*0x4598ce*/
        }
        else
        {
          v2->form = 0; /*0x4598e3*/
        }
        form->vtbl->Destroy(form, 1); /*0x4598df*/
      }
    }
    while ( v2 ); /*0x4598fb*/
  }
  if ( p_deferredDeleteList ) /*0x459900*/
  {
    while ( !BSSimpleList_IsEmpty(p_deferredDeleteList) ) /*0x45990b*/
    {
      v7 = p_deferredDeleteList->firstNode.next; /*0x45990d*/
      data = p_deferredDeleteList->firstNode.data; /*0x459912*/
      if ( v7 ) /*0x459915*/
      {
        p_deferredDeleteList->firstNode.next = v7->next; /*0x45991a*/
        p_deferredDeleteList->firstNode.data = v7->data; /*0x459920*/
        FormHeapFree((unsigned int)v7); /*0x459923*/
      }
      else
      {
        p_deferredDeleteList->firstNode.data = 0; /*0x45992d*/
      }
      if ( data ) /*0x459936*/
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)data + 0x10))(data, 1); /*0x459941*/
    }
  }
}

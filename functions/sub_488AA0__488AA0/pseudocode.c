// Set per-instance charge for a specific EntryData stack. Creates ExtraDataList/ExtraCharge as needed, or removes redundant charge data when newCharge exceeds the base maximum. containerChanges identifies the owning inventory; targetStack selects the equipped instance.
void __thiscall EquippedEntryData_SetCharge(
        EntryData *this,
        float newCharge,
        ExtraContainerChanges_Data *containerChanges,
        ExtraDataList *targetStack)
{
  unsigned __int16 *v5; // eax
  tListVoid *extendData; // eax
  _DWORD *v7; // eax
  ExtraDataList *v8; // edi
  tListVoid *v9; // eax
  tListVoid *v10; // esi
  ExtraDataList *v11; // ecx
  _DWORD *v12; // eax
  ExtraDataList *v13; // esi
  ExtraDataList *data; // esi
  int **EntryForForm; // eax
  float v16; // [esp+14h] [ebp-10h]

  v5 = (unsigned __int16 *)OblivionDynamicCast( /*0x488ad8*/
                             this->type,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( v5 ) /*0x488ae2*/
  {
    v16 = (float)v5[4]; /*0x488af7*/
    extendData = this->extendData; /*0x488b0a*/
    if ( v16 < (double)newCharge ) /*0x488b0d*/
    {
      for ( ; extendData; extendData = (tListVoid *)extendData->node.next ) /*0x488c31*/
      {
        data = (ExtraDataList *)extendData->node.data; /*0x488c37*/
        if ( !extendData->node.data ) /*0x488c37*/
          break; /*0x488c37*/
        if ( data == targetStack ) /*0x488c3f*/
        {
          sub_41F640(extendData->node.data); /*0x488c5f*/
          if ( !data->members.m_data ) /*0x488c64*/
          {
            EntryForForm = (int **)ContainerExtraData_GetEntryForForm(containerChanges, this->type, 1, 0); /*0x488c76*/
            BSSimpleList_Remove(*EntryForForm, (int)data); /*0x488c7e*/
            (*(void (__thiscall **)(ExtraDataList *, int))data->vtbl)(data, 1); /*0x488c8b*/
          }
          return; /*0x488c8b*/
        }
      }
    }
    else if ( extendData ) /*0x488b15*/
    {
      do /*0x488baf*/
      {
        v11 = (ExtraDataList *)extendData->node.data; /*0x488ba0*/
        if ( !extendData->node.data ) /*0x488ba0*/
          break; /*0x488ba4*/
        if ( v11 == targetStack ) /*0x488ba8*/
        {
          ExtraDataList_SetCharge(v11, (BSExtraDataVtbl *)LODWORD(newCharge)); /*0x488bdc*/
          return; /*0x488bf3*/
        }
        extendData = (tListVoid *)extendData->node.next; /*0x488baa*/
      }
      while ( extendData ); /*0x488baf*/
      v12 = (_DWORD *)FormHeapAlloc(0x14u); /*0x488bb5*/
      if ( v12 ) /*0x488bcb*/
        v13 = (ExtraDataList *)ExtraDataList_constr(v12); /*0x488bd4*/
      else
        v13 = 0; /*0x488bf6*/
      ExtraDataList_SetCharge(v13, (BSExtraDataVtbl *)LODWORD(newCharge)); /*0x488c0a*/
      BSSimpleList_PushFront(&this->extendData->node.data, (int)v13); /*0x488c13*/
    }
    else
    {
      v7 = (_DWORD *)FormHeapAlloc(0x14u); /*0x488b1f*/
      if ( v7 ) /*0x488b35*/
        v8 = (ExtraDataList *)ExtraDataList_constr(v7); /*0x488b3e*/
      else
        v8 = 0; /*0x488b42*/
      v9 = (tListVoid *)FormHeapAlloc(8u); /*0x488b4e*/
      if ( v9 ) /*0x488b58*/
      {
        v9->node.data = 0; /*0x488b5a*/
        v9->node.next = 0; /*0x488b60*/
        v10 = v9; /*0x488b67*/
      }
      else
      {
        v10 = 0; /*0x488b6b*/
      }
      ExtraDataList_SetCharge(v8, (BSExtraDataVtbl *)LODWORD(newCharge)); /*0x488b77*/
      BSSimpleList_PushFront(v10, (int)v8); /*0x488b7f*/
      this->extendData = v10; /*0x488b84*/
    }
  }
}

void __usercall sub_5D1E50(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  Tile **v4; // ebx
  double Float; // st7
  TESForm *v6; // eax
  EntryData *InventoryEntryOfItem; // eax
  ExtraDataList ***v8; // esi
  int HealthForForm; // eax
  signed int v10; // edi
  float *ContainerChanges; // eax
  ExtraContainerChanges_Data *v12; // edi
  signed __int16 ExtraCount; // ax
  int v14; // edx
  ExtraDataList *v15; // eax
  float v16; // [esp+0h] [ebp-24h]
  float a2; // [esp+Ch] [ebp-18h]
  int v18; // [esp+20h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40B); /*0x5d1e58*/
  if ( OpenMenuTile ) /*0x5d1e62*/
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d1e66*/
  else
    ParentMenu = 0; /*0x5d1e6d*/
  v4 = (Tile **)OblivionDynamicCast( /*0x5d1e84*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &RepairMenu `RTTI Type Descriptor',
                  0);
  if ( v4 ) /*0x5d1e8b*/
  {
    if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x5d1e98*/
    {
      Float = Tile_GetFloat((_DWORD *)dword_B3B704[3], 0xFB9); /*0x5d1eaa*/
      v6 = (TESForm *)Double_To_SInt32(Float); /*0x5d1eaf*/
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v6, 0); /*0x5d1ebd*/
      v8 = (ExtraDataList ***)InventoryEntryOfItem; /*0x5d1ec2*/
      if ( InventoryEntryOfItem ) /*0x5d1ec6*/
      {
        HealthForForm = TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type); /*0x5d1ed1*/
        v10 = dword_B3B704[4]; /*0x5d1edc*/
        v18 = HealthForForm; /*0x5d1ee8*/
        ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d1eec*/
        sub_491700(ContainerChanges, a1, st6_0, Float, (TESObjectREFR *)reference, v10, 0); /*0x5d1efd*/
        a2 = (float)sub_5E4420((Actor *)reference); /*0x5d1f19*/
        Tile_SetFloat(v4[0xD], 0xFAEu, a2); /*0x5d1f21*/
        v12 = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d1f38*/
        ExtraCount = ExtraDataList_GetExtraCount(**v8); /*0x5d1f3a*/
        if ( ExtraCount <= 1 ) /*0x5d1f45*/
        {
          v15 = 0; /*0x5d1f58*/
          if ( *v8 ) /*0x5d1f56*/
            v15 = **v8; /*0x5d1f5e*/
          v16 = (float)v18; /*0x5d1f6b*/
          sub_488830((void **)v8, (BSExtraDataVtbl *)LODWORD(v16), v12, v15, 1); /*0x5d1f6e*/
        }
        else
        {
          ExtraDataList_SetExtraCount(**v8, ExtraCount - 1); /*0x5d1f4f*/
        }
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)v8, v14); /*0x5d1f75*/
        FormHeapFree((unsigned int)v8); /*0x5d1f7b*/
        Float = 1.0; /*0x5d1f80*/
        Tile_SetFloat(v4[0xF], 0xFA1u, 1.0); /*0x5d1f8d*/
      }
      reference->vtbl->super.Unk_B0((Actor *)reference); /*0x5d1fa1*/
      sub_5D0B80(); /*0x5d1fa5*/
      sub_5D1080((int)v4, Float, a1, st6_0, 1); /*0x5d1fae*/
    }
    *((_BYTE *)v4 + 0x64) = 0; /*0x5d1fb4*/
  }
}

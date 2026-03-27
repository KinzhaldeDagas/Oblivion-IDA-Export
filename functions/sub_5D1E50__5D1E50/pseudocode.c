void __usercall sub_5D1E50(double a1@<st2>, double st6_0@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  Tile **v5; // ebx
  double Float; // st7
  TESForm *v7; // eax
  EntryData *InventoryEntryOfItem; // eax
  ExtraDataList ***v9; // esi
  int HealthForForm; // eax
  signed int v11; // edi
  float *ContainerChanges; // eax
  ExtraContainerChanges_Data *v13; // edi
  signed __int16 ExtraCount; // ax
  int v15; // edx
  ExtraDataList *v16; // eax
  float v17; // [esp+0h] [ebp-24h]
  float a2; // [esp+Ch] [ebp-18h]
  int v19; // [esp+20h] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40B);
  if ( OpenMenuTile )
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  else
    ParentMenu = 0;
  v5 = (Tile **)OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &RepairMenu `RTTI Type Descriptor',
                  0);
  if ( v5 )
  {
    if ( sub_578D70() == 1 )
    {
      Float = Tile_GetFloat((_DWORD *)dword_B3B710, 0xFB9);
      v7 = (TESForm *)Double_To_SInt32(Float);
      InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v7, 0);
      v9 = (ExtraDataList ***)InventoryEntryOfItem;
      if ( InventoryEntryOfItem )
      {
        HealthForForm = TESHealthForm_GetHealthForForm(InventoryEntryOfItem->type);
        v11 = dword_B3B714;
        v19 = HealthForForm;
        ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        sub_491700(ContainerChanges, a1, st6_0, Float, (TESObjectREFR *)TESDataHandler_g_PlayerRef, v11, 0);
        a2 = (float)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
        Tile_SetFloat(v5[0xD], (_DWORD *)0xFAE, a2);
        v13 = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        ExtraCount = ExtraDataList_GetExtraCount(**v9);
        if ( ExtraCount <= 1 )
        {
          v16 = 0;
          if ( *v9 )
            v16 = **v9;
          v17 = (float)v19;
          sub_488830((void **)v9, (BSExtraDataVtbl *)LODWORD(v17), (int)v13, v16, 1);
        }
        else
        {
          ExtraDataList_SetExtraCount(**v9, ExtraCount - 1);
        }
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)v9, v15);
        FormHeapFree((unsigned int)v9);
        Float = 1.0;
        Tile_SetFloat(v5[0xF], (_DWORD *)0xFA1, 1.0);
      }
      TESDataHandler_g_PlayerRef->vtbl->super.Unk_B0((Actor *)TESDataHandler_g_PlayerRef);
      sub_5D0B80();
      sub_5D1080((int)v5, (int)v5, Float, a1, st6_0, 1);
    }
    *((_BYTE *)v5 + 0x64) = 0;
  }
}

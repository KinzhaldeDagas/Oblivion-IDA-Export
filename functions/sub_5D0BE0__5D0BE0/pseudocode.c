int __thiscall sub_5D0BE0(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  TESForm *v3; // eax
  EntryData *InventoryEntryOfItem; // eax
  int v5; // edx
  Sky *v6; // esi
  int type; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  float v12; // [esp+0h] [ebp-24h]
  float Health; // [esp+4h] [ebp-20h]
  float v14; // [esp+8h] [ebp-1Ch]
  int HealthForForm; // [esp+20h] [ebp-4h]

  if ( !TESDataHandler_g_PlayerRef )
    return 0;
  v1 = (_DWORD *)*(this + 0x1B);
  v2 = 0;
  while ( v1 )
  {
    v3 = *(TESForm **)(v1[2] + 4);
    v1 = (_DWORD *)*v1;
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)TESDataHandler_g_PlayerRef, v3, 0);
    v6 = (Sky *)InventoryEntryOfItem;
    if ( InventoryEntryOfItem )
    {
      type = InventoryEntryOfItem->type->member.type;
      if ( (type == 0x14 || type == 0x21) && ContainerEntryExtraData_GetHealth((void **)&v6->vtbl, 1) < fCostant_100 )
      {
        HealthForForm = TESHealthForm_GetHealthForForm(v6->nodeMoonsRoot);
        sub_470520(v6->nodeMoonsRoot);
        v14 = (float)v8;
        Health = ContainerEntryExtraData_GetHealth((void **)&v6->vtbl, 0);
        v12 = (float)HealthForForm;
        sub_5483C0(v12, Health, v14);
        v10 = v9;
        if ( v9 <= 1 )
          v10 = 1;
        v2 += v10 * (_DWORD)TESHealthForm_GetHealth(v6);
      }
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v6, v5);
      FormHeapFree((unsigned int)v6);
    }
  }
  return v2;
}

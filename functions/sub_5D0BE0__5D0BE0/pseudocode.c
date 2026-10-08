int __thiscall sub_5D0BE0(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  TESForm *v3; // eax
  EntryData *InventoryEntryOfItem; // eax
  int v5; // edx
  TESHealthForm *v6; // esi
  int type; // eax
  int v8; // eax
  int v9; // edi
  float v11; // [esp+0h] [ebp-24h]
  float Health; // [esp+4h] [ebp-20h]
  float Value; // [esp+8h] [ebp-1Ch]
  int HealthForForm; // [esp+20h] [ebp-4h]

  if ( !reference ) /*0x5d0be3*/
    return 0; /*0x5d0cc7*/
  v1 = (_DWORD *)*(this + 0x1B); /*0x5d0bf1*/
  v2 = 0; /*0x5d0bf5*/
  while ( v1 ) /*0x5d0bf9*/
  {
    v3 = *(TESForm **)(v1[2] + 4); /*0x5d0c0c*/
    v1 = (_DWORD *)*v1; /*0x5d0c0f*/
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v3, 0); /*0x5d0c14*/
    v6 = (TESHealthForm *)InventoryEntryOfItem; /*0x5d0c19*/
    if ( InventoryEntryOfItem ) /*0x5d0c1d*/
    {
      type = InventoryEntryOfItem->type->member.type; /*0x5d0c26*/
      if ( (type == 0x14 || type == 0x21) && ContainerEntryExtraData_GetHealth((void **)&v6->vtbl, 1) < fCostant_100 ) /*0x5d0c48*/
      {
        HealthForForm = TESHealthForm_GetHealthForForm(v6[1].vtbl); /*0x5d0c53*/
        Value = (float)TESForm_GetValue((TESForm *)v6[1].vtbl); /*0x5d0c6d*/
        Health = ContainerEntryExtraData_GetHealth((void **)&v6->vtbl, 0); /*0x5d0c7a*/
        v11 = (float)HealthForForm; /*0x5d0c82*/
        sub_5483C0(v11, Health, Value); /*0x5d0c85*/
        v9 = v8; /*0x5d0c8a*/
        if ( v8 <= 1 ) /*0x5d0c92*/
          v9 = 1; /*0x5d0c94*/
        v2 += v9 * TESHealthForm_GetHealth(v6); /*0x5d0ca3*/
      }
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v6, v5); /*0x5d0ca7*/
      FormHeapFree((unsigned int)v6); /*0x5d0cad*/
    }
  }
  return v2; /*0x5d0cc3*/
}
